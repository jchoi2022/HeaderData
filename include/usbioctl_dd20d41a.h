#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#include "usb200.h"
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#pragma warning(disable:4200)
#include "usbiodef.h"
                                            CTL_CODE(FILE_DEVICE_USB, \
                                            USB_SUBMIT_URB, \
                                            METHOD_NEITHER, \
                                            FILE_ANY_ACCESS)
                                            CTL_CODE(FILE_DEVICE_USB, \
                                            USB_RESET_PORT, \
                                            METHOD_NEITHER, \
                                            FILE_ANY_ACCESS)
                                            CTL_CODE(FILE_DEVICE_USB, \
                                            USB_GET_ROOTHUB_PDO, \
                                            METHOD_NEITHER, \
                                            FILE_ANY_ACCESS)
                                            CTL_CODE(FILE_DEVICE_USB, \
                                            USB_GET_PORT_STATUS, \
                                            METHOD_NEITHER, \
                                            FILE_ANY_ACCESS)
                                            CTL_CODE(FILE_DEVICE_USB, \
                                            USB_ENABLE_PORT, \
                                            METHOD_NEITHER, \
                                            FILE_ANY_ACCESS)
                                            CTL_CODE(FILE_DEVICE_USB, \
                                            USB_GET_HUB_COUNT, \
                                            METHOD_NEITHER, \
                                            FILE_ANY_ACCESS)
                                            CTL_CODE(FILE_DEVICE_USB, \
                                            USB_CYCLE_PORT, \
                                            METHOD_NEITHER, \
                                            FILE_ANY_ACCESS)
                                            CTL_CODE(FILE_DEVICE_USB, \
                                            USB_GET_HUB_NAME, \
                                            METHOD_BUFFERED, \
                                            FILE_ANY_ACCESS)
                                                    USB_GET_BUS_INFO, \
                                                    METHOD_BUFFERED, \
                                                    FILE_ANY_ACCESS)
                                                    USB_GET_CONTROLLER_NAME, \
                                                    METHOD_BUFFERED, \
                                                    FILE_ANY_ACCESS)
                                                    USB_GET_BUSGUID_INFO, \
                                                    METHOD_BUFFERED, \
                                                    FILE_ANY_ACCESS)
                                                    USB_GET_PARENT_HUB_INFO, \
                                                    METHOD_BUFFERED, \
                                                    FILE_ANY_ACCESS)
                                            CTL_CODE(FILE_DEVICE_USB, \
                                            USB_IDLE_NOTIFICATION, \
                                            METHOD_NEITHER, \
                                            FILE_ANY_ACCESS)
                                                    USB_GET_DEVICE_HANDLE, \
                                                    METHOD_NEITHER, \
                                                    FILE_ANY_ACCESS)
                                                    USB_IDLE_NOTIFICATION_EX, \
                                                    METHOD_NEITHER, \
                                                    FILE_ANY_ACCESS)
                                                    USB_REQ_GLOBAL_SUSPEND, \
                                                    METHOD_NEITHER, \
                                                    FILE_ANY_ACCESS)
                                                    USB_REQ_GLOBAL_RESUME, \
                                                    METHOD_NEITHER, \
                                                    FILE_ANY_ACCESS)
typedef struct _USB_START_FAILDATA {
    ULONG LengthInBytes;
    NTSTATUS NtStatus;
    USBD_STATUS UsbdStatus;
    ULONG ConnectStatus;
    UCHAR DriverData[4];
} USB_START_FAILDATA, *PUSB_START_FAILDATA;
                                                    USB_RECORD_FAILURE, \
                                                    METHOD_NEITHER, \
                                                    FILE_ANY_ACCESS)
                                                      USB_GET_DEVICE_HANDLE_EX, \
                                                      METHOD_NEITHER, \
                                                      FILE_ANY_ACCESS)
                                                      USB_GET_TT_DEVICE_HANDLE, \
                                                      METHOD_NEITHER, \
                                                      FILE_ANY_ACCESS)
