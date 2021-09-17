#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IOPMVideoOutput IOPMVideoOutput;
#include "unknwn.h"
#include "dxva2api.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma pack( push, 1 )
DEFINE_GUID( OPM_GET_CURRENT_HDCP_SRM_VERSION, 0x99c5ceff, 0x5f1d, 0x4879, 0x81, 0xc1, 0xc5, 0x24, 0x43, 0xc9, 0x48, 0x2b );
DEFINE_GUID( OPM_GET_CONNECTED_HDCP_DEVICE_INFORMATION, 0x0db59d74, 0xa992, 0x492e, 0xa0, 0xbd, 0xc2, 0x3f, 0xda, 0x56, 0x4e, 0x00 );
DEFINE_GUID( OPM_GET_ACP_AND_CGMSA_SIGNALING, 0x6629a591, 0x3b79, 0x4cf3, 0x92, 0x4a, 0x11, 0xe8, 0xe7, 0x81, 0x16, 0x71 );
DEFINE_GUID( OPM_GET_CONNECTOR_TYPE, 0x81d0bfd5, 0x6afe, 0x48c2, 0x99, 0xc0, 0x95, 0xa0, 0x8f, 0x97, 0xc5, 0xda );
DEFINE_GUID( OPM_GET_SUPPORTED_PROTECTION_TYPES, 0x38f2a801, 0x9a6c, 0x48bb, 0x91, 0x07, 0xb6, 0x69, 0x6e, 0x6f, 0x17, 0x97 );
DEFINE_GUID( OPM_GET_VIRTUAL_PROTECTION_LEVEL, 0xb2075857, 0x3eda, 0x4d5d, 0x88, 0xdb, 0x74, 0x8f, 0x8c, 0x1a, 0x05, 0x49 );
DEFINE_GUID( OPM_GET_ACTUAL_PROTECTION_LEVEL, 0x1957210a, 0x7766, 0x452a, 0xb9, 0x9a, 0xd2, 0x7a, 0xed, 0x54, 0xf0, 0x3a );
DEFINE_GUID( OPM_GET_ACTUAL_OUTPUT_FORMAT, 0xd7bf1ba3, 0xad13, 0x4f8e, 0xaf, 0x98, 0x0d, 0xcb, 0x3c, 0xa2, 0x04, 0xcc );
DEFINE_GUID( OPM_GET_ADAPTER_BUS_TYPE, 0xc6f4d673, 0x6174, 0x4184, 0x8e, 0x35, 0xf6, 0xdb, 0x52, 0x0, 0xbc, 0xba );
DEFINE_GUID( OPM_GET_OUTPUT_ID, 0x72cb6df3, 0x244f, 0x40ce, 0xb0, 0x9e, 0x20, 0x50, 0x6a, 0xf6, 0x30, 0x2f );
DEFINE_GUID( OPM_GET_DVI_CHARACTERISTICS, 0xa470b3bb, 0x5dd7, 0x4172, 0x83, 0x9c, 0x3d, 0x37, 0x76, 0xe0, 0xeb, 0xf5 );
DEFINE_GUID( OPM_GET_CODEC_INFO, 0x4f374491, 0x8f5f, 0x4445, 0x9d, 0xba, 0x95, 0x58, 0x8f, 0x6b, 0x58, 0xb4 );
DEFINE_GUID( OPM_GET_OUTPUT_HARDWARE_PROTECTION_SUPPORT, 0x3b129589, 0x2af8, 0x4ef0, 0x96, 0xa2, 0x70, 0x4a, 0x84, 0x5a, 0x21, 0x8e );
DEFINE_GUID( OPM_SET_PROTECTION_LEVEL, 0x9bb9327c, 0x4eb5, 0x4727, 0x9f, 0x00, 0xb4, 0x2b, 0x09, 0x19, 0xc0, 0xda );
DEFINE_GUID( OPM_SET_ACP_AND_CGMSA_SIGNALING, 0x09a631a5, 0xd684, 0x4c60, 0x8e, 0x4d, 0xd3, 0xbb, 0x0f, 0x0b, 0xe3, 0xee );
DEFINE_GUID( OPM_SET_HDCP_SRM, 0x8b5ef5d1, 0xc30d, 0x44ff, 0x84, 0xa5, 0xea, 0x71, 0xdc, 0xe7, 0x8f, 0x13 );
DEFINE_GUID( OPM_SET_PROTECTION_LEVEL_ACCORDING_TO_CSS_DVD, 0x39ce333e, 0x4cc0, 0x44ae, 0xbf, 0xcc, 0xda, 0x50, 0xb5, 0xf8, 0x2e, 0x72);
enum __MIDL___MIDL_itf_opmapi_0000_0000_0001
    {
        OPM_OMAC_SIZE = 16,
        OPM_128_BIT_RANDOM_NUMBER_SIZE = 16,
        OPM_ENCRYPTED_INITIALIZATION_PARAMETERS_SIZE = 256,
        OPM_CONFIGURE_SETTING_DATA_SIZE = 4056,
        OPM_GET_INFORMATION_PARAMETERS_SIZE = 4056,
        OPM_REQUESTED_INFORMATION_SIZE = 4076,
        OPM_HDCP_KEY_SELECTION_VECTOR_SIZE = 5,
        OPM_PROTECTION_TYPE_SIZE = 4,
        OPM_BUS_TYPE_MASK = 0xffff,
        OPM_BUS_IMPLEMENTATION_MODIFIER_MASK = 0x7fff
    } ;
