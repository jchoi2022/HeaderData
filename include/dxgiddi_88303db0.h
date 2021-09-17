#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "dxgicommon.h"
#include "dxgitype.h"
typedef UINT_PTR DXGI_DDI_HDEVICE;
typedef UINT_PTR DXGI_DDI_HRESOURCE;
typedef enum DXGI_DDI_RESIDENCY
{
    DXGI_DDI_RESIDENCY_FULLY_RESIDENT = 1,
    DXGI_DDI_RESIDENCY_RESIDENT_IN_SHARED_MEMORY = 2,
    DXGI_DDI_RESIDENCY_EVICTED_TO_DISK = 3,
} DXGI_DDI_RESIDENCY;
typedef enum DXGI_DDI_FLIP_INTERVAL_TYPE
{
    DXGI_DDI_FLIP_INTERVAL_IMMEDIATE = 0,
    DXGI_DDI_FLIP_INTERVAL_ONE = 1,
    DXGI_DDI_FLIP_INTERVAL_TWO = 2,
    DXGI_DDI_FLIP_INTERVAL_THREE = 3,
    DXGI_DDI_FLIP_INTERVAL_FOUR = 4,
    DXGI_DDI_FLIP_INTERVAL_IMMEDIATE_ALLOW_TEARING = 5,
} DXGI_DDI_FLIP_INTERVAL_TYPE;
typedef struct DXGI_DDI_PRESENT_FLAGS
{
    union
    {
        struct
        {
            UINT Blt : 1;
            UINT Flip : 1;
            UINT PreferRight : 1;
            UINT TemporaryMono : 1;
            UINT AllowTearing : 1;
            UINT AllowFlexibleRefresh : 1;
            UINT NoScanoutTransform : 1;
            UINT Reserved :25;
        };
        UINT Value;
    };
} DXGI_DDI_PRESENT_FLAGS;
typedef struct DXGI_DDI_ARG_PRESENT
{
    DXGI_DDI_HDEVICE hDevice;
    DXGI_DDI_HRESOURCE hSurfaceToPresent;
    UINT SrcSubResourceIndex;
    DXGI_DDI_HRESOURCE hDstResource;
    UINT DstSubResourceIndex;
    void * pDXGIContext;
    DXGI_DDI_PRESENT_FLAGS Flags;
    DXGI_DDI_FLIP_INTERVAL_TYPE FlipInterval;
}DXGI_DDI_ARG_PRESENT;
typedef struct DXGI_DDI_ARG_ROTATE_RESOURCE_IDENTITIES
{
    DXGI_DDI_HDEVICE hDevice;
    CONST DXGI_DDI_HRESOURCE* pResources;
    UINT Resources;
} DXGI_DDI_ARG_ROTATE_RESOURCE_IDENTITIES;
typedef struct DXGI_DDI_ARG_GET_GAMMA_CONTROL_CAPS
{
    DXGI_DDI_HDEVICE hDevice;
    DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCapabilities;
} DXGI_DDI_ARG_GET_GAMMA_CONTROL_CAPS;
typedef struct DXGI_DDI_ARG_SET_GAMMA_CONTROL
{
    DXGI_DDI_HDEVICE hDevice;
    DXGI_GAMMA_CONTROL GammaControl;
} DXGI_DDI_ARG_SET_GAMMA_CONTROL;
typedef struct DXGI_DDI_ARG_SETDISPLAYMODE
{
    DXGI_DDI_HDEVICE hDevice;
    DXGI_DDI_HRESOURCE hResource;
    UINT SubResourceIndex;
} DXGI_DDI_ARG_SETDISPLAYMODE;
typedef struct DXGI_DDI_ARG_SETRESOURCEPRIORITY
{
    DXGI_DDI_HDEVICE hDevice;
    DXGI_DDI_HRESOURCE hResource;
    UINT Priority;
} DXGI_DDI_ARG_SETRESOURCEPRIORITY;
typedef struct DXGI_DDI_ARG_QUERYRESOURCERESIDENCY
{
    DXGI_DDI_HDEVICE hDevice;
    _Field_size_( Resources ) CONST DXGI_DDI_HRESOURCE * pResources;
    _Field_size_( Resources ) DXGI_DDI_RESIDENCY * pStatus;
    SIZE_T Resources;
} DXGI_DDI_ARG_QUERYRESOURCERESIDENCY;
typedef struct DXGI_DDI_RATIONAL
{
    UINT Numerator;
    UINT Denominator;
} DXGI_DDI_RATIONAL;
typedef enum DXGI_DDI_MODE_SCANLINE_ORDER
{
    DXGI_DDI_MODE_SCANLINE_ORDER_UNSPECIFIED = 0,
    DXGI_DDI_MODE_SCANLINE_ORDER_PROGRESSIVE = 1,
    DXGI_DDI_MODE_SCANLINE_ORDER_UPPER_FIELD_FIRST = 2,
    DXGI_DDI_MODE_SCANLINE_ORDER_LOWER_FIELD_FIRST = 3,
} DXGI_DDI_MODE_SCANLINE_ORDER;
typedef enum DXGI_DDI_MODE_SCALING
{
    DXGI_DDI_MODE_SCALING_UNSPECIFIED = 0,
    DXGI_DDI_MODE_SCALING_STRETCHED = 1,
    DXGI_DDI_MODE_SCALING_CENTERED = 2,
} DXGI_DDI_MODE_SCALING;
typedef enum DXGI_DDI_MODE_ROTATION
{
    DXGI_DDI_MODE_ROTATION_UNSPECIFIED = 0,
    DXGI_DDI_MODE_ROTATION_IDENTITY = 1,
    DXGI_DDI_MODE_ROTATION_ROTATE90 = 2,
    DXGI_DDI_MODE_ROTATION_ROTATE180 = 3,
    DXGI_DDI_MODE_ROTATION_ROTATE270 = 4,
} DXGI_DDI_MODE_ROTATION;
typedef struct DXGI_DDI_MODE_DESC
{
    UINT Width;
    UINT Height;
    DXGI_FORMAT Format;
    DXGI_DDI_RATIONAL RefreshRate;
    DXGI_DDI_MODE_SCANLINE_ORDER ScanlineOrdering;
    DXGI_DDI_MODE_ROTATION Rotation;
    DXGI_DDI_MODE_SCALING Scaling;
} DXGI_DDI_MODE_DESC;
typedef struct DXGI_DDI_PRIMARY_DESC
{
    UINT Flags;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    DXGI_DDI_MODE_DESC ModeDesc;
    UINT DriverFlags;
} DXGI_DDI_PRIMARY_DESC;
typedef struct DXGI_DDI_ARG_BLT_FLAGS
{
    union
    {
        struct
        {
            UINT Resolve : 1;
            UINT Convert : 1;
            UINT Stretch : 1;
            UINT Present : 1;
            UINT Reserved :28;
        };
        UINT Value;
    };
} DXGI_DDI_ARG_BLT_FLAGS;
typedef struct DXGI_DDI_ARG_BLT
{
    DXGI_DDI_HDEVICE hDevice;
    DXGI_DDI_HRESOURCE hDstResource;
    UINT DstSubresource;
    UINT DstLeft;
    UINT DstTop;
    UINT DstRight;
    UINT DstBottom;
    DXGI_DDI_HRESOURCE hSrcResource;
    UINT SrcSubresource;
    DXGI_DDI_ARG_BLT_FLAGS Flags;
    DXGI_DDI_MODE_ROTATION Rotate;
} DXGI_DDI_ARG_BLT;
typedef struct DXGI_DDI_ARG_RESOLVESHAREDRESOURCE
{
    DXGI_DDI_HDEVICE hDevice;
    DXGI_DDI_HRESOURCE hResource;
} DXGI_DDI_ARG_RESOLVESHAREDRESOURCE;
typedef struct DXGI_DDI_ARG_BLT1
{
    DXGI_DDI_HDEVICE hDevice;
    DXGI_DDI_HRESOURCE hDstResource;
    UINT DstSubresource;
    UINT DstLeft;
    UINT DstTop;
    UINT DstRight;
    UINT DstBottom;
    DXGI_DDI_HRESOURCE hSrcResource;
    UINT SrcSubresource;
    UINT SrcLeft;
    UINT SrcTop;
    UINT SrcRight;
    UINT SrcBottom;
    DXGI_DDI_ARG_BLT_FLAGS Flags;
    DXGI_DDI_MODE_ROTATION Rotate;
} DXGI_DDI_ARG_BLT1;
typedef struct _DXGI_DDI_ARG_OFFERRESOURCES {
    DXGI_DDI_HDEVICE hDevice;
    const DXGI_DDI_HRESOURCE* pResources;
    UINT Resources;
    D3DDDI_OFFER_PRIORITY Priority;
} DXGI_DDI_ARG_OFFERRESOURCES;
typedef struct _DXGI_DDI_ARG_RECLAIMRESOURCES {
    DXGI_DDI_HDEVICE hDevice;
    const DXGI_DDI_HRESOURCE *pResources;
    BOOL *pDiscarded;
    UINT Resources;
} DXGI_DDI_ARG_RECLAIMRESOURCES;
typedef struct DXGI_DDI_MULTIPLANE_OVERLAY_CAPS
{
    UINT MaxPlanes;
    UINT NumCapabilityGroups;
} DXGI_DDI_MULTIPLANE_OVERLAY_CAPS;
typedef enum DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS
{
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_ROTATION_WITHOUT_INDEPENDENT_FLIP = 0x1,
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_VERTICAL_FLIP = 0x2,
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_HORIZONTAL_FLIP = 0x4,
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_DEINTERLACE = 0x8,
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_STEREO = 0x10,
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_RGB = 0x20,
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_YUV = 0x40,
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_BILINEAR_FILTER = 0x80,
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_HIGH_FILTER = 0x100,
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_ROTATION = 0x200,
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_FULLSCREEN_POST_COMPOSITION = 0x400,
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_RESERVED1 = 0x800,
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_SHARED = 0x1000,
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_IMMEDIATE = 0x2000,
    DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS_PLANE0_FOR_VIRTUAL_MODE_ONLY = 0x4000,
} DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS;
typedef enum DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_CAPS
{
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_CAPS_SEPARATE = 0x1,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_CAPS_ROW_INTERLEAVED = 0x4,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_CAPS_COLUMN_INTERLEAVED = 0x8,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_CAPS_CHECKERBOARD = 0x10,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_CAPS_FLIP_MODE = 0x20,
} DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_CAPS;
typedef struct DXGI_DDI_MULTIPLANE_OVERLAY_GROUP_CAPS
{
    UINT NumPlanes;
    float MaxStretchFactor;
    float MaxShrinkFactor;
    UINT OverlayCaps;
    UINT StereoCaps;
} DXGI_DDI_MULTIPLANE_OVERLAY_GROUP_CAPS;
typedef enum DXGI_DDI_MULTIPLANE_OVERLAY_FLAGS
{
    DXGI_DDI_MULTIPLANE_OVERLAY_FLAG_VERTICAL_FLIP = 0x1,
    DXGI_DDI_MULTIPLANE_OVERLAY_FLAG_HORIZONTAL_FLIP = 0x2,
    DXGI_DDI_MULTIPLANE_OVERLAY_FLAG_FULLSCREEN_POST_COMPOSITION = 0x4,
    DXGI_DDI_MULTIPLANE_OVERLAY_FLAG_NO_SCANOUT_TRANFORMATION = 0x8,
} DXGI_DDI_MULTIPLANE_OVERLAY_FLAGS;
typedef enum DXGI_DDI_MULTIPLANE_OVERLAY_BLEND
{
    DXGI_DDI_MULTIPLANE_OVERLAY_BLEND_OPAQUE = 0x0,
    DXGI_DDI_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND = 0x1,
} DXGI_DDI_MULTIPLANE_OVERLAY_BLEND;
typedef enum DXGI_DDI_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT
{
    DXGI_DDI_MULIIPLANE_OVERLAY_VIDEO_FRAME_FORMAT_PROGRESSIVE = 0,
    DXGI_DDI_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT_INTERLACED_TOP_FIELD_FIRST = 1,
    DXGI_DDI_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT_INTERLACED_BOTTOM_FIELD_FIRST = 2
} DXGI_DDI_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT;
typedef enum DXGI_DDI_MULTIPLANE_OVERLAY_YCbCr_FLAGS
{
    DXGI_DDI_MULTIPLANE_OVERLAY_YCbCr_FLAG_NOMINAL_RANGE = 0x1,
    DXGI_DDI_MULTIPLANE_OVERLAY_YCbCr_FLAG_BT709 = 0x2,
    DXGI_DDI_MULTIPLANE_OVERLAY_YCbCr_FLAG_xvYCC = 0x4,
} DXGI_DDI_MULTIPLANE_OVERLAY_YCbCr_FLAGS;
typedef enum DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT
{
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT_MONO = 0,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT_HORIZONTAL = 1,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT_VERTICAL = 2,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT_SEPARATE = 3,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT_MONO_OFFSET = 4,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT_ROW_INTERLEAVED = 5,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT_COLUMN_INTERLEAVED = 6,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT_CHECKERBOARD = 7
} DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT;
typedef enum DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE
{
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FLIP_NONE = 0,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FLIP_FRAME0 = 1,
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FLIP_FRAME1 = 2,
} DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE;
typedef enum DXGI_DDI_MULTIPLANE_OVERLAY_STRETCH_QUALITY
{
    DXGI_DDI_MULTIPLANE_OVERLAY_STRETCH_QUALITY_BILINEAR = 0x1,
    DXGI_DDI_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH = 0x2,
} DXGI_DDI_MULTIPLANE_OVERLAY_STRETCH_QUALITY;
typedef struct DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES
{
    UINT Flags;
    RECT SrcRect;
    RECT DstRect;
    RECT ClipRect;
    DXGI_DDI_MODE_ROTATION Rotation;
    DXGI_DDI_MULTIPLANE_OVERLAY_BLEND Blend;
    UINT DirtyRectCount;
    RECT* pDirtyRects;
    DXGI_DDI_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT VideoFrameFormat;
    UINT YCbCrFlags;
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT StereoFormat;
    BOOL StereoLeftViewFrame0;
    BOOL StereoBaseViewFrame0;
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE StereoFlipMode;
    DXGI_DDI_MULTIPLANE_OVERLAY_STRETCH_QUALITY StretchQuality;
} DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES;
typedef struct _DXGI_DDI_ARG_GETMULTIPLANEOVERLAYCAPS
{
    DXGI_DDI_HDEVICE hDevice;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    DXGI_DDI_MULTIPLANE_OVERLAY_CAPS MultiplaneOverlayCaps;
} DXGI_DDI_ARG_GETMULTIPLANEOVERLAYCAPS;
typedef struct _DXGI_DDI_ARG_GETMULTIPLANEOVERLAYGROUPCAPS
{
    DXGI_DDI_HDEVICE hDevice;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT GroupIndex;
    DXGI_DDI_MULTIPLANE_OVERLAY_GROUP_CAPS MultiplaneOverlayGroupCaps;
} DXGI_DDI_ARG_GETMULTIPLANEOVERLAYGROUPCAPS;
typedef struct DXGI_DDI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO
{
    DXGI_DDI_HRESOURCE hResource;
    UINT SubResourceIndex;
    DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES PlaneAttributes;
} DXGI_DDI_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO;
typedef struct _DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYSUPPORT
{
    DXGI_DDI_HDEVICE hDevice;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT NumPlaneInfo;
    DXGI_DDI_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO* pPlaneInfo;
    BOOL Supported;
} DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYSUPPORT;
typedef struct _DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY
{
    UINT LayerIndex;
    BOOL Enabled;
    DXGI_DDI_HRESOURCE hResource;
    UINT SubResourceIndex;
    DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES PlaneAttributes;
} DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY;
typedef struct _DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY
{
    DXGI_DDI_HDEVICE hDevice;
    void * pDXGIContext;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    DXGI_DDI_PRESENT_FLAGS Flags;
    DXGI_DDI_FLIP_INTERVAL_TYPE FlipInterval;
    UINT PresentPlaneCount;
    DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY* pPresentPlanes;
    UINT Reserved;
} DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY;
typedef struct _DXGI_DDI_ARG_CHECKPRESENTDURATIONSUPPORT
{
    DXGI_DDI_HDEVICE hDevice;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT DesiredPresentDuration;
    UINT ClosestSmallerDuration;
    UINT ClosestLargerDuration;
} DXGI_DDI_ARG_CHECKPRESENTDURATIONSUPPORT;
typedef struct DXGI_DDI_ARG_PRESENTSURFACE
{
    DXGI_DDI_HRESOURCE hSurface;
    UINT SubResourceIndex;
} DXGI_DDI_ARG_PRESENTSURFACE;
typedef struct DXGI_DDI_ARG_PRESENT1
{
    DXGI_DDI_HDEVICE hDevice;
    CONST DXGI_DDI_ARG_PRESENTSURFACE* phSurfacesToPresent;
    UINT SurfacesToPresent;
    DXGI_DDI_HRESOURCE hDstResource;
    UINT DstSubResourceIndex;
    void * pDXGIContext;
    DXGI_DDI_PRESENT_FLAGS Flags;
    DXGI_DDI_FLIP_INTERVAL_TYPE FlipInterval;
    UINT Reserved;
    CONST RECT* pDirtyRects;
    UINT DirtyRects;
    UINT BackBufferMultiplicity;
} DXGI_DDI_ARG_PRESENT1;
typedef struct _DXGI_DDI_ARG_TRIMRESIDENCYSET
{
    DXGI_DDI_HDEVICE hDevice;
    D3DDDI_TRIMRESIDENCYSET_FLAGS TrimFlags;
    UINT64 NumBytesToTrim;
} DXGI_DDI_ARG_TRIMRESIDENCYSET;
typedef struct _DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYCOLORSPACESUPPORT
{
    DXGI_DDI_HDEVICE hDevice;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    DXGI_FORMAT Format;
    D3DDDI_COLOR_SPACE_TYPE ColorSpace;
    BOOL Supported;
} DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYCOLORSPACESUPPORT;
typedef struct DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1
{
    UINT Flags;
    RECT SrcRect;
    RECT DstRect;
    RECT ClipRect;
    DXGI_DDI_MODE_ROTATION Rotation;
    DXGI_DDI_MULTIPLANE_OVERLAY_BLEND Blend;
    UINT DirtyRectCount;
    RECT* pDirtyRects;
    DXGI_DDI_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT VideoFrameFormat;
    D3DDDI_COLOR_SPACE_TYPE ColorSpace;
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT StereoFormat;
    BOOL StereoLeftViewFrame0;
    BOOL StereoBaseViewFrame0;
    DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE StereoFlipMode;
    DXGI_DDI_MULTIPLANE_OVERLAY_STRETCH_QUALITY StretchQuality;
    UINT ColorKey;
} DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1;
typedef struct _DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY1
{
    UINT LayerIndex;
    BOOL Enabled;
    DXGI_DDI_HRESOURCE hResource;
    UINT SubResourceIndex;
    DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1 PlaneAttributes;
} DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY1;
typedef struct _DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY1
{
    DXGI_DDI_HDEVICE hDevice;
    void * pDXGIContext;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    DXGI_DDI_PRESENT_FLAGS Flags;
    DXGI_DDI_FLIP_INTERVAL_TYPE FlipInterval;
    UINT PresentPlaneCount;
    DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY1* pPresentPlanes;
} DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY1;
typedef struct _DXGI_DDI_ARG_OFFERRESOURCES1
{
    _In_ DXGI_DDI_HDEVICE hDevice;
    _In_reads_(Resources) const DXGI_DDI_HRESOURCE* pResources;
    _In_ UINT Resources;
    _In_ D3DDDI_OFFER_PRIORITY Priority;
    _In_ D3DDDI_OFFER_FLAGS Flags;
} DXGI_DDI_ARG_OFFERRESOURCES1;
typedef struct _DXGI_DDI_ARG_RECLAIMRESOURCES1
{
    DXGI_DDI_HDEVICE hDevice;
    const DXGI_DDI_HRESOURCE *pResources;
    D3DDDI_RECLAIM_RESULT *pResults;
    UINT Resources;
} DXGI_DDI_ARG_RECLAIMRESOURCES1;
typedef struct DXGI1_6_1_DDI_ARG_PRESENT
{
    DXGI_DDI_HDEVICE hDevice;
    CONST DXGI_DDI_ARG_PRESENTSURFACE* phSurfacesToPresent;
    UINT SurfacesToPresent;
    DXGI_DDI_HRESOURCE hDstResource;
    UINT DstSubResourceIndex;
    void * pDXGIContext;
    DXGI_DDI_PRESENT_FLAGS Flags;
    DXGI_DDI_FLIP_INTERVAL_TYPE FlipInterval;
    DXGI_DDI_MODE_ROTATION RotationHint;
    CONST RECT* pDirtyRects;
    UINT DirtyRects;
    UINT BackBufferMultiplicity;
} DXGI1_6_1_DDI_ARG_PRESENT;
typedef struct DXGI1_6_1_DDI_ARG_PRESENTMULTIPLANEOVERLAY
{
    DXGI_DDI_HDEVICE hDevice;
    void * pDXGIContext;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    DXGI_DDI_PRESENT_FLAGS Flags;
    DXGI_DDI_FLIP_INTERVAL_TYPE FlipInterval;
    UINT PresentPlaneCount;
    DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY1* pPresentPlanes;
    DXGI_DDI_MODE_ROTATION* pRotationHints;
} DXGI1_6_1_DDI_ARG_PRESENTMULTIPLANEOVERLAY;
typedef struct DXGI_DDI_BASE_FUNCTIONS
{
    HRESULT ( __stdcall * pfnPresent ) (DXGI_DDI_ARG_PRESENT*);
    HRESULT ( __stdcall * pfnGetGammaCaps ) (DXGI_DDI_ARG_GET_GAMMA_CONTROL_CAPS*);
    HRESULT ( __stdcall * pfnSetDisplayMode ) (DXGI_DDI_ARG_SETDISPLAYMODE*);
    HRESULT ( __stdcall * pfnSetResourcePriority ) (DXGI_DDI_ARG_SETRESOURCEPRIORITY*);
    HRESULT ( __stdcall * pfnQueryResourceResidency )(DXGI_DDI_ARG_QUERYRESOURCERESIDENCY*);
    HRESULT ( __stdcall * pfnRotateResourceIdentities )(DXGI_DDI_ARG_ROTATE_RESOURCE_IDENTITIES*);
    HRESULT ( __stdcall * pfnBlt )(DXGI_DDI_ARG_BLT*);
}DXGI_DDI_BASE_FUNCTIONS;
typedef struct DXGI1_1_DDI_BASE_FUNCTIONS
{
    HRESULT ( __stdcall * pfnPresent ) (DXGI_DDI_ARG_PRESENT*);
    HRESULT ( __stdcall * pfnGetGammaCaps ) (DXGI_DDI_ARG_GET_GAMMA_CONTROL_CAPS*);
    HRESULT ( __stdcall * pfnSetDisplayMode ) (DXGI_DDI_ARG_SETDISPLAYMODE*);
    HRESULT ( __stdcall * pfnSetResourcePriority ) (DXGI_DDI_ARG_SETRESOURCEPRIORITY*);
    HRESULT ( __stdcall * pfnQueryResourceResidency )(DXGI_DDI_ARG_QUERYRESOURCERESIDENCY*);
    HRESULT ( __stdcall * pfnRotateResourceIdentities )(DXGI_DDI_ARG_ROTATE_RESOURCE_IDENTITIES*);
    HRESULT ( __stdcall * pfnBlt )(DXGI_DDI_ARG_BLT*);
    HRESULT ( __stdcall * pfnResolveSharedResource ) (DXGI_DDI_ARG_RESOLVESHAREDRESOURCE*);
}DXGI1_1_DDI_BASE_FUNCTIONS;
typedef struct DXGI1_2_DDI_BASE_FUNCTIONS
{
    HRESULT ( __stdcall * pfnPresent ) (DXGI_DDI_ARG_PRESENT*);
    HRESULT ( __stdcall * pfnGetGammaCaps ) (DXGI_DDI_ARG_GET_GAMMA_CONTROL_CAPS*);
    HRESULT ( __stdcall * pfnSetDisplayMode ) (DXGI_DDI_ARG_SETDISPLAYMODE*);
    HRESULT ( __stdcall * pfnSetResourcePriority ) (DXGI_DDI_ARG_SETRESOURCEPRIORITY*);
    HRESULT ( __stdcall * pfnQueryResourceResidency )(DXGI_DDI_ARG_QUERYRESOURCERESIDENCY*);
    HRESULT ( __stdcall * pfnRotateResourceIdentities )(DXGI_DDI_ARG_ROTATE_RESOURCE_IDENTITIES*);
    HRESULT ( __stdcall * pfnBlt )(DXGI_DDI_ARG_BLT*);
    HRESULT ( __stdcall * pfnResolveSharedResource ) (DXGI_DDI_ARG_RESOLVESHAREDRESOURCE*);
    HRESULT ( __stdcall * pfnBlt1 ) (DXGI_DDI_ARG_BLT1*);
    HRESULT ( __stdcall * pfnOfferResources ) (DXGI_DDI_ARG_OFFERRESOURCES*);
    HRESULT ( __stdcall * pfnReclaimResources ) (DXGI_DDI_ARG_RECLAIMRESOURCES*);
    HRESULT ( __stdcall * pfnGetMultiplaneOverlayCaps ) (DXGI_DDI_ARG_GETMULTIPLANEOVERLAYCAPS*);
    HRESULT ( __stdcall * pfnGetMultiplaneOverlayFilterRange ) (void*);
    HRESULT ( __stdcall * pfnCheckMultiplaneOverlaySupport ) (DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYSUPPORT*);
    HRESULT ( __stdcall * pfnPresentMultiplaneOverlay ) (DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY*);
}DXGI1_2_DDI_BASE_FUNCTIONS;
typedef struct DXGI1_3_DDI_BASE_FUNCTIONS
{
    HRESULT ( __stdcall * pfnPresent ) (DXGI_DDI_ARG_PRESENT*);
    HRESULT ( __stdcall * pfnGetGammaCaps ) (DXGI_DDI_ARG_GET_GAMMA_CONTROL_CAPS*);
    HRESULT ( __stdcall * pfnSetDisplayMode ) (DXGI_DDI_ARG_SETDISPLAYMODE*);
    HRESULT ( __stdcall * pfnSetResourcePriority ) (DXGI_DDI_ARG_SETRESOURCEPRIORITY*);
    HRESULT ( __stdcall * pfnQueryResourceResidency )(DXGI_DDI_ARG_QUERYRESOURCERESIDENCY*);
    HRESULT ( __stdcall * pfnRotateResourceIdentities )(DXGI_DDI_ARG_ROTATE_RESOURCE_IDENTITIES*);
    HRESULT ( __stdcall * pfnBlt )(DXGI_DDI_ARG_BLT*);
    HRESULT ( __stdcall * pfnResolveSharedResource ) (DXGI_DDI_ARG_RESOLVESHAREDRESOURCE*);
    HRESULT ( __stdcall * pfnBlt1 ) (DXGI_DDI_ARG_BLT1*);
    HRESULT ( __stdcall * pfnOfferResources ) (DXGI_DDI_ARG_OFFERRESOURCES*);
    HRESULT ( __stdcall * pfnReclaimResources ) (DXGI_DDI_ARG_RECLAIMRESOURCES*);
    HRESULT ( __stdcall * pfnGetMultiplaneOverlayCaps ) (DXGI_DDI_ARG_GETMULTIPLANEOVERLAYCAPS*);
    HRESULT ( __stdcall * pfnGetMultiplaneOverlayGroupCaps ) (DXGI_DDI_ARG_GETMULTIPLANEOVERLAYGROUPCAPS*);
    HRESULT ( __stdcall * pfnReserved1 ) (void*);
    HRESULT ( __stdcall * pfnPresentMultiplaneOverlay ) (DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY*);
    HRESULT ( __stdcall * pfnReserved2 ) (void*);
    HRESULT ( __stdcall * pfnPresent1 ) (DXGI_DDI_ARG_PRESENT1*);
    HRESULT ( __stdcall * pfnCheckPresentDurationSupport ) (DXGI_DDI_ARG_CHECKPRESENTDURATIONSUPPORT*);
}DXGI1_3_DDI_BASE_FUNCTIONS;
typedef struct DXGI1_4_DDI_BASE_FUNCTIONS
{
    HRESULT ( __stdcall * pfnPresent ) (DXGI_DDI_ARG_PRESENT*);
    HRESULT ( __stdcall * pfnGetGammaCaps ) (DXGI_DDI_ARG_GET_GAMMA_CONTROL_CAPS*);
    HRESULT ( __stdcall * pfnSetDisplayMode ) (DXGI_DDI_ARG_SETDISPLAYMODE*);
    HRESULT ( __stdcall * pfnSetResourcePriority ) (DXGI_DDI_ARG_SETRESOURCEPRIORITY*);
    HRESULT ( __stdcall * pfnQueryResourceResidency )(DXGI_DDI_ARG_QUERYRESOURCERESIDENCY*);
    HRESULT ( __stdcall * pfnRotateResourceIdentities )(DXGI_DDI_ARG_ROTATE_RESOURCE_IDENTITIES*);
    HRESULT ( __stdcall * pfnBlt )(DXGI_DDI_ARG_BLT*);
    HRESULT ( __stdcall * pfnResolveSharedResource ) (DXGI_DDI_ARG_RESOLVESHAREDRESOURCE*);
    HRESULT ( __stdcall * pfnBlt1 ) (DXGI_DDI_ARG_BLT1*);
    HRESULT ( __stdcall * pfnOfferResources ) (DXGI_DDI_ARG_OFFERRESOURCES*);
    HRESULT ( __stdcall * pfnReclaimResources ) (DXGI_DDI_ARG_RECLAIMRESOURCES*);
    HRESULT ( __stdcall * pfnGetMultiplaneOverlayCaps ) (DXGI_DDI_ARG_GETMULTIPLANEOVERLAYCAPS*);
    HRESULT ( __stdcall * pfnGetMultiplaneOverlayGroupCaps ) (DXGI_DDI_ARG_GETMULTIPLANEOVERLAYGROUPCAPS*);
    HRESULT ( __stdcall * pfnReserved1 ) (void*);
    HRESULT ( __stdcall * pfnPresentMultiplaneOverlay ) (DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY*);
    HRESULT ( __stdcall * pfnReserved2 ) (void*);
    HRESULT ( __stdcall * pfnPresent1 ) (DXGI_DDI_ARG_PRESENT1*);
    HRESULT ( __stdcall * pfnCheckPresentDurationSupport ) (DXGI_DDI_ARG_CHECKPRESENTDURATIONSUPPORT*);
    HRESULT ( __stdcall * pfnTrimResidencySet ) (DXGI_DDI_ARG_TRIMRESIDENCYSET*);
    HRESULT ( __stdcall * pfnCheckMultiplaneOverlayColorSpaceSupport ) (DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYCOLORSPACESUPPORT*);
    HRESULT ( __stdcall * pfnPresentMultiplaneOverlay1 ) (DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY1*);
}DXGI1_4_DDI_BASE_FUNCTIONS;
typedef struct DXGI1_5_DDI_BASE_FUNCTIONS
{
    HRESULT ( __stdcall * pfnPresent ) (DXGI_DDI_ARG_PRESENT*);
    HRESULT ( __stdcall * pfnGetGammaCaps ) (DXGI_DDI_ARG_GET_GAMMA_CONTROL_CAPS*);
    HRESULT ( __stdcall * pfnSetDisplayMode ) (DXGI_DDI_ARG_SETDISPLAYMODE*);
    HRESULT ( __stdcall * pfnSetResourcePriority ) (DXGI_DDI_ARG_SETRESOURCEPRIORITY*);
    HRESULT ( __stdcall * pfnQueryResourceResidency )(DXGI_DDI_ARG_QUERYRESOURCERESIDENCY*);
    HRESULT ( __stdcall * pfnRotateResourceIdentities )(DXGI_DDI_ARG_ROTATE_RESOURCE_IDENTITIES*);
    HRESULT ( __stdcall * pfnBlt )(DXGI_DDI_ARG_BLT*);
    HRESULT ( __stdcall * pfnResolveSharedResource ) (DXGI_DDI_ARG_RESOLVESHAREDRESOURCE*);
    HRESULT ( __stdcall * pfnBlt1 ) (DXGI_DDI_ARG_BLT1*);
    HRESULT ( __stdcall * pfnOfferResources1 ) (DXGI_DDI_ARG_OFFERRESOURCES1*);
    HRESULT ( __stdcall * pfnReclaimResources ) (DXGI_DDI_ARG_RECLAIMRESOURCES*);
    HRESULT ( __stdcall * pfnGetMultiplaneOverlayCaps ) (DXGI_DDI_ARG_GETMULTIPLANEOVERLAYCAPS*);
    HRESULT ( __stdcall * pfnGetMultiplaneOverlayGroupCaps ) (DXGI_DDI_ARG_GETMULTIPLANEOVERLAYGROUPCAPS*);
    HRESULT ( __stdcall * pfnReserved1 ) (void*);
    HRESULT ( __stdcall * pfnPresentMultiplaneOverlay ) (DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY*);
    HRESULT ( __stdcall * pfnReserved2 ) (void*);
    HRESULT ( __stdcall * pfnPresent1 ) (DXGI_DDI_ARG_PRESENT1*);
    HRESULT ( __stdcall * pfnCheckPresentDurationSupport ) (DXGI_DDI_ARG_CHECKPRESENTDURATIONSUPPORT*);
    HRESULT ( __stdcall * pfnTrimResidencySet ) (DXGI_DDI_ARG_TRIMRESIDENCYSET*);
    HRESULT ( __stdcall * pfnCheckMultiplaneOverlayColorSpaceSupport ) (DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYCOLORSPACESUPPORT*);
    HRESULT ( __stdcall * pfnPresentMultiplaneOverlay1 ) (DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY1*);
    HRESULT ( __stdcall * pfnReclaimResources1 ) (DXGI_DDI_ARG_RECLAIMRESOURCES1*);
}DXGI1_5_DDI_BASE_FUNCTIONS;
typedef struct DXGI1_6_1_DDI_BASE_FUNCTIONS
{
    HRESULT ( __stdcall * pfnPresent ) (DXGI_DDI_ARG_PRESENT*);
    HRESULT ( __stdcall * pfnGetGammaCaps ) (DXGI_DDI_ARG_GET_GAMMA_CONTROL_CAPS*);
    HRESULT ( __stdcall * pfnSetDisplayMode ) (DXGI_DDI_ARG_SETDISPLAYMODE*);
    HRESULT ( __stdcall * pfnSetResourcePriority ) (DXGI_DDI_ARG_SETRESOURCEPRIORITY*);
    HRESULT ( __stdcall * pfnQueryResourceResidency )(DXGI_DDI_ARG_QUERYRESOURCERESIDENCY*);
    HRESULT ( __stdcall * pfnRotateResourceIdentities )(DXGI_DDI_ARG_ROTATE_RESOURCE_IDENTITIES*);
    HRESULT ( __stdcall * pfnBlt )(DXGI_DDI_ARG_BLT*);
    HRESULT ( __stdcall * pfnResolveSharedResource ) (DXGI_DDI_ARG_RESOLVESHAREDRESOURCE*);
    HRESULT ( __stdcall * pfnBlt1 ) (DXGI_DDI_ARG_BLT1*);
    HRESULT ( __stdcall * pfnOfferResources1 ) (DXGI_DDI_ARG_OFFERRESOURCES1*);
    HRESULT ( __stdcall * pfnReclaimResources ) (DXGI_DDI_ARG_RECLAIMRESOURCES*);
    HRESULT ( __stdcall * pfnGetMultiplaneOverlayCaps ) (DXGI_DDI_ARG_GETMULTIPLANEOVERLAYCAPS*);
    HRESULT ( __stdcall * pfnGetMultiplaneOverlayGroupCaps ) (DXGI_DDI_ARG_GETMULTIPLANEOVERLAYGROUPCAPS*);
    HRESULT ( __stdcall * pfnReserved1 ) (void*);
    HRESULT ( __stdcall * pfnPresentMultiplaneOverlay ) (DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY*);
    HRESULT ( __stdcall * pfnReserved2 ) (void*);
    HRESULT ( __stdcall * pfnPresent1 ) (DXGI1_6_1_DDI_ARG_PRESENT*);
    HRESULT ( __stdcall * pfnCheckPresentDurationSupport ) (DXGI_DDI_ARG_CHECKPRESENTDURATIONSUPPORT*);
    HRESULT ( __stdcall * pfnTrimResidencySet ) (DXGI_DDI_ARG_TRIMRESIDENCYSET*);
    HRESULT ( __stdcall * pfnCheckMultiplaneOverlayColorSpaceSupport ) (DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYCOLORSPACESUPPORT*);
    HRESULT ( __stdcall * pfnPresentMultiplaneOverlay1 ) (DXGI1_6_1_DDI_ARG_PRESENTMULTIPLANEOVERLAY*);
    HRESULT ( __stdcall * pfnReclaimResources1 ) (DXGI_DDI_ARG_RECLAIMRESOURCES1*);
}DXGI1_6_1_DDI_BASE_FUNCTIONS;
typedef struct DXGIDDICB_PRESENT
{
    D3DKMT_HANDLE hSrcAllocation;
    D3DKMT_HANDLE hDstAllocation;
    void * pDXGIContext;
    HANDLE hContext;
    UINT BroadcastContextCount;
    HANDLE BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT];
    _Field_size_(BroadcastContextCount)
    D3DKMT_HANDLE* BroadcastSrcAllocation;
    _Field_size_opt_(BroadcastContextCount)
    D3DKMT_HANDLE* BroadcastDstAllocation;
    UINT PrivateDriverDataSize;
    _Field_size_bytes_(PrivateDriverDataSize)
    PVOID pPrivateDriverData;
    BOOLEAN bOptimizeForComposition;
    BOOL SyncIntervalOverrideValid;
    DXGI_DDI_FLIP_INTERVAL_TYPE SyncIntervalOverride;
} DXGIDDICB_PRESENT;
typedef struct DXGIDDI_MULTIPLANE_OVERLAY_ALLOCATION_INFO
{
    D3DKMT_HANDLE PresentAllocation;
    UINT SubResourceIndex;
} DXGIDDI_MULTIPLANE_OVERLAY_ALLOCATION_INFO;
typedef struct DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY
{
    void * pDXGIContext;
    HANDLE hContext;
    UINT BroadcastContextCount;
    HANDLE BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT];
    DWORD AllocationInfoCount;
    DXGIDDI_MULTIPLANE_OVERLAY_ALLOCATION_INFO AllocationInfo[DXGI_DDI_MAX_MULTIPLANE_OVERLAY_ALLOCATIONS];
} DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY;
typedef struct DXGIDDI_MULTIPLANE_OVERLAY_PLANE_INFO
{
    UINT ContextCount;
    _Field_size_(ContextCount)
    HANDLE* pContextList;
    _Field_size_(ContextCount)
    D3DKMT_HANDLE* pAllocationList;
    UINT DriverPrivateDataSize;
    _Field_size_bytes_(DriverPrivateDataSize)
    VOID* pDriverPrivateData;
    BOOL SyncIntervalOverrideValid;
    DXGI_DDI_FLIP_INTERVAL_TYPE SyncIntervalOverride;
} DXGIDDI_MULTIPLANE_OVERLAY_PLANE_INFO;
typedef struct DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY1
{
    void * pDXGIContext;
    DWORD PresentPlaneCount;
    _Field_size_(PresentPlaneCount)
    DXGIDDI_MULTIPLANE_OVERLAY_PLANE_INFO** ppPresentPlanes;
} DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY1;
typedef struct DXGIDDICB_SUBMITPRESENTBLTTOHWQUEUE
{
    D3DKMT_HANDLE hSrcAllocation;
    D3DKMT_HANDLE hDstAllocation;
    void * pDXGIContext;
    HANDLE hHwQueue;
    UINT64 HwQueueProgressFenceId;
    UINT PrivateDriverDataSize;
    _Field_size_bytes_(PrivateDriverDataSize)
    PVOID pPrivateDriverData;
} DXGIDDICB_SUBMITPRESENTBLTTOHWQUEUE;
typedef struct DXGIDDICB_SUBMITPRESENTTOHWQUEUE
{
    void * pDXGIContext;
    _Field_size_(BroadcastHwQueueCount)
    D3DKMT_HANDLE* BroadcastSrcAllocations;
    _Field_size_opt_(BroadcastHwQueueCount)
    D3DKMT_HANDLE* BroadcastDstAllocations;
    HANDLE* hHwQueues;
    UINT BroadcastHwQueueCount;
    UINT PrivateDriverDataSize;
    _Field_size_bytes_(PrivateDriverDataSize)
    PVOID pPrivateDriverData;
    BOOLEAN bOptimizeForComposition;
    BOOL SyncIntervalOverrideValid;
    DXGI_DDI_FLIP_INTERVAL_TYPE SyncIntervalOverride;
} DXGIDDICB_SUBMITPRESENTTOHWQUEUE;
typedef _Check_return_ HRESULT (APIENTRY CALLBACK *PFNDDXGIDDI_PRESENTCB)(
        _In_ HANDLE hDevice, _In_ DXGIDDICB_PRESENT*);