typedef struct _USB_TOPOLOGY_ADDRESS {
        ULONG PciBusNumber;
        ULONG PciDeviceNumber;
        ULONG PciFunctionNumber;
        ULONG Reserved;
        USHORT RootHubPortNumber;
        USHORT HubPortNumber[5];
        USHORT Reserved2;
} USB_TOPOLOGY_ADDRESS, *PUSB_TOPOLOGY_ADDRESS;
                                                      USB_GET_TOPOLOGY_ADDRESS, \
                                                      METHOD_NEITHER, \
                                                      FILE_ANY_ACCESS)
                                                      USB_GET_HUB_CONFIG_INFO, \
                                                      METHOD_NEITHER, \
                                                      FILE_ANY_ACCESS)
                                                      USB_REGISTER_COMPOSITE_DEVICE, \
                                                      METHOD_NEITHER, \
                                                      FILE_ANY_ACCESS)
                                                        USB_UNREGISTER_COMPOSITE_DEVICE, \
                                                        METHOD_NEITHER, \
                                                        FILE_ANY_ACCESS)
                                                             USB_REQUEST_REMOTE_WAKE_NOTIFICATION, \
                                                             METHOD_NEITHER, \
                                                             FILE_ANY_ACCESS)
                                                                USB_FAIL_GET_STATUS, \
                                                                METHOD_NEITHER, \
                                                                FILE_ANY_ACCESS)
                                                HCD_GET_STATS_1, \
                                                METHOD_BUFFERED, \
                                                FILE_ANY_ACCESS)
                                                HCD_GET_STATS_2, \
                                                METHOD_BUFFERED, \
                                                FILE_ANY_ACCESS)
                                                HCD_DISABLE_PORT, \
                                                METHOD_BUFFERED, \
                                                FILE_ANY_ACCESS)
                                                HCD_ENABLE_PORT, \
                                                METHOD_BUFFERED, \
                                                FILE_ANY_ACCESS)
                                                HCD_DIAGNOSTIC_MODE_ON, \
                                                METHOD_BUFFERED, \
                                                FILE_ANY_ACCESS)
                                                HCD_DIAGNOSTIC_MODE_OFF, \
                                                METHOD_BUFFERED, \
                                                FILE_ANY_ACCESS)
                                                HCD_GET_ROOT_HUB_NAME, \
                                                METHOD_BUFFERED, \
                                                FILE_ANY_ACCESS)
                                                HCD_GET_DRIVERKEY_NAME, \
                                                METHOD_BUFFERED, \
                                                FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                USB_GET_NODE_INFORMATION, \
                                METHOD_BUFFERED, \
                                FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                USB_GET_NODE_CONNECTION_INFORMATION, \
                                METHOD_BUFFERED, \
                                FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                USB_GET_DESCRIPTOR_FROM_NODE_CONNECTION, \
                                METHOD_BUFFERED, \
                                FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                USB_GET_NODE_CONNECTION_NAME, \
                                METHOD_BUFFERED, \
                                FILE_ANY_ACCESS)
                                USB_DIAG_IGNORE_HUBS_ON, \
                                METHOD_BUFFERED, \
                                FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                USB_DIAG_IGNORE_HUBS_OFF, \
                                METHOD_BUFFERED, \
                                FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                USB_GET_NODE_CONNECTION_DRIVERKEY_NAME, \
                                METHOD_BUFFERED, \
                                FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                USB_GET_HUB_CAPABILITIES, \
                                METHOD_BUFFERED, \
                                FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                USB_HUB_CYCLE_PORT, \
                                METHOD_BUFFERED, \
                                FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                USB_GET_NODE_CONNECTION_ATTRIBUTES,\
                                METHOD_BUFFERED, \
                                FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                USB_GET_NODE_CONNECTION_INFORMATION_EX, \
                                METHOD_BUFFERED, \
                                FILE_ANY_ACCESS)
            CTL_CODE(FILE_DEVICE_USB, \
                    USB_RESET_HUB,\
                    METHOD_BUFFERED, \
                    FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                    USB_GET_HUB_CAPABILITIES_EX, \
                                    METHOD_BUFFERED, \
                                    FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                   USB_GET_HUB_INFORMATION_EX,\
                                   METHOD_BUFFERED, \
                                   FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                    USB_GET_PORT_CONNECTOR_PROPERTIES, \
                                    METHOD_BUFFERED, \
                                    FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                    USB_GET_NODE_CONNECTION_INFORMATION_EX_V2, \
                                    METHOD_BUFFERED, \
                                    FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                    USB_GET_TRANSPORT_CHARACTERISTICS, \
                                    METHOD_BUFFERED, \
                                    FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                    USB_REGISTER_FOR_TRANSPORT_CHARACTERISTICS_CHANGE, \
                                    METHOD_BUFFERED, \
                                    FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                    USB_NOTIFY_ON_TRANSPORT_CHARACTERISTICS_CHANGE, \
                                    METHOD_BUFFERED, \
                                    FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                    USB_UNREGISTER_FOR_TRANSPORT_CHARACTERISTICS_CHANGE, \
                                    METHOD_BUFFERED, \
                                    FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                    USB_START_TRACKING_FOR_TIME_SYNC, \
                                    METHOD_BUFFERED, \
                                    FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                    USB_GET_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC, \
                                    METHOD_BUFFERED, \
                                    FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                    USB_STOP_TRACKING_FOR_TIME_SYNC, \
                                    METHOD_BUFFERED, \
                                    FILE_ANY_ACCESS)
                                CTL_CODE(FILE_DEVICE_USB, \
                                    USB_GET_DEVICE_CHARACTERISTICS, \
                                    METHOD_BUFFERED, \
                                    FILE_ANY_ACCESS)