typedef
enum _OPM_VIDEO_OUTPUT_SEMANTICS
    {
        OPM_VOS_COPP_SEMANTICS = 0,
        OPM_VOS_OPM_SEMANTICS = 1,
        OPM_VOS_OPM_INDIRECT_DISPLAY = 2
    } OPM_VIDEO_OUTPUT_SEMANTICS;
enum __MIDL___MIDL_itf_opmapi_0000_0000_0002
    {
        OPM_HDCP_FLAG_NONE = 0,
        OPM_HDCP_FLAG_REPEATER = 0x1
    } ;
enum __MIDL___MIDL_itf_opmapi_0000_0000_0003
    {
        OPM_STATUS_NORMAL = 0,
        OPM_STATUS_LINK_LOST = 0x1,
        OPM_STATUS_RENEGOTIATION_REQUIRED = 0x2,
        OPM_STATUS_TAMPERING_DETECTED = 0x4,
        OPM_STATUS_REVOKED_HDCP_DEVICE_ATTACHED = 0x8
    } ;
enum __MIDL___MIDL_itf_opmapi_0000_0000_0004
    {
        OPM_CONNECTOR_TYPE_OTHER = -1,
        OPM_CONNECTOR_TYPE_VGA = 0,
        OPM_CONNECTOR_TYPE_SVIDEO = 1,
        OPM_CONNECTOR_TYPE_COMPOSITE_VIDEO = 2,
        OPM_CONNECTOR_TYPE_COMPONENT_VIDEO = 3,
        OPM_CONNECTOR_TYPE_DVI = 4,
        OPM_CONNECTOR_TYPE_HDMI = 5,
        OPM_CONNECTOR_TYPE_LVDS = 6,
        OPM_CONNECTOR_TYPE_D_JPN = 8,
        OPM_CONNECTOR_TYPE_SDI = 9,
        OPM_CONNECTOR_TYPE_DISPLAYPORT_EXTERNAL = 10,
        OPM_CONNECTOR_TYPE_DISPLAYPORT_EMBEDDED = 11,
        OPM_CONNECTOR_TYPE_UDI_EXTERNAL = 12,
        OPM_CONNECTOR_TYPE_UDI_EMBEDDED = 13,
        OPM_CONNECTOR_TYPE_RESERVED = 14,
        OPM_CONNECTOR_TYPE_MIRACAST = 15,
        OPM_CONNECTOR_TYPE_TRANSPORT_AGNOSTIC_DIGITAL_MODE_A = 16,
        OPM_CONNECTOR_TYPE_TRANSPORT_AGNOSTIC_DIGITAL_MODE_B = 17,
        OPM_COPP_COMPATIBLE_CONNECTOR_TYPE_INTERNAL = 0x80000000
    } ;
enum __MIDL___MIDL_itf_opmapi_0000_0000_0005
    {
        OPM_DVI_CHARACTERISTIC_1_0 = 1,
        OPM_DVI_CHARACTERISTIC_1_1_OR_ABOVE = 2
    } ;
typedef
enum _OPM_OUTPUT_HARDWARE_PROTECTION
    {
        OPM_OUTPUT_HARDWARE_PROTECTION_NOT_SUPPORTED = 0,
        OPM_OUTPUT_HARDWARE_PROTECTION_SUPPORTED = 0x1
    } OPM_OUTPUT_HARDWARE_PROTECTION;
