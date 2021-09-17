DEFINE_GUID (GUID_DEVINTERFACE_BLUETOOTH_HFP_SCO_HCIBYPASS,
0xbe446647, 0xf655, 0x4919, 0x8b, 0xd0, 0x12, 0x5b, 0xa5, 0xd4, 0xce, 0x65);
typedef struct _BTHHFP_DESCRIPTOR
{
    GUID InputPinCategory;
    GUID OutputPinCategory;
    GUID ContainerId;
    BOOL SupportsVolume;
    ULONG VolumePropertyValuesSize;
    UNICODE_STRING FriendlyName;
} BTHHFP_DESCRIPTOR, *PBTHHFP_DESCRIPTOR;
typedef struct _BTHHFP_DESCRIPTOR2
{
    GUID InputPinCategory;
    GUID OutputPinCategory;
    GUID ContainerId;
    BOOL SupportsVolume;
    ULONG VolumePropertyValuesSize;
    UNICODE_STRING FriendlyName;
    BOOL SupportsNREC;
} BTHHFP_DESCRIPTOR2, *PBTHHFP_DESCRIPTOR2;
typedef struct _BTHHFP_AUDIO_DEVICE_CAPABILTIES
{
    DWORD Version;
    BOOL Supports16kHzSampling;
} BTHHFP_AUDIO_DEVICE_CAPABILTIES, *PBTHHFP_AUDIO_DEVICE_CAPABILTIES;
VOID
FORCEINLINE
BTHHFP_AUDIO_DEVICE_CAPABILTIES_INIT(
    _Out_ PBTHHFP_AUDIO_DEVICE_CAPABILTIES caps
    )
{
    RtlZeroMemory(caps, sizeof(BTHHFP_AUDIO_DEVICE_CAPABILTIES));
    caps->Version = AUDIO_DEVICE_CAPABILITIES_VERSION;
}
typedef enum _HFP_BYPASS_CODEC_ID_VERSION
{
    REQ_HFP_BYPASS_CODEC_ID_V1 = 1
} HFP_BYPASS_CODEC_ID_VERSION, *PHFP_BYPASS_CODEC_ID_VERSION;
typedef struct _HFP_BYPASS_CODEC_ID_V1
{
    UCHAR CodecId;
} HFP_BYPASS_CODEC_ID_V1, *PHFP_BYPASS_CODEC_ID_V1;
    CTL_CODE (FILE_DEVICE_UNKNOWN, _index_, METHOD_NEITHER, FILE_ANY_ACCESS)