#include <pshpack1.h>
typedef enum _USB_HUB_NODE {
    UsbHub,
    UsbMIParent
} USB_HUB_NODE;
typedef struct _USB_HUB_INFORMATION {
    USB_HUB_DESCRIPTOR HubDescriptor;
    BOOLEAN HubIsBusPowered;
} USB_HUB_INFORMATION, *PUSB_HUB_INFORMATION;
typedef struct _USB_MI_PARENT_INFORMATION {
    ULONG NumberOfInterfaces;
} USB_MI_PARENT_INFORMATION, *PUSB_MI_PARENT_INFORMATION;
typedef struct _USB_NODE_INFORMATION {
    USB_HUB_NODE NodeType;
    union {
        USB_HUB_INFORMATION HubInformation;
        USB_MI_PARENT_INFORMATION MiParentInformation;
    } u;
} USB_NODE_INFORMATION, *PUSB_NODE_INFORMATION;
typedef struct _USB_PIPE_INFO {
    USB_ENDPOINT_DESCRIPTOR EndpointDescriptor;
    ULONG ScheduleOffset;
} USB_PIPE_INFO, *PUSB_PIPE_INFO;
typedef enum _USB_CONNECTION_STATUS {
    NoDeviceConnected,
    DeviceConnected,
    DeviceFailedEnumeration,
    DeviceGeneralFailure,
    DeviceCausedOvercurrent,
    DeviceNotEnoughPower,
    DeviceNotEnoughBandwidth,
    DeviceHubNestedTooDeeply,
    DeviceInLegacyHub,
    DeviceEnumerating,
    DeviceReset
} USB_CONNECTION_STATUS, *PUSB_CONNECTION_STATUS;
#pragma warning( disable : 4200 )
#pragma warning( disable : 4201 )
typedef struct _USB_NODE_CONNECTION_INFORMATION {
    ULONG ConnectionIndex;
    USB_DEVICE_DESCRIPTOR DeviceDescriptor;
    UCHAR CurrentConfigurationValue;
    BOOLEAN LowSpeed;
    BOOLEAN DeviceIsHub;
    USHORT DeviceAddress;
    ULONG NumberOfOpenPipes;
    USB_CONNECTION_STATUS ConnectionStatus;
    USB_PIPE_INFO PipeList[0];
} USB_NODE_CONNECTION_INFORMATION, *PUSB_NODE_CONNECTION_INFORMATION;
#pragma warning( default : 4200 )
#pragma warning( default : 4201 )
typedef struct _USB_NODE_CONNECTION_DRIVERKEY_NAME {
    ULONG ConnectionIndex;
    ULONG ActualLength;
    WCHAR DriverKeyName[1];
} USB_NODE_CONNECTION_DRIVERKEY_NAME, *PUSB_NODE_CONNECTION_DRIVERKEY_NAME;
typedef struct _USB_NODE_CONNECTION_NAME {
    ULONG ConnectionIndex;
    ULONG ActualLength;
    WCHAR NodeName[1];
} USB_NODE_CONNECTION_NAME, *PUSB_NODE_CONNECTION_NAME;
typedef struct _USB_HUB_NAME {
    ULONG ActualLength;
    WCHAR HubName[1];
} USB_HUB_NAME, *PUSB_HUB_NAME;
typedef struct _USB_ROOT_HUB_NAME {
    ULONG ActualLength;
    WCHAR RootHubName[1];
} USB_ROOT_HUB_NAME, *PUSB_ROOT_HUB_NAME;
typedef struct _USB_HCD_DRIVERKEY_NAME {
    ULONG ActualLength;
    WCHAR DriverKeyName[1];
} USB_HCD_DRIVERKEY_NAME, *PUSB_HCD_DRIVERKEY_NAME;
#pragma warning( disable : 4200 )
typedef struct _USB_DESCRIPTOR_REQUEST {
    ULONG ConnectionIndex;
    struct {
        UCHAR bmRequest;
        UCHAR bRequest;
        USHORT wValue;
        USHORT wIndex;
        USHORT wLength;
    } SetupPacket;
    UCHAR Data[0];
} USB_DESCRIPTOR_REQUEST, *PUSB_DESCRIPTOR_REQUEST;
#pragma warning( default : 4200 )
typedef struct _USB_HUB_CAPABILITIES {
    ULONG HubIs2xCapable:1;
} USB_HUB_CAPABILITIES, *PUSB_HUB_CAPABILITIES;
typedef struct _USB_NODE_CONNECTION_ATTRIBUTES {
    ULONG ConnectionIndex;
    USB_CONNECTION_STATUS ConnectionStatus;
    ULONG PortAttributes;
} USB_NODE_CONNECTION_ATTRIBUTES, *PUSB_NODE_CONNECTION_ATTRIBUTES;
#pragma warning( disable : 4200 )
typedef struct _USB_NODE_CONNECTION_INFORMATION_EX {
    ULONG ConnectionIndex;
    USB_DEVICE_DESCRIPTOR DeviceDescriptor;
    UCHAR CurrentConfigurationValue;
    UCHAR Speed;
    BOOLEAN DeviceIsHub;
    USHORT DeviceAddress;
    ULONG NumberOfOpenPipes;
    USB_CONNECTION_STATUS ConnectionStatus;
    USB_PIPE_INFO PipeList[0];
} USB_NODE_CONNECTION_INFORMATION_EX, *PUSB_NODE_CONNECTION_INFORMATION_EX;
C_ASSERT(sizeof(USB_NODE_CONNECTION_INFORMATION_EX) == \
    sizeof(USB_NODE_CONNECTION_INFORMATION));
