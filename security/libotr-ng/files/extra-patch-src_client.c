--- src/client.c.orig	2019-05-05 15:21:28 UTC
+++ src/client.c
@@ -563,7 +563,7 @@ INTERNAL void otrng_client_expire_sessions(otrng_clien
   const list_element_s *el = NULL;
   otrng_conversation_s *conv = NULL;
   time_t now;
-  uint32_t expiration_time;
+  time_t expiration_time;
 
   now = time(NULL);
 
