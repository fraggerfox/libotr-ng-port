time_t is a Machine-Dependent variable and doing comaprisons against
uint32_t is not wise, for example the comparison check raises a warning
in i386 where sizeof(time_t) is 4 (in contrast to 8 in amd64). This may
lead to undesirable consequences.

XXX: Discuss this with the upstream people.

--- src/client.c.orig	2019-05-05 15:21:28 UTC
+++ src/client.c
@@ -563,7 +563,7 @@ INTERNAL void otrng_client_expire_sessions(otrng_clien
   const list_element_s *el = NULL;
   otrng_conversation_s *conv = NULL;
   time_t now;
-  uint32_t expiration_time;
+  time_t expiration_time;
 
   now = time(NULL);
 
