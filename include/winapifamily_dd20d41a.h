#include <winpackagefamily.h>
  (WINAPI_FAMILY == WINAPI_FAMILY_DESKTOP_APP || \
   WINAPI_FAMILY == WINAPI_FAMILY_PC_APP || \
   WINAPI_FAMILY == WINAPI_FAMILY_PHONE_APP)
  (WINAPI_FAMILY == WINAPI_FAMILY_DESKTOP_APP || \
   WINAPI_FAMILY == WINAPI_FAMILY_PC_APP)
  (WINAPI_FAMILY == WINAPI_FAMILY_GAMES || \
   WINAPI_FAMILY == WINAPI_FAMILY_DESKTOP_APP)
  (WINAPI_FAMILY == WINAPI_FAMILY_SYSTEM || \
   WINAPI_FAMILY == WINAPI_FAMILY_GAMES || \
   WINAPI_FAMILY == WINAPI_FAMILY_SERVER)