       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_PROPERTYKEY(PKEY_PhotoAcquire_RelativePathname, 0x00f23377, 0x7ac6, 0x4b7a, 0x84, 0x43, 0x34, 0x5e, 0x73, 0x1f, 0xa5, 0x7a, 2);
DEFINE_PROPERTYKEY(PKEY_PhotoAcquire_FinalFilename, 0x00f23377, 0x7ac6, 0x4b7a, 0x84, 0x43, 0x34, 0x5e, 0x73, 0x1f, 0xa5, 0x7a, 3);
DEFINE_PROPERTYKEY(PKEY_PhotoAcquire_GroupTag, 0x00f23377, 0x7ac6, 0x4b7a, 0x84, 0x43, 0x34, 0x5e, 0x73, 0x1f, 0xa5, 0x7a, 4);
DEFINE_PROPERTYKEY(PKEY_PhotoAcquire_TransferResult, 0x00f23377, 0x7ac6, 0x4b7a, 0x84, 0x43, 0x34, 0x5e, 0x73, 0x1f, 0xa5, 0x7a, 5);
DEFINE_PROPERTYKEY(PKEY_PhotoAcquire_OriginalFilename, 0x00f23377, 0x7ac6, 0x4b7a, 0x84, 0x43, 0x34, 0x5e, 0x73, 0x1f, 0xa5, 0x7a, 6);
DEFINE_PROPERTYKEY(PKEY_PhotoAcquire_CameraSequenceNumber, 0x00f23377, 0x7ac6, 0x4b7a, 0x84, 0x43, 0x34, 0x5e, 0x73, 0x1f, 0xa5, 0x7a, 7);
DEFINE_PROPERTYKEY(PKEY_PhotoAcquire_IntermediateFile, 0x00f23377, 0x7ac6, 0x4b7a, 0x84, 0x43, 0x34, 0x5e, 0x73, 0x1f, 0xa5, 0x7a, 8);
DEFINE_PROPERTYKEY(PKEY_PhotoAcquire_SkipImport, 0x00f23377, 0x7ac6, 0x4b7a, 0x84, 0x43, 0x34, 0x5e, 0x73, 0x1f, 0xa5, 0x7a, 9);
DEFINE_PROPERTYKEY(PKEY_PhotoAcquire_DuplicateDetectionID, 0x00f23377, 0x7ac6, 0x4b7a, 0x84, 0x43, 0x34, 0x5e, 0x73, 0x1f, 0xa5, 0x7a, 10);
#endif
#pragma endregion