enum __MIDL___MIDL_itf_opmapi_0000_0000_0006
    {
        OPM_BUS_TYPE_OTHER = 0,
        OPM_BUS_TYPE_PCI = 0x1,
        OPM_BUS_TYPE_PCIX = 0x2,
        OPM_BUS_TYPE_PCIEXPRESS = 0x3,
        OPM_BUS_TYPE_AGP = 0x4,
        OPM_BUS_IMPLEMENTATION_MODIFIER_INSIDE_OF_CHIPSET = 0x10000,
        OPM_BUS_IMPLEMENTATION_MODIFIER_TRACKS_ON_MOTHER_BOARD_TO_CHIP = 0x20000,
        OPM_BUS_IMPLEMENTATION_MODIFIER_TRACKS_ON_MOTHER_BOARD_TO_SOCKET = 0x30000,
        OPM_BUS_IMPLEMENTATION_MODIFIER_DAUGHTER_BOARD_CONNECTOR = 0x40000,
        OPM_BUS_IMPLEMENTATION_MODIFIER_DAUGHTER_BOARD_CONNECTOR_INSIDE_OF_NUAE = 0x50000,
        OPM_BUS_IMPLEMENTATION_MODIFIER_NON_STANDARD = 0x80000000,
        OPM_COPP_COMPATIBLE_BUS_TYPE_INTEGRATED = 0x80000000
    } ;
typedef
enum _OPM_DPCP_PROTECTION_LEVEL
    {
        OPM_DPCP_OFF = 0,
        OPM_DPCP_ON = 1,
        OPM_DPCP_FORCE_ULONG = 0x7fffffff
    } OPM_DPCP_PROTECTION_LEVEL;
typedef
enum _OPM_HDCP_PROTECTION_LEVEL
    {
        OPM_HDCP_OFF = 0,
        OPM_HDCP_ON = 1,
        OPM_HDCP_FORCE_ULONG = 0x7fffffff
    } OPM_HDCP_PROTECTION_LEVEL;
typedef
enum _OPM_TYPE_ENFORCEMENT_HDCP_PROTECTION_LEVEL
    {
        OPM_TYPE_ENFORCEMENT_HDCP_OFF = OPM_HDCP_OFF,
        OPM_TYPE_ENFORCEMENT_HDCP_ON_WITH_NO_TYPE_RESTRICTION = OPM_HDCP_ON,
        OPM_TYPE_ENFORCEMENT_HDCP_ON_WITH_TYPE1_RESTRICTION = ( OPM_HDCP_ON + 1 ) ,
        OPM_TYPE_ENFORCEMENT_HDCP_FORCE_ULONG = 0x7fffffff
    } OPM_TYPE_ENFORCEMENT_HDCP_PROTECTION_LEVEL;
enum __MIDL___MIDL_itf_opmapi_0000_0000_0007
    {
        OPM_CGMSA_OFF = 0,
        OPM_CGMSA_COPY_FREELY = 0x1,
        OPM_CGMSA_COPY_NO_MORE = 0x2,
        OPM_CGMSA_COPY_ONE_GENERATION = 0x3,
        OPM_CGMSA_COPY_NEVER = 0x4,
        OPM_CGMSA_REDISTRIBUTION_CONTROL_REQUIRED = 0x8
    } ;
typedef
enum _OPM_ACP_PROTECTION_LEVEL
    {
        OPM_ACP_OFF = 0,
        OPM_ACP_LEVEL_ONE = 1,
        OPM_ACP_LEVEL_TWO = 2,
        OPM_ACP_LEVEL_THREE = 3,
        OPM_ACP_FORCE_ULONG = 0x7fffffff
    } OPM_ACP_PROTECTION_LEVEL;
enum __MIDL___MIDL_itf_opmapi_0000_0000_0008
    {
        OPM_PROTECTION_TYPE_OTHER = 0x80000000,
        OPM_PROTECTION_TYPE_NONE = 0,
        OPM_PROTECTION_TYPE_COPP_COMPATIBLE_HDCP = 0x1,
        OPM_PROTECTION_TYPE_ACP = 0x2,
        OPM_PROTECTION_TYPE_CGMSA = 0x4,
        OPM_PROTECTION_TYPE_HDCP = 0x8,
        OPM_PROTECTION_TYPE_DPCP = 0x10,
        OPM_PROTECTION_TYPE_TYPE_ENFORCEMENT_HDCP = 0x20
    } ;
