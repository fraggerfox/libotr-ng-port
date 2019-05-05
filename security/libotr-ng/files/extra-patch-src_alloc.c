--- src/alloc.c.orig	2019-05-05 15:22:09 UTC
+++ src/alloc.c
@@ -39,7 +39,7 @@ INTERNAL /*@only@*/ /*@notnull@*/ void *otrng_xmalloc(
     if (oom_handler != NULL) {
       oom_handler();
     }
-    fprintf(stderr, "fatal: memory exhausted (xmalloc of %lu bytes).\n", size);
+    fprintf(stderr, "fatal: memory exhausted (xmalloc of %u bytes).\n", size);
     exit(EXIT_FAILURE);
   }
 
@@ -59,7 +59,7 @@ otrng_xrealloc(/*@only@*/ /*@null@*/ void *ptr, size_t
     if (oom_handler != NULL) {
       oom_handler();
     }
-    fprintf(stderr, "fatal: memory exhausted (xrealloc of %lu bytes).\n", size);
+    fprintf(stderr, "fatal: memory exhausted (xrealloc of %u bytes).\n", size);
     exit(EXIT_FAILURE);
   }
 
