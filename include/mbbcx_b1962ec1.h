    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef enum _MBB_MBIM_VERSION {
    MBB_MBIM_VERSION1_0 = 0,
    MBB_MBIM_VERSION1_0_ERRATA,
    MBB_MBIM_HIGHEST_SUPPORTED_VERSION = MBB_MBIM_VERSION1_0_ERRATA,
} MBB_MBIM_VERSION;
typedef enum _MBB_MBIM_EXTENDED_VERSION {
    MBB_MBIM_EXTENDED_VERSION1_0 = 0,
    MBB_MBIM_EXTENDED_VERSION2_0,
    MBB_MBIM_HIGHEST_SUPPORTED_EXTENDED_VERSION = MBB_MBIM_EXTENDED_VERSION2_0,
} MBB_MBIM_EXTENDED_VERSION;
#include <mbbcxtypes.h>
#include <mbbfuncenum.h>
typedef
_Function_class_(EVT_MBB_DEVICE_SEND_MBIM_FRAGMENT)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_MBB_DEVICE_SEND_MBIM_FRAGMENT(
    _In_
    WDFDEVICE Device,
    _In_
    MBBREQUEST SendRequest
    );
typedef EVT_MBB_DEVICE_SEND_MBIM_FRAGMENT *PFN_MBB_DEVICE_SEND_MBIM_FRAGMENT;
typedef
_Function_class_(EVT_MBB_DEVICE_RECEIVE_MBIM_FRAGMENT)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_MBB_DEVICE_RECEIVE_MBIM_FRAGMENT(
    _In_
    WDFDEVICE Device,
    _In_
    MBBREQUEST ReceiveRequest
    );
typedef EVT_MBB_DEVICE_RECEIVE_MBIM_FRAGMENT *PFN_MBB_DEVICE_RECEIVE_MBIM_FRAGMENT;
typedef
_Function_class_(EVT_MBB_DEVICE_SEND_DEVICE_SERVICE_SESSION_DATA)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_MBB_DEVICE_SEND_DEVICE_SERVICE_SESSION_DATA(
    _In_
    WDFDEVICE Device,
    _In_
    DSS_SESSION_ID SessionId,
    _In_
    WDFMEMORY Data
    );
typedef EVT_MBB_DEVICE_SEND_DEVICE_SERVICE_SESSION_DATA *PFN_MBB_DEVICE_SEND_DEVICE_SERVICE_SESSION_DATA;
typedef
_Function_class_(EVT_MBB_DEVICE_CREATE_ADAPTER)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_MBB_DEVICE_CREATE_ADAPTER(
    _In_
    WDFDEVICE Device,
    _In_
    NETADAPTER_INIT * AdapterInit
    );