enum __MIDL___MIDL_itf_opmapi_0000_0000_0009
    {
        OPM_PROTECTION_STANDARD_OTHER = 0x80000000,
        OPM_PROTECTION_STANDARD_NONE = 0,
        OPM_PROTECTION_STANDARD_IEC61880_525I = 0x1,
        OPM_PROTECTION_STANDARD_IEC61880_2_525I = 0x2,
        OPM_PROTECTION_STANDARD_IEC62375_625P = 0x4,
        OPM_PROTECTION_STANDARD_EIA608B_525 = 0x8,
        OPM_PROTECTION_STANDARD_EN300294_625I = 0x10,
        OPM_PROTECTION_STANDARD_CEA805A_TYPEA_525P = 0x20,
        OPM_PROTECTION_STANDARD_CEA805A_TYPEA_750P = 0x40,
        OPM_PROTECTION_STANDARD_CEA805A_TYPEA_1125I = 0x80,
        OPM_PROTECTION_STANDARD_CEA805A_TYPEB_525P = 0x100,
        OPM_PROTECTION_STANDARD_CEA805A_TYPEB_750P = 0x200,
        OPM_PROTECTION_STANDARD_CEA805A_TYPEB_1125I = 0x400,
        OPM_PROTECTION_STANDARD_ARIBTRB15_525I = 0x800,
        OPM_PROTECTION_STANDARD_ARIBTRB15_525P = 0x1000,
        OPM_PROTECTION_STANDARD_ARIBTRB15_750P = 0x2000,
        OPM_PROTECTION_STANDARD_ARIBTRB15_1125I = 0x4000
    } ;
typedef
enum _OPM_IMAGE_ASPECT_RATIO_EN300294
    {
        OPM_ASPECT_RATIO_EN300294_FULL_FORMAT_4_BY_3 = 0,
        OPM_ASPECT_RATIO_EN300294_BOX_14_BY_9_CENTER = 1,
        OPM_ASPECT_RATIO_EN300294_BOX_14_BY_9_TOP = 2,
        OPM_ASPECT_RATIO_EN300294_BOX_16_BY_9_CENTER = 3,
        OPM_ASPECT_RATIO_EN300294_BOX_16_BY_9_TOP = 4,
        OPM_ASPECT_RATIO_EN300294_BOX_GT_16_BY_9_CENTER = 5,
        OPM_ASPECT_RATIO_EN300294_FULL_FORMAT_4_BY_3_PROTECTED_CENTER = 6,
        OPM_ASPECT_RATIO_EN300294_FULL_FORMAT_16_BY_9_ANAMORPHIC = 7,
        OPM_ASPECT_RATIO_FORCE_ULONG = 0x7fffffff
    } OPM_IMAGE_ASPECT_RATIO_EN300294;
typedef struct _OPM_RANDOM_NUMBER
    {
    BYTE abRandomNumber[ 16 ];
    } OPM_RANDOM_NUMBER;
typedef struct _OPM_OMAC
    {
    BYTE abOMAC[ 16 ];
    } OPM_OMAC;
typedef struct _OPM_ENCRYPTED_INITIALIZATION_PARAMETERS
    {
    BYTE abEncryptedInitializationParameters[ 256 ];
    } OPM_ENCRYPTED_INITIALIZATION_PARAMETERS;
typedef struct _OPM_GET_INFO_PARAMETERS
    {
    OPM_OMAC omac;
    OPM_RANDOM_NUMBER rnRandomNumber;
    GUID guidInformation;
    ULONG ulSequenceNumber;
    ULONG cbParametersSize;
    BYTE abParameters[ 4056 ];
    } OPM_GET_INFO_PARAMETERS;
typedef struct _OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS
    {
    OPM_RANDOM_NUMBER rnRandomNumber;
    GUID guidInformation;
    ULONG ulSequenceNumber;
    ULONG cbParametersSize;
    BYTE abParameters[ 4056 ];
    } OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS;
typedef struct _OPM_HDCP_KEY_SELECTION_VECTOR
    {
    BYTE abKeySelectionVector[ 5 ];
    } OPM_HDCP_KEY_SELECTION_VECTOR;
