    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
DECLARE_HANDLE(UCXCONTROLLER);
DECLARE_HANDLE(UCXROOTHUB);
DECLARE_HANDLE(UCXUSBDEVICE);
DECLARE_HANDLE(UCXENDPOINT);
DECLARE_HANDLE(UCXSSTREAMS);
typedef struct _UCXUSBDEVICE_INIT *PUCXUSBDEVICE_INIT;
typedef struct _UCXENDPOINT_INIT *PUCXENDPOINT_INIT;
typedef struct _UCXSSTREAMS_INIT *PUCXSSTREAMS_INIT;
WDF_EXTERN_C_END