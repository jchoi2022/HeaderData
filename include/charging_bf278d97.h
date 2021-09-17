       
#include <usbfnbase.h>
#include <initguid.h>
DEFINE_GUID(GUID_DEVINTERFACE_CHARGING_ARBITRATION, 0xec0a1cc9, 0x4294, 0x43fb, 0xbf, 0x37, 0xb8, 0x50, 0xce, 0x95, 0xf3, 0x37);
DEFINE_GUID(GUID_DEVINTERFACE_CONFIGURABLE_USBFN_CHARGER, 0x7158c35c, 0xc1bc, 0x4d90, 0xac, 0xb1, 0x80, 0x20, 0xbd, 0xe, 0x19, 0xca);
DEFINE_GUID(GUID_DEVINTERFACE_CONFIGURABLE_WIRELESS_CHARGER, 0x3612b1c8, 0x3633, 0x47d3, 0x8a, 0xf5, 0x0, 0xa4, 0xdf, 0xa0, 0x47, 0x93);
typedef enum _POWERSOURCEID {
    PowerSourceInvalid = 0x00,
    PowerSourceNone,
    PowerSourceUsbfn,
    PowerSourceWirelessCharger,
    PowerSourceKD,
    PowerSourceUsbTypeC,
    PowerSourceMax
} POWERSOURCEID, *PPOWERSOURCEID;
typedef struct _POWERSOURCESTATUS {
    POWERSOURCEID PowerSourceId;
    ULONG MaxChargeCurrent;
    ULONG PowerSourceInformation;
    BOOLEAN PowerSourceStatus;
} POWERSOURCESTATUS, *PPOWERSOURCESTATUS;
typedef struct _CHARGINGSTATUSCOMPLETE {
    POWERSOURCESTATUS UsbFnStatus;
    POWERSOURCESTATUS UsbTypeCStatus;
    POWERSOURCESTATUS KDStatus;
    POWERSOURCESTATUS WirelessStatus;
    ULONG ForceDisableChargingRefCount;
} CHARGINGSTATUSCOMPLETE, *PCHARGINGSTATUSCOMPLETE;
typedef struct _POWERSOURCEUPDATE
{
    POWERSOURCEID PowerSourceId;
    ULONG MaxChargeCurrent;
    BOOLEAN PowerSourceAvailableStatus;
    PVOID PowerSourceInformation;
} POWERSOURCEUPDATE, *PPOWERSOURCEUPDATE;
typedef struct _POWERSOURCEUPDATEEX {
    POWERSOURCEUPDATE Source;
    GUID ChargerId;
} POWERSOURCEUPDATEEX, *PPOWERSOURCEUPDATEEX;
typedef struct _CAD_POWER_SOURCE_INFO {
    POWERSOURCEID SourceId;
    USHORT Version;
    ULONG VaData[1];
} CAD_POWER_SOURCE_INFO, *PCAD_POWER_SOURCE_INFO;
typedef struct _CAD_POWER_SOURCE_INFO_USB {
    POWERSOURCEID SourceId;
    USHORT Version;
    ULONG Flags;
    ULONG MaxCurrent;
    ULONG Voltage;
    LONG PortType;
    ULONGLONG PortId;
    USBFN_PORT_TYPE PowerSourceInformation;
    GUID OemCharger;
} CAD_POWER_SOURCE_INFO_USB, *PCAD_POWER_SOURCE_INFO_USB;
typedef struct _BATTERYPROVISIONINGSTATUS
{
    BOOLEAN IsDeviceProvisionedForBatteryBlank;
} BATTERYPROVISIONINGSTATUS, *PBATTERYPROVISIONINGSTATUS;
typedef struct _CONFIGURABLE_CHARGER_PROPERTY_HEADER {
    ULONG Size;
    GUID ChargerId;
    ULONG PropertyId;
} CONFIGURABLE_CHARGER_PROPERTY_HEADER, *PCONFIGURABLE_CHARGER_PROPERTY_HEADER;