typedef EVT_MBB_DEVICE_CREATE_ADAPTER *PFN_MBB_DEVICE_CREATE_ADAPTER;
typedef struct _MBB_DEVICE_CONFIG
{
    ULONG Size;
    PFN_MBB_DEVICE_SEND_MBIM_FRAGMENT SendMbimFragment;
    PFN_MBB_DEVICE_RECEIVE_MBIM_FRAGMENT ReceiveMbimFragment;
    PFN_MBB_DEVICE_SEND_DEVICE_SERVICE_SESSION_DATA SendDeviceServiceSessionData;
    PFN_MBB_DEVICE_CREATE_ADAPTER CreateAdapter;
} MBB_DEVICE_CONFIG, *PMBB_DEVICE_CONFIG;
FORCEINLINE
VOID
MBB_DEVICE_CONFIG_INIT(
    _Out_ PMBB_DEVICE_CONFIG Config,
    _In_ PFN_MBB_DEVICE_SEND_MBIM_FRAGMENT SendMbimFragment,
    _In_ PFN_MBB_DEVICE_RECEIVE_MBIM_FRAGMENT ReceiveMbimFragment,
    _In_ PFN_MBB_DEVICE_SEND_DEVICE_SERVICE_SESSION_DATA SendDeviceServiceSessionData,
    _In_ PFN_MBB_DEVICE_CREATE_ADAPTER CreateAdapter
    )
{
    RtlZeroMemory(Config, sizeof(*Config));
    Config->Size = sizeof(*Config);
    Config->SendMbimFragment = SendMbimFragment;
    Config->ReceiveMbimFragment = ReceiveMbimFragment;
    Config->SendDeviceServiceSessionData = SendDeviceServiceSessionData;
    Config->CreateAdapter = CreateAdapter;
}
typedef struct _MBB_DEVICE_MBIM_PARAMETERS
{
    ULONG Size;
    MBB_MBIM_VERSION Version;
    MBB_MBIM_EXTENDED_VERSION ExtendedVersion;
    ULONG MaximumFragmentSize;
} MBB_DEVICE_MBIM_PARAMETERS, *PMBB_DEVICE_MBIM_PARAMETERS;
FORCEINLINE
VOID
MBB_DEVICE_MBIM_PARAMETERS_INIT(
    _Out_ PMBB_DEVICE_MBIM_PARAMETERS MbimParameters,
    _In_ MBB_MBIM_VERSION Version,
    _In_ ULONG MaximumFragmentSize,
    _In_ MBB_MBIM_EXTENDED_VERSION ExtendedVersion
    )
{
    RtlZeroMemory(MbimParameters, sizeof(*MbimParameters));
    MbimParameters->Size = sizeof(*MbimParameters);
    MbimParameters->Version = Version;
    MbimParameters->ExtendedVersion = ExtendedVersion;
    MbimParameters->MaximumFragmentSize = MaximumFragmentSize;
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_MBBDEVICEINITCONFIG)(
    _In_
    PMBB_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    PWDFDEVICE_INIT DeviceInit
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
NTSTATUS
MbbDeviceInitConfig(
    _Inout_
    PWDFDEVICE_INIT DeviceInit
    )
{
    return ((PFN_MBBDEVICEINITCONFIG) MbbFunctions[MbbDeviceInitConfigTableIndex])(MbbDriverGlobals, DeviceInit);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_MBBDEVICEINITIALIZE)(
    _In_
    PMBB_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PMBB_DEVICE_CONFIG Config
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
NTSTATUS
MbbDeviceInitialize(
    _In_
    WDFDEVICE Device,
    _In_
    PMBB_DEVICE_CONFIG Config
    )
{
    return ((PFN_MBBDEVICEINITIALIZE) MbbFunctions[MbbDeviceInitializeTableIndex])(MbbDriverGlobals, Device, Config);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
VOID
(*PFN_MBBDEVICESETMBIMPARAMETERS)(
    _In_
    PMBB_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PMBB_DEVICE_MBIM_PARAMETERS MbimParameters
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
VOID
MbbDeviceSetMbimParameters(
    _In_
    WDFDEVICE Device,
    _In_
    PMBB_DEVICE_MBIM_PARAMETERS MbimParameters
    )
{
    ((PFN_MBBDEVICESETMBIMPARAMETERS) MbbFunctions[MbbDeviceSetMbimParametersTableIndex])(MbbDriverGlobals, Device, MbimParameters);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_MBBDEVICERESPONSEAVAILABLE)(
    _In_
    PMBB_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
VOID
MbbDeviceResponseAvailable(
    _In_
    WDFDEVICE Device
    )
{
    ((PFN_MBBDEVICERESPONSEAVAILABLE) MbbFunctions[MbbDeviceResponseAvailableTableIndex])(MbbDriverGlobals, Device);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
VOID
(*PFN_MBBDEVICESENDDEVICESERVICESESSIONDATACOMPLETE)(
    _In_
    PMBB_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFMEMORY Data,
    _In_
    NTSTATUS NtStatus
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
VOID
MbbDeviceSendDeviceServiceSessionDataComplete(
    _In_
    WDFMEMORY Data,
    _In_
    NTSTATUS NtStatus
    )
{
    ((PFN_MBBDEVICESENDDEVICESERVICESESSIONDATACOMPLETE) MbbFunctions[MbbDeviceSendDeviceServiceSessionDataCompleteTableIndex])(MbbDriverGlobals, Data, NtStatus);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
VOID
(*PFN_MBBDEVICERECEIVEDEVICESERVICESESSIONDATA)(
    _In_
    PMBB_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    DSS_SESSION_ID SessionId,
    _In_
    WDFMEMORY Data
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
VOID
MbbDeviceReceiveDeviceServiceSessionData(
    _In_
    WDFDEVICE Device,
    _In_
    DSS_SESSION_ID SessionId,
    _In_
    WDFMEMORY Data
    )
{
    ((PFN_MBBDEVICERECEIVEDEVICESERVICESESSIONDATA) MbbFunctions[MbbDeviceReceiveDeviceServiceSessionDataTableIndex])(MbbDriverGlobals, Device, SessionId, Data);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_MBBADAPTERINITIALIZE)(
    _In_
    PMBB_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETADAPTER Adapter
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
NTSTATUS
MbbAdapterInitialize(
    _In_
    NETADAPTER Adapter
    )
{
    return ((PFN_MBBADAPTERINITIALIZE) MbbFunctions[MbbAdapterInitializeTableIndex])(MbbDriverGlobals, Adapter);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
ULONG
(*PFN_MBBADAPTERGETSESSIONID)(
    _In_
    PMBB_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETADAPTER Adapter
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
ULONG
MbbAdapterGetSessionId(
    _In_
    NETADAPTER Adapter
    )
{
    return ((PFN_MBBADAPTERGETSESSIONID) MbbFunctions[MbbAdapterGetSessionIdTableIndex])(MbbDriverGlobals, Adapter);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
PVOID
(*PFN_MBBREQUESTGETBUFFER)(
    _In_
    PMBB_DRIVER_GLOBALS DriverGlobals,
    _In_
    MBBREQUEST Request,
    _Out_opt_
    size_t* BufferSize
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
PVOID
MbbRequestGetBuffer(
    _In_
    MBBREQUEST Request,
    _Out_opt_
    size_t* BufferSize
    )
{
    return ((PFN_MBBREQUESTGETBUFFER) MbbFunctions[MbbRequestGetBufferTableIndex])(MbbDriverGlobals, Request, BufferSize);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
LPCGUID
(*PFN_MBBREQUESTGETCORRELATIONID)(
    _In_
    PMBB_DRIVER_GLOBALS DriverGlobals,
    _In_
    MBBREQUEST Request
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
LPCGUID
MbbRequestGetCorrelationId(
    _In_
    MBBREQUEST Request
    )
{
    return ((PFN_MBBREQUESTGETCORRELATIONID) MbbFunctions[MbbRequestGetCorrelationIdTableIndex])(MbbDriverGlobals, Request);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_MBBREQUESTCOMPLETE)(
    _In_
    PMBB_DRIVER_GLOBALS DriverGlobals,
    _In_
    MBBREQUEST Request,
    _In_
    NTSTATUS NtStatus
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
VOID
MbbRequestComplete(
    _In_
    MBBREQUEST Request,
    _In_
    NTSTATUS NtStatus
    )
{
    ((PFN_MBBREQUESTCOMPLETE) MbbFunctions[MbbRequestCompleteTableIndex])(MbbDriverGlobals, Request, NtStatus);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_MBBREQUESTCOMPLETEWITHINFORMATION)(
    _In_
    PMBB_DRIVER_GLOBALS DriverGlobals,
    _In_
    MBBREQUEST Request,
    _In_
    NTSTATUS NtStatus,
    _In_
    ULONG_PTR Information
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
VOID
MbbRequestCompleteWithInformation(
    _In_
    MBBREQUEST Request,
    _In_
    NTSTATUS NtStatus,
    _In_
    ULONG_PTR Information
    )
{
    ((PFN_MBBREQUESTCOMPLETEWITHINFORMATION) MbbFunctions[MbbRequestCompleteWithInformationTableIndex])(MbbDriverGlobals, Request, NtStatus, Information);
}
WDF_EXTERN_C_END