#pragma warning( default : 4200 )
#pragma warning( disable : 4201 )
typedef union _USB_HUB_CAP_FLAGS {
    ULONG ul;
    struct {
        ULONG HubIsHighSpeedCapable:1;
        ULONG HubIsHighSpeed:1;
        ULONG HubIsMultiTtCapable:1;
        ULONG HubIsMultiTt:1;
        ULONG HubIsRoot:1;
        ULONG HubIsArmedWakeOnConnect:1;
        ULONG HubIsBusPowered:1;
        ULONG ReservedMBZ:25;
    };
} USB_HUB_CAP_FLAGS, *PUSB_HUB_CAP_FLAGS;
#pragma warning( default : 4201 )
C_ASSERT(sizeof(USB_HUB_CAP_FLAGS) == sizeof(ULONG));
typedef struct _USB_HUB_CAPABILITIES_EX {
    USB_HUB_CAP_FLAGS CapabilityFlags;
} USB_HUB_CAPABILITIES_EX, *PUSB_HUB_CAPABILITIES_EX;
typedef struct _USB_CYCLE_PORT_PARAMS {
    ULONG ConnectionIndex;
    ULONG StatusReturned;
} USB_CYCLE_PORT_PARAMS, *PUSB_CYCLE_PORT_PARAMS;
typedef struct _USB_ID_STRING {
    USHORT LanguageId;
    USHORT Pad;
    ULONG LengthInBytes;
    PWCHAR Buffer;
} USB_ID_STRING, *PUSB_ID_STRING;
typedef struct _USB_HUB_DEVICE_UXD_SETTINGS {
    ULONG Version;
    GUID PnpGuid;
    GUID OwnerGuid;
    ULONG DeleteOnShutdown;
    ULONG DeleteOnReload;
    ULONG DeleteOnDisconnect;
    ULONG Reserved[5];
} USB_HUB_DEVICE_UXD_SETTINGS, *PUSB_HUB_DEVICE_UXD_SETTINGS;
typedef struct _HUB_DEVICE_CONFIG_INFO_V1 {
    ULONG Version;
    ULONG Length;
    USB_HUB_CAP_FLAGS HubFlags;
    USB_ID_STRING HardwareIds;
    USB_ID_STRING CompatibleIds;
    USB_ID_STRING DeviceDescription;
    ULONG Reserved[19];
    USB_HUB_DEVICE_UXD_SETTINGS UxdSettings;
} HUB_DEVICE_CONFIG_INFO, *PHUB_DEVICE_CONFIG_INFO;
typedef struct _HCD_STAT_COUNTERS {
    ULONG BytesTransferred;
    USHORT IsoMissedCount;
    USHORT DataOverrunErrorCount;
    USHORT CrcErrorCount;
    USHORT ScheduleOverrunCount;
    USHORT TimeoutErrorCount;
    USHORT InternalHcErrorCount;
    USHORT BufferOverrunErrorCount;
    USHORT SWErrorCount;
    USHORT StallPidCount;
    USHORT PortDisableCount;
} HCD_STAT_COUNTERS, *PHCD_STAT_COUNTERS;
typedef struct _HCD_ISO_STAT_COUNTERS {
    USHORT LateUrbs;
    USHORT DoubleBufferedPackets;
    USHORT TransfersCF_5ms;
    USHORT TransfersCF_2ms;
    USHORT TransfersCF_1ms;
    USHORT MaxInterruptLatency;
    USHORT BadStartFrame;
    USHORT StaleUrbs;
    USHORT IsoPacketNotAccesed;
    USHORT IsoPacketHWError;
    USHORT SmallestUrbPacketCount;
    USHORT LargestUrbPacketCount;
    USHORT IsoCRC_Error;
    USHORT IsoOVERRUN_Error;
    USHORT IsoINTERNAL_Error;
    USHORT IsoUNKNOWN_Error;
    ULONG IsoBytesTransferred;
    USHORT LateMissedCount;
    USHORT HWIsoMissedCount;
    ULONG Reserved7[8];
} HCD_ISO_STAT_COUNTERS, *PHCD_ISO_STAT_COUNTERS;
typedef struct _HCD_STAT_INFORMATION_1 {
    ULONG Reserved1;
    ULONG Reserved2;
    ULONG ResetCounters;
    LARGE_INTEGER TimeRead;
    HCD_STAT_COUNTERS Counters;
} HCD_STAT_INFORMATION_1, *PHCD_STAT_INFORMATION_1;
typedef struct _HCD_STAT_INFORMATION_2 {
    ULONG Reserved1;
    ULONG Reserved2;
    ULONG ResetCounters;
    LARGE_INTEGER TimeRead;
    LONG LockedMemoryUsed;
    HCD_STAT_COUNTERS Counters;
    HCD_ISO_STAT_COUNTERS IsoCounters;
} HCD_STAT_INFORMATION_2, *PHCD_STAT_INFORMATION_2;
typedef enum _USB_NOTIFICATION_TYPE {
    EnumerationFailure = 0,
    InsufficentBandwidth,
    InsufficentPower,
    OverCurrent,
    ResetOvercurrent,
    AcquireBusInfo,
    AcquireHubName,
    AcquireControllerName,
    HubOvercurrent,
    HubPowerChange,
    HubNestedTooDeeply,
    ModernDeviceInLegacyHub
} USB_NOTIFICATION_TYPE;
typedef struct _USB_NOTIFICATION {
    USB_NOTIFICATION_TYPE NotificationType;
} USB_NOTIFICATION, *PUSB_NOTIFICATION;
typedef struct _USB_CONNECTION_NOTIFICATION {
    USB_NOTIFICATION_TYPE NotificationType;
    ULONG ConnectionNumber;
    ULONG RequestedBandwidth;
    ULONG EnumerationFailReason;
    ULONG PowerRequested;
    ULONG HubNameLength;
} USB_CONNECTION_NOTIFICATION, *PUSB_CONNECTION_NOTIFICATION;
typedef struct _USB_BUS_NOTIFICATION {
    USB_NOTIFICATION_TYPE NotificationType;
    ULONG TotalBandwidth;
    ULONG ConsumedBandwidth;
    ULONG ControllerNameLength;
} USB_BUS_NOTIFICATION, *PUSB_BUS_NOTIFICATION;
typedef struct _USB_ACQUIRE_INFO {
    USB_NOTIFICATION_TYPE NotificationType;
    ULONG TotalSize;
    WCHAR Buffer[1];
} USB_ACQUIRE_INFO, *PUSB_ACQUIRE_INFO;
typedef enum _USB_WMI_DEVICE_NODE_TYPE {
    UsbDevice,
    HubDevice,
    CompositeDevice,
    UsbController
} USB_WMI_DEVICE_NODE_TYPE, *PUSB_WMI_DEVICE_NODE_TYPE;
typedef struct _USB_DEVICE_STATE {
    ULONG DeviceConnected:1;
    ULONG DeviceStarted:1;
} USB_DEVICE_STATE, *PUSB_DEVICE_STATE;
typedef struct _USB_HUB_PORT_INFORMATION{
    USB_DEVICE_STATE DeviceState;
    USHORT PortNumber;
    USHORT DeviceAddress;
    ULONG ConnectionIndex;
    USB_CONNECTION_STATUS ConnectionStatus;
} USB_HUB_PORT_INFORMATION, *PUSB_HUB_PORT_INFORMATION;
typedef struct _USB_HUB_DEVICE_INFO {
    USB_HUB_DESCRIPTOR HubDescriptor;
    ULONG HubNumber;
    USHORT DeviceAddress;
    BOOLEAN HubIsSelfPowered;
    BOOLEAN HubIsRootHub;
    USB_HUB_CAPABILITIES HubCapabilities;
    ULONG NumberOfHubPorts;
    USB_HUB_PORT_INFORMATION PortInfo[1];
} USB_HUB_DEVICE_INFO, *PUSB_HUB_DEVICE_INFO;
typedef struct _USB_COMPOSITE_FUNCTION_INFO{
    UCHAR FunctionNumber;
    UCHAR BaseInterfaceNumber;
    UCHAR NumberOfInterfaces;
    BOOLEAN FunctionIsIdle;
} USB_COMPOSITE_FUNCTION_INFO, *PUSB_COMPOSITE_FUNCTION_INFO;
typedef struct _USB_COMPOSITE_DEVICE_INFO {
    USB_DEVICE_DESCRIPTOR DeviceDescriptor;
    USB_CONFIGURATION_DESCRIPTOR CurrentConfigDescriptor;
    UCHAR CurrentConfigurationValue;
    UCHAR NumberOfFunctions;
    USB_COMPOSITE_FUNCTION_INFO FunctionInfo[1];
} USB_COMPOSITE_DEVICE_INFO, *PUSB_COMPOSITE_DEVICE_INFO;
typedef struct _USB_CONTROLLER_DEVICE_INFO {
    ULONG PciVendorId;
    ULONG PciDeviceId;
    ULONG PciRevision;
    ULONG NumberOfRootPorts;
    ULONG HcFeatureFlags;
} USB_CONTROLLER_DEVICE_INFO, *PUSB_CONTROLLER_DEVICE_INFO;
typedef struct _USB_DEVICE_INFO{
    USB_DEVICE_STATE DeviceState;
    USHORT PortNumber;
    USB_DEVICE_DESCRIPTOR DeviceDescriptor;
    UCHAR CurrentConfigurationValue;
    USB_DEVICE_SPEED Speed;
    USHORT DeviceAddress;
    ULONG ConnectionIndex;
    USB_CONNECTION_STATUS ConnectionStatus;
    WCHAR PnpHardwareId[128];
    WCHAR PnpCompatibleId[128];
    WCHAR SerialNumberId[128];
    WCHAR PnpDeviceDescription[128];
    ULONG NumberOfOpenPipes;
    USB_PIPE_INFO PipeList[1];
} USB_DEVICE_INFO, *PUSB_DEVICE_INFO;
#pragma warning( disable : 4201 )
typedef struct _USB_DEVICE_NODE_INFO {
    ULONG Sig;
    ULONG LengthInBytes;
    WCHAR DeviceDescription[40];
    USB_WMI_DEVICE_NODE_TYPE NodeType;
    USB_TOPOLOGY_ADDRESS BusAddress;
    union{
        USB_DEVICE_INFO UsbDeviceInfo;
        USB_HUB_DEVICE_INFO HubDeviceInfo;
        USB_COMPOSITE_DEVICE_INFO CompositeDeviceInfo;
        USB_CONTROLLER_DEVICE_INFO ControllerDeviceInfo;
        UCHAR DeviceInformation[4];
    };
} USB_DEVICE_NODE_INFO, *PUSB_DEVICE_NODE_INFO;
#pragma warning( default : 4201 )
typedef struct _USB_DEVICE_PERFORMANCE_INFO {
    ULONG BulkBytes;
    ULONG ControlDataBytes;
    ULONG IsoBytes;
    ULONG InterruptBytes;
    ULONG BulkUrbCount;
    ULONG ControlUrbCount;
    ULONG IsoUrbCount;
    ULONG InterruptUrbCount;
    ULONG AllocedInterrupt[6];
    ULONG AllocedIso;
    ULONG Total32secBandwidth;
    ULONG TotalTtBandwidth;
    WCHAR DeviceDescription[60];
    USB_DEVICE_SPEED DeviceSpeed;
    ULONG TotalIsoLatency;
    ULONG DroppedIsoPackets;
    ULONG TransferErrors;
    ULONG PciInterruptCount;
    ULONG HcIdleState;
    ULONG HcAsyncIdleState;
    ULONG HcAsyncCacheFlushCount;
    ULONG HcPeriodicIdleState;
    ULONG HcPeriodicCacheFlushCount;
} USB_DEVICE_PERFORMANCE_INFO, *PUSB_DEVICE_PERFORMANCE_INFO;
typedef enum _USB_HUB_TYPE {
    UsbRootHub = 1,
    Usb20Hub = 2,
    Usb30Hub = 3
} USB_HUB_TYPE;
typedef struct _USB_HUB_INFORMATION_EX {
    USB_HUB_TYPE HubType;
    USHORT HighestPortNumber;
    union {
        USB_HUB_DESCRIPTOR UsbHubDescriptor;
        USB_30_HUB_DESCRIPTOR Usb30HubDescriptor;
    } u;
} USB_HUB_INFORMATION_EX, *PUSB_HUB_INFORMATION_EX;
#pragma warning( disable : 4201 )
typedef union _USB_PORT_PROPERTIES {
    ULONG ul;
    struct {
        ULONG PortIsUserConnectable :1;
        ULONG PortIsDebugCapable :1;
        ULONG PortHasMultipleCompanions :1;
        ULONG PortConnectorIsTypeC :1;
        ULONG ReservedMBZ :28;
    };
} USB_PORT_PROPERTIES, *PUSB_PORT_PROPERTIES;
#pragma warning( default : 4201 )
typedef struct _USB_PORT_CONNECTOR_PROPERTIES {
    ULONG ConnectionIndex;
    ULONG ActualLength;
    USB_PORT_PROPERTIES UsbPortProperties;
    USHORT CompanionIndex;
    USHORT CompanionPortNumber;
    WCHAR CompanionHubSymbolicLinkName[1];
} USB_PORT_CONNECTOR_PROPERTIES, *PUSB_PORT_CONNECTOR_PROPERTIES;
#pragma warning( disable : 4201 )
typedef union _USB_PROTOCOLS {
    ULONG ul;
    struct {
        ULONG Usb110 :1;
        ULONG Usb200 :1;
        ULONG Usb300 :1;
        ULONG ReservedMBZ :29;
    };
} USB_PROTOCOLS, *PUSB_PROTOCOLS;
typedef union _USB_NODE_CONNECTION_INFORMATION_EX_V2_FLAGS {
    ULONG ul;
    struct {
        ULONG DeviceIsOperatingAtSuperSpeedOrHigher :1;
        ULONG DeviceIsSuperSpeedCapableOrHigher :1;
        ULONG DeviceIsOperatingAtSuperSpeedPlusOrHigher :1;
        ULONG DeviceIsSuperSpeedPlusCapableOrHigher :1;
        ULONG ReservedMBZ :28;
    };
} USB_NODE_CONNECTION_INFORMATION_EX_V2_FLAGS, *PUSB_NODE_CONNECTION_INFORMATION_EX_V2_FLAGS;
#pragma warning( default : 4201 )
typedef struct _USB_NODE_CONNECTION_INFORMATION_EX_V2 {
    ULONG ConnectionIndex;
    ULONG Length;
    USB_PROTOCOLS SupportedUsbProtocols;
    USB_NODE_CONNECTION_INFORMATION_EX_V2_FLAGS Flags;
} USB_NODE_CONNECTION_INFORMATION_EX_V2, *PUSB_NODE_CONNECTION_INFORMATION_EX_V2;
#include <poppack.h>
#include <pshpack1.h>
typedef struct _USB_TRANSPORT_CHARACTERISTICS {
    ULONG Version;
    ULONG TransportCharacteristicsFlags;
    ULONG64 CurrentRoundtripLatencyInMilliSeconds;
    ULONG64 MaxPotentialBandwidth;
} USB_TRANSPORT_CHARACTERISTICS, *PUSB_TRANSPORT_CHARACTERISTICS;
DECLARE_HANDLE(USB_CHANGE_REGISTRATION_HANDLE);
typedef struct _USB_TRANSPORT_CHARACTERISTICS_CHANGE_REGISTRATION {
    ULONG ChangeNotificationInputFlags;
    USB_CHANGE_REGISTRATION_HANDLE Handle;
    USB_TRANSPORT_CHARACTERISTICS UsbTransportCharacteristics;
} USB_TRANSPORT_CHARACTERISTICS_CHANGE_REGISTRATION, *PUSB_TRANSPORT_CHARACTERISTICS_CHANGE_REGISTRATION;
typedef struct _USB_TRANSPORT_CHARACTERISTICS_CHANGE_NOTIFICATION {
    USB_CHANGE_REGISTRATION_HANDLE Handle;
    USB_TRANSPORT_CHARACTERISTICS UsbTransportCharacteristics;
} USB_TRANSPORT_CHARACTERISTICS_CHANGE_NOTIFICATION, *PUSB_TRANSPORT_CHARACTERISTICS_CHANGE_NOTIFICATION;
typedef struct _USB_TRANSPORT_CHARACTERISTICS_CHANGE_UNREGISTRATION {
    USB_CHANGE_REGISTRATION_HANDLE Handle;
} USB_TRANSPORT_CHARACTERISTICS_CHANGE_UNREGISTRATION, *PUSB_TRANSPORT_CHARACTERISTICS_CHANGE_UNREGISTRATION;
typedef struct _USB_DEVICE_CHARACTERISTICS {
    ULONG Version;
    ULONG Reserved[2];
    ULONG UsbDeviceCharacteristicsFlags;
    ULONG MaximumSendPathDelayInMilliSeconds;
    ULONG MaximumCompletionPathDelayInMilliSeconds;
} USB_DEVICE_CHARACTERISTICS, *PUSB_DEVICE_CHARACTERISTICS;
typedef struct _USB_START_TRACKING_FOR_TIME_SYNC_INFORMATION {
    HANDLE TimeTrackingHandle;
    BOOLEAN IsStartupDelayTolerable;
} USB_START_TRACKING_FOR_TIME_SYNC_INFORMATION, *PUSB_START_TRACKING_FOR_TIME_SYNC_INFORMATION;
typedef struct _USB_STOP_TRACKING_FOR_TIME_SYNC_INFORMATION {
    HANDLE TimeTrackingHandle;
} USB_STOP_TRACKING_FOR_TIME_SYNC_INFORMATION, *PUSB_STOP_TRACKING_FOR_TIME_SYNC_INFORMATION;
typedef struct _USB_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC_INFORMATION {
    HANDLE TimeTrackingHandle;
    ULONG InputFrameNumber;
    ULONG InputMicroFrameNumber;
    LARGE_INTEGER QueryPerformanceCounterAtInputFrameOrMicroFrame;
    LARGE_INTEGER QueryPerformanceCounterFrequency;
    ULONG PredictedAccuracyInMicroSeconds;
    ULONG CurrentGenerationID;
    LARGE_INTEGER CurrentQueryPerformanceCounter;
    ULONG CurrentHardwareFrameNumber;
    ULONG CurrentHardwareMicroFrameNumber;
    ULONG CurrentUSBFrameNumber;
} USB_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC_INFORMATION, *PUSB_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC_INFORMATION;
#include <poppack.h>
#endif
#pragma endregion
