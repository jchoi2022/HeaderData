#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
DEFINE_GUID( GUID_DEVINTERFACE_KEYBOARD, 0x884b96c3, 0x56ef, 0x11d1, \
             0xbc, 0x8c, 0x00, 0xa0, 0xc9, 0x14, 0x05, 0xdd);
typedef struct _KEYBOARD_INPUT_DATA {
    USHORT UnitId;
    USHORT MakeCode;
    USHORT Flags;
    USHORT Reserved;
    ULONG ExtraInformation;
} KEYBOARD_INPUT_DATA, *PKEYBOARD_INPUT_DATA;
typedef struct _KEYBOARD_TYPEMATIC_PARAMETERS {
    USHORT UnitId;
    USHORT Rate;
    USHORT Delay;
} KEYBOARD_TYPEMATIC_PARAMETERS, *PKEYBOARD_TYPEMATIC_PARAMETERS;
typedef struct _KEYBOARD_ID {
    UCHAR Type;
    UCHAR Subtype;
} KEYBOARD_ID, *PKEYBOARD_ID;
typedef struct _KEYBOARD_ATTRIBUTES {
    KEYBOARD_ID KeyboardIdentifier;
    USHORT KeyboardMode;
    USHORT NumberOfFunctionKeys;
    USHORT NumberOfIndicators;
    USHORT NumberOfKeysTotal;
    ULONG InputDataQueueLength;
    KEYBOARD_TYPEMATIC_PARAMETERS KeyRepeatMinimum;
    KEYBOARD_TYPEMATIC_PARAMETERS KeyRepeatMaximum;
} KEYBOARD_ATTRIBUTES, *PKEYBOARD_ATTRIBUTES;
typedef struct _KEYBOARD_EXTENDED_ATTRIBUTES {
    UCHAR Version;
    UCHAR FormFactor;
    UCHAR KeyType;
    UCHAR PhysicalLayout;
    UCHAR VendorSpecificPhysicalLayout;
    UCHAR IETFLanguageTagIndex;
    UCHAR ImplementedInputAssistControls;
} KEYBOARD_EXTENDED_ATTRIBUTES, *PKEYBOARD_EXTENDED_ATTRIBUTES;
typedef struct _KEYBOARD_INDICATOR_PARAMETERS {
    USHORT UnitId;
    USHORT LedFlags;
} KEYBOARD_INDICATOR_PARAMETERS, *PKEYBOARD_INDICATOR_PARAMETERS;
typedef struct _INDICATOR_LIST {
    USHORT MakeCode;
    USHORT IndicatorFlags;
} INDICATOR_LIST, *PINDICATOR_LIST;
typedef struct _KEYBOARD_INDICATOR_TRANSLATION {
    USHORT NumberOfIndicatorKeys;
    INDICATOR_LIST IndicatorList[1];
} KEYBOARD_INDICATOR_TRANSLATION, *PKEYBOARD_INDICATOR_TRANSLATION;
typedef struct _KEYBOARD_UNIT_ID_PARAMETER {
    USHORT UnitId;
} KEYBOARD_UNIT_ID_PARAMETER, *PKEYBOARD_UNIT_ID_PARAMETER;
typedef struct _KEYBOARD_IME_STATUS {
    USHORT UnitId;
    ULONG ImeOpen;
    ULONG ImeConvMode;
} KEYBOARD_IME_STATUS, *PKEYBOARD_IME_STATUS;
}
#endif
#pragma endregion