typedef _Check_return_ HRESULT (APIENTRY CALLBACK *PFNDDXGIDDI_PRESENT_MULTIPLANE_OVERLAYCB)(
        _In_ HANDLE hDevice, _In_ CONST DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY*);
typedef _Check_return_ HRESULT (APIENTRY CALLBACK *PFNDDXGIDDI_PRESENT_MULTIPLANE_OVERLAY1CB)(
        _In_ HANDLE hDevice, _In_ CONST DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY1*);
typedef _Check_return_ HRESULT (APIENTRY CALLBACK *PFNDDXGIDDI_SUBMITPRESENTBLTTOHWQUEUECB)(
        _In_ HANDLE hDevice, _In_ DXGIDDICB_SUBMITPRESENTBLTTOHWQUEUE*);
typedef _Check_return_ HRESULT (APIENTRY CALLBACK *PFNDDXGIDDI_SUBMITPRESENTTOHWQUEUECB)(
        _In_ HANDLE hDevice, _In_ DXGIDDICB_SUBMITPRESENTTOHWQUEUE*);
typedef struct DXGI_DDI_BASE_CALLBACKS
{
    PFNDDXGIDDI_PRESENTCB pfnPresentCb;
    PFNDDXGIDDI_PRESENT_MULTIPLANE_OVERLAYCB pfnPresentMultiplaneOverlayCb;
    PFNDDXGIDDI_PRESENT_MULTIPLANE_OVERLAY1CB pfnPresentMultiplaneOverlay1Cb;
    PFNDDXGIDDI_SUBMITPRESENTBLTTOHWQUEUECB pfnSubmitPresentBltToHwQueueCb;
    PFNDDXGIDDI_SUBMITPRESENTTOHWQUEUECB pfnSubmitPresentToHwQueueCb;
} DXGI_DDI_BASE_CALLBACKS;
typedef struct DXGI_DDI_BASE_ARGS
{
    DXGI_DDI_BASE_CALLBACKS *pDXGIBaseCallbacks;
    union
    {
        DXGI1_6_1_DDI_BASE_FUNCTIONS *pDXGIDDIBaseFunctions6_1;
        DXGI1_5_DDI_BASE_FUNCTIONS *pDXGIDDIBaseFunctions6;
        DXGI1_4_DDI_BASE_FUNCTIONS *pDXGIDDIBaseFunctions5;
        DXGI1_3_DDI_BASE_FUNCTIONS *pDXGIDDIBaseFunctions4;
        DXGI1_2_DDI_BASE_FUNCTIONS *pDXGIDDIBaseFunctions3;
        DXGI1_1_DDI_BASE_FUNCTIONS *pDXGIDDIBaseFunctions2;
        DXGI_DDI_BASE_FUNCTIONS *pDXGIDDIBaseFunctions;
    };
} DXGI_DDI_BASE_ARGS;
#endif
#pragma endregion