typedef struct _OPM_CONNECTED_HDCP_DEVICE_INFORMATION
    {
    OPM_RANDOM_NUMBER rnRandomNumber;
    ULONG ulStatusFlags;
    ULONG ulHDCPFlags;
    OPM_HDCP_KEY_SELECTION_VECTOR ksvB;
    BYTE Reserved[ 11 ];
    BYTE Reserved2[ 16 ];
    BYTE Reserved3[ 16 ];
    } OPM_CONNECTED_HDCP_DEVICE_INFORMATION;
typedef struct _OPM_REQUESTED_INFORMATION
    {
    OPM_OMAC omac;
    ULONG cbRequestedInformationSize;
    BYTE abRequestedInformation[ 4076 ];
    } OPM_REQUESTED_INFORMATION;
typedef struct _OPM_STANDARD_INFORMATION
    {
    OPM_RANDOM_NUMBER rnRandomNumber;
    ULONG ulStatusFlags;
    ULONG ulInformation;
    ULONG ulReserved;
    ULONG ulReserved2;
    } OPM_STANDARD_INFORMATION;
typedef struct _OPM_ACTUAL_OUTPUT_FORMAT
    {
    OPM_RANDOM_NUMBER rnRandomNumber;
    ULONG ulStatusFlags;
    ULONG ulDisplayWidth;
    ULONG ulDisplayHeight;
    DXVA2_SampleFormat dsfSampleInterleaveFormat;
    D3DFORMAT d3dFormat;
    ULONG ulFrequencyNumerator;
    ULONG ulFrequencyDenominator;
    } OPM_ACTUAL_OUTPUT_FORMAT;
typedef struct _OPM_ACP_AND_CGMSA_SIGNALING
    {
    OPM_RANDOM_NUMBER rnRandomNumber;
    ULONG ulStatusFlags;
    ULONG ulAvailableTVProtectionStandards;
    ULONG ulActiveTVProtectionStandard;
    ULONG ulReserved;
    ULONG ulAspectRatioValidMask1;
    ULONG ulAspectRatioData1;
    ULONG ulAspectRatioValidMask2;
    ULONG ulAspectRatioData2;
    ULONG ulAspectRatioValidMask3;
    ULONG ulAspectRatioData3;
    ULONG ulReserved2[ 4 ];
    ULONG ulReserved3[ 4 ];
    } OPM_ACP_AND_CGMSA_SIGNALING;
typedef struct _OPM_OUTPUT_ID_DATA
    {
    OPM_RANDOM_NUMBER rnRandomNumber;
    ULONG ulStatusFlags;
    UINT64 OutputId;
    } OPM_OUTPUT_ID_DATA;
typedef struct _OPM_CONFIGURE_PARAMETERS
    {
    OPM_OMAC omac;
    GUID guidSetting;
    ULONG ulSequenceNumber;
    ULONG cbParametersSize;
    BYTE abParameters[ 4056 ];
    } OPM_CONFIGURE_PARAMETERS;
typedef struct _OPM_SET_PROTECTION_LEVEL_PARAMETERS
    {
    ULONG ulProtectionType;
    ULONG ulProtectionLevel;
    ULONG Reserved;
    ULONG Reserved2;
    } OPM_SET_PROTECTION_LEVEL_PARAMETERS;
typedef struct _OPM_SET_ACP_AND_CGMSA_SIGNALING_PARAMETERS
    {
    ULONG ulNewTVProtectionStandard;
    ULONG ulAspectRatioChangeMask1;
    ULONG ulAspectRatioData1;
    ULONG ulAspectRatioChangeMask2;
    ULONG ulAspectRatioData2;
    ULONG ulAspectRatioChangeMask3;
    ULONG ulAspectRatioData3;
    ULONG ulReserved[ 4 ];
    ULONG ulReserved2[ 4 ];
    ULONG ulReserved3;
    } OPM_SET_ACP_AND_CGMSA_SIGNALING_PARAMETERS;
typedef struct _OPM_SET_HDCP_SRM_PARAMETERS
    {
    ULONG ulSRMVersion;
    } OPM_SET_HDCP_SRM_PARAMETERS;
typedef struct _OPM_GET_CODEC_INFO_PARAMETERS
    {
    DWORD cbVerifier;
    BYTE Verifier[ 4052 ];
    } OPM_GET_CODEC_INFO_PARAMETERS;
typedef struct _OPM_GET_CODEC_INFO_INFORMATION
    {
    OPM_RANDOM_NUMBER rnRandomNumber;
    DWORD Merit;
    } OPM_GET_CODEC_INFO_INFORMATION;
extern RPC_IF_HANDLE __MIDL_itf_opmapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_opmapi_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IOPMVideoOutput;
    typedef struct IOPMVideoOutputVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IOPMVideoOutput * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IOPMVideoOutput * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IOPMVideoOutput * This);
        HRESULT ( STDMETHODCALLTYPE *StartInitialization )(
            IOPMVideoOutput * This,
            _Out_ OPM_RANDOM_NUMBER *prnRandomNumber,
            _Outptr_result_bytebuffer_(*pulCertificateLength) BYTE **ppbCertificate,
            _Out_ ULONG *pulCertificateLength);
        HRESULT ( STDMETHODCALLTYPE *FinishInitialization )(
            IOPMVideoOutput * This,
            _In_ const OPM_ENCRYPTED_INITIALIZATION_PARAMETERS *pParameters);
        HRESULT ( STDMETHODCALLTYPE *GetInformation )(
            IOPMVideoOutput * This,
            _In_ const OPM_GET_INFO_PARAMETERS *pParameters,
            _Out_ OPM_REQUESTED_INFORMATION *pRequestedInformation);
        HRESULT ( STDMETHODCALLTYPE *COPPCompatibleGetInformation )(
            IOPMVideoOutput * This,
            _In_ const OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS *pParameters,
            _Out_ OPM_REQUESTED_INFORMATION *pRequestedInformation);
        HRESULT ( STDMETHODCALLTYPE *Configure )(
            IOPMVideoOutput * This,
            _In_ const OPM_CONFIGURE_PARAMETERS *pParameters,
            _In_ ULONG ulAdditionalParametersSize,
            _In_reads_bytes_opt_(ulAdditionalParametersSize) const BYTE *pbAdditionalParameters);
        END_INTERFACE
    } IOPMVideoOutputVtbl;
    interface IOPMVideoOutput
    {
        CONST_VTBL struct IOPMVideoOutputVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartInitialization(This,prnRandomNumber,ppbCertificate,pulCertificateLength) )
    ( (This)->lpVtbl -> FinishInitialization(This,pParameters) )
    ( (This)->lpVtbl -> GetInformation(This,pParameters,pRequestedInformation) )
    ( (This)->lpVtbl -> COPPCompatibleGetInformation(This,pParameters,pRequestedInformation) )
    ( (This)->lpVtbl -> Configure(This,pParameters,ulAdditionalParametersSize,pbAdditionalParameters) )
0x6f414bb, 0xf43a, 0x4fe2, 0xa5, 0x66, 0x77, 0x4b, 0x4c, 0x81, 0xf0, 0xdb
DEFINE_GUIDSTRUCT("06F414BB-F43A-4fe2-A566-774B4C81F0DB", KSPROPSETID_OPMVideoOutput);
typedef enum {
    KSMETHOD_OPMVIDEOOUTPUT_STARTINITIALIZATION = 0,
    KSMETHOD_OPMVIDEOOUTPUT_FINISHINITIALIZATION = 1,
    KSMETHOD_OPMVIDEOOUTPUT_GETINFORMATION = 2
} KSMETHOD_OPMVIDEOOUTPUT;
STDAPI OPMGetVideoOutputsFromHMONITOR(
    _In_ HMONITOR hMonitor,
    _In_ OPM_VIDEO_OUTPUT_SEMANTICS vos,
    _Out_ ULONG* pulNumVideoOutputs,
    _Outptr_result_buffer_(*pulNumVideoOutputs) IOPMVideoOutput*** pppOPMVideoOutputArray
    );
STDAPI OPMGetVideoOutputForTarget(
    _In_ LUID* pAdapterLuid,
    _In_ ULONG VidPnTarget,
    _In_ OPM_VIDEO_OUTPUT_SEMANTICS vos,
    _COM_Outptr_ IOPMVideoOutput** ppOPMVideoOutput
    );
STDAPI OPMGetVideoOutputsFromIDirect3DDevice9Object(
    _In_ IDirect3DDevice9* pDirect3DDevice9,
    _In_ OPM_VIDEO_OUTPUT_SEMANTICS vos,
    _Out_ ULONG* pulNumVideoOutputs,
    _Outptr_result_buffer_(*pulNumVideoOutputs) IOPMVideoOutput*** pppOPMVideoOutputArray
    );
#pragma pack( pop )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_opmapi_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_opmapi_0000_0001_v0_0_s_ifspec;
}
