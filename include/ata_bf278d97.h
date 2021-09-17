#pragma warning(disable:4200)
#pragma warning(disable:4214)
#pragma warning(disable:4201)
#pragma pack(push, id_device_data, 1)
typedef struct _IDENTIFY_DEVICE_DATA {
    struct {
        USHORT Reserved1 : 1;
        USHORT Retired3 : 1;
        USHORT ResponseIncomplete : 1;
        USHORT Retired2 : 3;
        USHORT FixedDevice : 1;
        USHORT RemovableMedia : 1;
        USHORT Retired1 : 7;
        USHORT DeviceType : 1;
    } GeneralConfiguration;
    USHORT NumCylinders;
    USHORT SpecificConfiguration;
    USHORT NumHeads;
    USHORT Retired1[2];
    USHORT NumSectorsPerTrack;
    USHORT VendorUnique1[3];
    UCHAR SerialNumber[20];
    USHORT Retired2[2];
    USHORT Obsolete1;
    UCHAR FirmwareRevision[8];
    UCHAR ModelNumber[40];
    UCHAR MaximumBlockTransfer;
    UCHAR VendorUnique2;
    struct {
        USHORT FeatureSupported : 1;
        USHORT Reserved : 15;
    }TrustedComputing;
    struct {
        UCHAR CurrentLongPhysicalSectorAlignment : 2;
        UCHAR ReservedByte49 : 6;
        UCHAR DmaSupported : 1;
        UCHAR LbaSupported : 1;
        UCHAR IordyDisable : 1;
        UCHAR IordySupported : 1;
        UCHAR Reserved1 : 1;
        UCHAR StandybyTimerSupport : 1;
        UCHAR Reserved2 : 2;
        USHORT ReservedWord50;
    }Capabilities;
    USHORT ObsoleteWords51[2];
    USHORT TranslationFieldsValid : 3;
    USHORT Reserved3 : 5;
    USHORT FreeFallControlSensitivity : 8;
    USHORT NumberOfCurrentCylinders;
    USHORT NumberOfCurrentHeads;
    USHORT CurrentSectorsPerTrack;
    ULONG CurrentSectorCapacity;
    UCHAR CurrentMultiSectorSetting;
    UCHAR MultiSectorSettingValid : 1;
    UCHAR ReservedByte59 : 3;
    UCHAR SanitizeFeatureSupported : 1;
    UCHAR CryptoScrambleExtCommandSupported : 1;
    UCHAR OverwriteExtCommandSupported : 1;
    UCHAR BlockEraseExtCommandSupported : 1;
    ULONG UserAddressableSectors;
    USHORT ObsoleteWord62;
    USHORT MultiWordDMASupport : 8;
    USHORT MultiWordDMAActive : 8;
    USHORT AdvancedPIOModes : 8;
    USHORT ReservedByte64 : 8;
    USHORT MinimumMWXferCycleTime;
    USHORT RecommendedMWXferCycleTime;
    USHORT MinimumPIOCycleTime;
    USHORT MinimumPIOCycleTimeIORDY;
    struct {
        USHORT ZonedCapabilities : 2;
        USHORT NonVolatileWriteCache : 1;
        USHORT ExtendedUserAddressableSectorsSupported : 1;
        USHORT DeviceEncryptsAllUserData : 1;
        USHORT ReadZeroAfterTrimSupported : 1;
        USHORT Optional28BitCommandsSupported : 1;
        USHORT IEEE1667 : 1;
        USHORT DownloadMicrocodeDmaSupported : 1;
        USHORT SetMaxSetPasswordUnlockDmaSupported : 1;
        USHORT WriteBufferDmaSupported : 1;
        USHORT ReadBufferDmaSupported : 1;
        USHORT DeviceConfigIdentifySetDmaSupported : 1;
        USHORT LPSAERCSupported : 1;
        USHORT DeterministicReadAfterTrimSupported : 1;
        USHORT CFastSpecSupported : 1;
    }AdditionalSupported;
    USHORT ReservedWords70[5];
    USHORT QueueDepth : 5;
    USHORT ReservedWord75 : 11;
    struct {
        USHORT Reserved0 : 1;
        USHORT SataGen1 : 1;
        USHORT SataGen2 : 1;
        USHORT SataGen3 : 1;
        USHORT Reserved1 : 4;
        USHORT NCQ : 1;
        USHORT HIPM : 1;
        USHORT PhyEvents : 1;
        USHORT NcqUnload : 1;
        USHORT NcqPriority : 1;
        USHORT HostAutoPS : 1;
        USHORT DeviceAutoPS : 1;
        USHORT ReadLogDMA : 1;
        USHORT Reserved2 : 1;
        USHORT CurrentSpeed : 3;
        USHORT NcqStreaming : 1;
        USHORT NcqQueueMgmt : 1;
        USHORT NcqReceiveSend : 1;
        USHORT DEVSLPtoReducedPwrState : 1;
        USHORT Reserved3 : 8;
    }SerialAtaCapabilities;
    struct {
        USHORT Reserved0 : 1;
        USHORT NonZeroOffsets:1;
        USHORT DmaSetupAutoActivate:1;
        USHORT DIPM : 1;
        USHORT InOrderData : 1;
        USHORT HardwareFeatureControl:1;
        USHORT SoftwareSettingsPreservation:1;
        USHORT NCQAutosense:1;
        USHORT DEVSLP :1;
        USHORT HybridInformation :1;
        USHORT Reserved1 : 6;
    }SerialAtaFeaturesSupported;
    struct {
        USHORT Reserved0 : 1;
        USHORT NonZeroOffsets:1;
        USHORT DmaSetupAutoActivate:1;
        USHORT DIPM : 1;
        USHORT InOrderData : 1;
        USHORT HardwareFeatureControl:1;
        USHORT SoftwareSettingsPreservation:1;
        USHORT DeviceAutoPS : 1;
        USHORT DEVSLP :1;
        USHORT HybridInformation :1;
        USHORT Reserved1 : 6;
    }SerialAtaFeaturesEnabled;
    USHORT MajorRevision;
    USHORT MinorRevision;
    struct {
        USHORT SmartCommands : 1;
        USHORT SecurityMode : 1;
        USHORT RemovableMediaFeature : 1;
        USHORT PowerManagement : 1;
        USHORT Reserved1 : 1;
        USHORT WriteCache : 1;
        USHORT LookAhead : 1;
        USHORT ReleaseInterrupt : 1;
        USHORT ServiceInterrupt : 1;
        USHORT DeviceReset : 1;
        USHORT HostProtectedArea : 1;
        USHORT Obsolete1 : 1;
        USHORT WriteBuffer : 1;
        USHORT ReadBuffer : 1;
        USHORT Nop : 1;
        USHORT Obsolete2 : 1;
        USHORT DownloadMicrocode : 1;
        USHORT DmaQueued : 1;
        USHORT Cfa : 1;
        USHORT AdvancedPm : 1;
        USHORT Msn : 1;
        USHORT PowerUpInStandby : 1;
        USHORT ManualPowerUp : 1;
        USHORT Reserved2 : 1;
        USHORT SetMax : 1;
        USHORT Acoustics : 1;
        USHORT BigLba : 1;
        USHORT DeviceConfigOverlay : 1;
        USHORT FlushCache : 1;
        USHORT FlushCacheExt : 1;
        USHORT WordValid83 : 2;
        USHORT SmartErrorLog : 1;
        USHORT SmartSelfTest : 1;
        USHORT MediaSerialNumber : 1;
        USHORT MediaCardPassThrough : 1;
        USHORT StreamingFeature : 1;
        USHORT GpLogging : 1;
        USHORT WriteFua : 1;
        USHORT WriteQueuedFua : 1;
        USHORT WWN64Bit : 1;
        USHORT URGReadStream : 1;
        USHORT URGWriteStream : 1;
        USHORT ReservedForTechReport : 2;
        USHORT IdleWithUnloadFeature : 1;
        USHORT WordValid : 2;
    }CommandSetSupport;
    struct {
        USHORT SmartCommands : 1;
        USHORT SecurityMode : 1;
        USHORT RemovableMediaFeature : 1;
        USHORT PowerManagement : 1;
        USHORT Reserved1 : 1;
        USHORT WriteCache : 1;
        USHORT LookAhead : 1;
        USHORT ReleaseInterrupt : 1;
        USHORT ServiceInterrupt : 1;
        USHORT DeviceReset : 1;
        USHORT HostProtectedArea : 1;
        USHORT Obsolete1 : 1;
        USHORT WriteBuffer : 1;
        USHORT ReadBuffer : 1;
        USHORT Nop : 1;
        USHORT Obsolete2 : 1;
        USHORT DownloadMicrocode : 1;
        USHORT DmaQueued : 1;
        USHORT Cfa : 1;
        USHORT AdvancedPm : 1;
        USHORT Msn : 1;
        USHORT PowerUpInStandby : 1;
        USHORT ManualPowerUp : 1;
        USHORT Reserved2 : 1;
        USHORT SetMax : 1;
        USHORT Acoustics : 1;
        USHORT BigLba : 1;
        USHORT DeviceConfigOverlay : 1;
        USHORT FlushCache : 1;
        USHORT FlushCacheExt : 1;
        USHORT Resrved3 : 1;
        USHORT Words119_120Valid : 1;
        USHORT SmartErrorLog : 1;
        USHORT SmartSelfTest : 1;
        USHORT MediaSerialNumber : 1;
        USHORT MediaCardPassThrough : 1;
        USHORT StreamingFeature : 1;
        USHORT GpLogging : 1;
        USHORT WriteFua : 1;
        USHORT WriteQueuedFua : 1;
        USHORT WWN64Bit : 1;
        USHORT URGReadStream : 1;
        USHORT URGWriteStream : 1;
        USHORT ReservedForTechReport : 2;
        USHORT IdleWithUnloadFeature : 1;
        USHORT Reserved4 : 2;
    }CommandSetActive;
    USHORT UltraDMASupport : 8;
    USHORT UltraDMAActive : 8;
    struct {
        USHORT TimeRequired : 15;
        USHORT ExtendedTimeReported : 1;
    } NormalSecurityEraseUnit;
    struct {
        USHORT TimeRequired : 15;
        USHORT ExtendedTimeReported : 1;
    } EnhancedSecurityEraseUnit;
    USHORT CurrentAPMLevel : 8;
    USHORT ReservedWord91 : 8;
    USHORT MasterPasswordID;
    USHORT HardwareResetResult;
    USHORT CurrentAcousticValue : 8;
    USHORT RecommendedAcousticValue : 8;
    USHORT StreamMinRequestSize;
    USHORT StreamingTransferTimeDMA;
    USHORT StreamingAccessLatencyDMAPIO;
    ULONG StreamingPerfGranularity;
    ULONG Max48BitLBA[2];
    USHORT StreamingTransferTime;
    USHORT DsmCap;
    struct {
        USHORT LogicalSectorsPerPhysicalSector : 4;
        USHORT Reserved0 : 8;
        USHORT LogicalSectorLongerThan256Words : 1;
        USHORT MultipleLogicalSectorsPerPhysicalSector : 1;
        USHORT Reserved1 : 2;
    } PhysicalLogicalSectorSize;
    USHORT InterSeekDelay;
    USHORT WorldWideName[4];
    USHORT ReservedForWorldWideName128[4];
    USHORT ReservedForTlcTechnicalReport;
    USHORT WordsPerLogicalSector[2];
    struct {
        USHORT ReservedForDrqTechnicalReport : 1;
        USHORT WriteReadVerify : 1;
        USHORT WriteUncorrectableExt : 1;
        USHORT ReadWriteLogDmaExt : 1;
        USHORT DownloadMicrocodeMode3 : 1;
        USHORT FreefallControl : 1;
        USHORT SenseDataReporting : 1;
        USHORT ExtendedPowerConditions : 1;
        USHORT Reserved0 : 6;
        USHORT WordValid : 2;
    }CommandSetSupportExt;
    struct {
        USHORT ReservedForDrqTechnicalReport : 1;
        USHORT WriteReadVerify : 1;
        USHORT WriteUncorrectableExt : 1;
        USHORT ReadWriteLogDmaExt : 1;
        USHORT DownloadMicrocodeMode3 : 1;
        USHORT FreefallControl : 1;
        USHORT SenseDataReporting : 1;
        USHORT ExtendedPowerConditions : 1;
        USHORT Reserved0 : 6;
        USHORT Reserved1 : 2;
    }CommandSetActiveExt;
    USHORT ReservedForExpandedSupportandActive[6];
    USHORT MsnSupport : 2;
    USHORT ReservedWord127 : 14;
    struct {
        USHORT SecuritySupported : 1;
        USHORT SecurityEnabled : 1;
        USHORT SecurityLocked : 1;
        USHORT SecurityFrozen : 1;
        USHORT SecurityCountExpired : 1;
        USHORT EnhancedSecurityEraseSupported : 1;
        USHORT Reserved0 : 2;
        USHORT SecurityLevel : 1;
        USHORT Reserved1 : 7;
    } SecurityStatus;
    USHORT ReservedWord129[31];
    struct {
        USHORT MaximumCurrentInMA : 12;
        USHORT CfaPowerMode1Disabled : 1;
        USHORT CfaPowerMode1Required : 1;
        USHORT Reserved0 : 1;
        USHORT Word160Supported : 1;
    } CfaPowerMode1;
    USHORT ReservedForCfaWord161[7];
    USHORT NominalFormFactor : 4;
    USHORT ReservedWord168 : 12;
    struct {
        USHORT SupportsTrim : 1;
        USHORT Reserved0 : 15;
    } DataSetManagementFeature;
    USHORT AdditionalProductID[4];
    USHORT ReservedForCfaWord174[2];
    USHORT CurrentMediaSerialNumber[30];
    struct {
        USHORT Supported : 1;
        USHORT Reserved0 : 1;
        USHORT WriteSameSuported : 1;
        USHORT ErrorRecoveryControlSupported : 1;
        USHORT FeatureControlSuported : 1;
        USHORT DataTablesSuported : 1;
        USHORT Reserved1 : 6;
        USHORT VendorSpecific : 4;
    } SCTCommandTransport;
    USHORT ReservedWord207[2];
    struct {
        USHORT AlignmentOfLogicalWithinPhysical: 14;
        USHORT Word209Supported: 1;
        USHORT Reserved0: 1;
    } BlockAlignment;
    USHORT WriteReadVerifySectorCountMode3Only[2];
    USHORT WriteReadVerifySectorCountMode2Only[2];
    struct {
        USHORT NVCachePowerModeEnabled: 1;
        USHORT Reserved0: 3;
        USHORT NVCacheFeatureSetEnabled: 1;
        USHORT Reserved1: 3;
        USHORT NVCachePowerModeVersion: 4;
        USHORT NVCacheFeatureSetVersion: 4;
    } NVCacheCapabilities;
    USHORT NVCacheSizeLSW;
    USHORT NVCacheSizeMSW;
    USHORT NominalMediaRotationRate;
    USHORT ReservedWord218;
    struct {
        UCHAR NVCacheEstimatedTimeToSpinUpInSeconds;
        UCHAR Reserved;
    } NVCacheOptions;
    USHORT WriteReadVerifySectorCountMode : 8;
    USHORT ReservedWord220 : 8;
    USHORT ReservedWord221;
    struct {
        USHORT MajorVersion : 12;
        USHORT TransportType : 4;
    } TransportMajorVersion;
    USHORT TransportMinorVersion;
    USHORT ReservedWord224[6];
    ULONG ExtendedNumberOfUserAddressableSectors[2];
    USHORT MinBlocksPerDownloadMicrocodeMode03;
    USHORT MaxBlocksPerDownloadMicrocodeMode03;
    USHORT ReservedWord236[19];
    USHORT Signature : 8;
    USHORT CheckSum : 8;
} IDENTIFY_DEVICE_DATA, *PIDENTIFY_DEVICE_DATA;
#pragma pack (pop, id_device_data)
#pragma pack (push, id_packet_data, 1)
typedef struct _IDENTIFY_PACKET_DATA {
    struct {
        USHORT PacketType : 2;
        USHORT IncompleteResponse : 1;
        USHORT Reserved1 : 2;
        USHORT DrqDelay : 2;
        USHORT RemovableMedia : 1;
        USHORT CommandPacketType : 5;
        USHORT Reserved2 : 1;
        USHORT DeviceType : 2;
    }GeneralConfiguration;
    USHORT ResevedWord1;
    USHORT UniqueConfiguration;
    USHORT ReservedWords3[7];
    UCHAR SerialNumber[20];
    USHORT ReservedWords20[3];
    UCHAR FirmwareRevision[8];
    UCHAR ModelNumber[40];
    USHORT ReservedWords47[2];
    struct {
        USHORT VendorSpecific : 8;
        USHORT DmaSupported : 1;
        USHORT LbaSupported : 1;
        USHORT IordyDisabled : 1;
        USHORT IordySupported : 1;
        USHORT Obsolete : 1;
        USHORT OverlapSupported : 1;
        USHORT QueuedCommandsSupported : 1;
        USHORT InterleavedDmaSupported : 1;
        USHORT DeviceSpecificStandbyTimerValueMin : 1;
        USHORT Obsolete1 : 1;
        USHORT ReservedWord50 : 12;
        USHORT WordValid : 2;
    } Capabilities;
    USHORT ObsoleteWords51[2];
    USHORT TranslationFieldsValid:3;
    USHORT Reserved3:13;
    USHORT ReservedWords54[8];
    struct {
        USHORT UDMA0Supported : 1;
        USHORT UDMA1Supported : 1;
        USHORT UDMA2Supported : 1;
        USHORT UDMA3Supported : 1;
        USHORT UDMA4Supported : 1;
        USHORT UDMA5Supported : 1;
        USHORT UDMA6Supported : 1;
        USHORT MDMA0Supported : 1;
        USHORT MDMA1Supported : 1;
        USHORT MDMA2Supported : 1;
        USHORT DMASupported : 1;
        USHORT ReservedWord62 : 4;
        USHORT DMADIRBitRequired : 1;
    } DMADIR;
    USHORT MultiWordDMASupport : 8;
    USHORT MultiWordDMAActive : 8;
    USHORT AdvancedPIOModes : 8;
    USHORT ReservedByte64 : 8;
    USHORT MinimumMWXferCycleTime;
    USHORT RecommendedMWXferCycleTime;
    USHORT MinimumPIOCycleTime;
    USHORT MinimumPIOCycleTimeIORDY;
    USHORT ReservedWords69[2];
    USHORT BusReleaseDelay;
    USHORT ServiceCommandDelay;
    USHORT ReservedWords73[2];
    USHORT QueueDepth : 5;
    USHORT ReservedWord75 : 11;
    struct {
        USHORT Reserved0 : 1;
        USHORT SataGen1 : 1;
        USHORT SataGen2 : 1;
        USHORT SataGen3 : 1;
        USHORT Reserved1 : 5;
        USHORT HIPM : 1;
        USHORT PhyEvents : 1;
        USHORT Reserved3 : 2;
        USHORT HostAutoPS : 1;
        USHORT DeviceAutoPS : 1;
        USHORT Reserved4 : 1;
        USHORT Reserved5 : 1;
        USHORT CurrentSpeed : 3;
        USHORT SlimlineDeviceAttention:1;
        USHORT HostEnvironmentDetect:1;
        USHORT Reserved : 10;
    }SerialAtaCapabilities;
    struct {
        USHORT Reserved0 : 1;
        USHORT Reserved1 : 2;
        USHORT DIPM : 1;
        USHORT Reserved2 : 1;
        USHORT AsynchronousNotification:1;
        USHORT SoftwareSettingsPreservation:1;
        USHORT Reserved3 : 9;
    }SerialAtaFeaturesSupported;
    struct {
        USHORT Reserved0 : 1;
        USHORT Reserved1 : 2;
        USHORT DIPM : 1;
        USHORT Reserved2 : 1;
        USHORT AsynchronousNotification:1;
        USHORT SoftwareSettingsPreservation:1;
        USHORT DeviceAutoPS : 1;
        USHORT Reserved3 : 8;
    }SerialAtaFeaturesEnabled;
    USHORT MajorRevision;
    USHORT MinorRevision;
    struct {
        USHORT SmartCommands : 1;
        USHORT SecurityMode : 1;
        USHORT RemovableMedia : 1;
        USHORT PowerManagement : 1;
        USHORT PacketCommands : 1;
        USHORT WriteCache : 1;
        USHORT LookAhead : 1;
        USHORT ReleaseInterrupt : 1;
        USHORT ServiceInterrupt : 1;
        USHORT DeviceReset : 1;
        USHORT HostProtectedArea : 1;
        USHORT Obsolete1 : 1;
        USHORT WriteBuffer : 1;
        USHORT ReadBuffer : 1;
        USHORT Nop : 1;
        USHORT Obsolete2 : 1;
        USHORT DownloadMicrocode : 1;
        USHORT Reserved1 : 2;
        USHORT AdvancedPm : 1;
        USHORT Msn : 1;
        USHORT PowerUpInStandby : 1;
        USHORT ManualPowerUp : 1;
        USHORT Reserved2 : 1;
        USHORT SetMax : 1;
        USHORT Reserved3 : 3;
        USHORT FlushCache : 1;
        USHORT Reserved4 : 1;
        USHORT WordValid : 2;
    } CommandSetSupport;
    struct {
        USHORT Reserved0 : 5;
        USHORT GpLogging : 1;
        USHORT Reserved1 : 2;
        USHORT WWN64Bit : 1;
        USHORT Reserved2 : 5;
        USHORT WordValid : 2;
    }CommandSetSupportExt;
    struct {
        USHORT SmartCommands : 1;
        USHORT SecurityMode : 1;
        USHORT RemovableMedia : 1;
        USHORT PowerManagement : 1;
        USHORT PacketCommands : 1;
        USHORT WriteCache : 1;
        USHORT LookAhead : 1;
        USHORT ReleaseInterrupt : 1;
        USHORT ServiceInterrupt : 1;
        USHORT DeviceReset : 1;
        USHORT HostProtectedArea : 1;
        USHORT Obsolete1 : 1;
        USHORT WriteBuffer : 1;
        USHORT ReadBuffer : 1;
        USHORT Nop : 1;
        USHORT Obsolete2 : 1;
        USHORT DownloadMicrocode : 1;
        USHORT Reserved1 : 2;
        USHORT AdvancedPm : 1;
        USHORT Msn : 1;
        USHORT PowerUpInStandby : 1;
        USHORT ManualPowerUp : 1;
        USHORT Reserved2 : 1;
        USHORT SetMax : 1;
        USHORT Reserved3 : 3;
        USHORT FlushCache : 1;
        USHORT Reserved : 3;
    } CommandSetActive;
    struct {
        USHORT Reserved0 : 5;
        USHORT GpLogging : 1;
        USHORT Reserved1 : 2;
        USHORT WWN64Bit : 1;
        USHORT Reserved2 : 5;
        USHORT WordValid : 2;
    }CommandSetActiveExt;
    USHORT UltraDMASupport : 8;
    USHORT UltraDMAActive : 8;
    USHORT TimeRequiredForNormalEraseModeSecurityEraseUnit;
    USHORT TimeRequiredForEnhancedEraseModeSecurityEraseUnit;
    USHORT CurrentAPMLevel;
    USHORT MasterPasswordID;
    USHORT HardwareResetResult;
    USHORT ReservedWords94[14];
    USHORT WorldWideName[4];
    USHORT ReservedWords112[13];
    USHORT AtapiZeroByteCount;
    USHORT ReservedWord126;
    USHORT MsnSupport : 2;
    USHORT ReservedWord127 : 14;
    USHORT SecurityStatus;
    USHORT VendorSpecific[31];
    USHORT ReservedWord160[16];
    USHORT ReservedWord176[46];
    struct {
        USHORT MajorVersion : 12;
        USHORT TransportType : 4;
    } TransportMajorVersion;
    USHORT TransportMinorVersion;
    USHORT ReservedWord224[31];
    USHORT Signature : 8;
    USHORT CheckSum : 8;
} IDENTIFY_PACKET_DATA, *PIDENTIFY_PACKET_DATA;
#pragma pack (pop, id_packet_data)
#pragma pack (push, regfis, 1)
typedef struct _REGISTER_FIS {
    UCHAR FisType;
    UCHAR Reserved0 : 7;
    UCHAR CmdReg : 1;
    UCHAR Command;
    UCHAR Features;
    UCHAR SectorNumber;
    UCHAR CylinderLow;
    UCHAR CylinderHigh;
    UCHAR DeviceHead;
    UCHAR SectorNumberExp;
    UCHAR CylinderLowExp;
    UCHAR CylinderHighExp;
    UCHAR FeaturesExp;
    UCHAR SectorCount;
    UCHAR SectorCountExp;
    UCHAR Reserved2;
    UCHAR Control;
    ULONG Reserved3;
}REGISTER_FIS, *PREGISTER_FIS;
#pragma pack (pop, regfis)
#pragma pack(push, ata_hybrid_info_fields, 1)
typedef union _ATA_HYBRID_INFO_FIELDS {
    struct {
        UCHAR HybridPriority : 4;
        UCHAR Reserved0 : 1;
        UCHAR InfoValid : 1;
        UCHAR Reserved1 : 2;
    };
    UCHAR AsUchar;
} ATA_HYBRID_INFO_FIELDS, *PATA_HYBRID_INFO_FIELDS;
#pragma pack (pop, ata_hybrid_info_fields)
#pragma pack(push, setp_device_data, 1)
typedef struct _DEVICE_SET_PASSWORD {
    struct {
        USHORT PasswordIdentifier:1;
        USHORT Reserved1 : 7;
        USHORT MasterPasswordCapability : 1;
        USHORT Reserved2 : 7;
    } ControlWord;
    USHORT Password[16];
    USHORT MasterPasswordIdentifier;
    USHORT Reserved[238];
} DEVICE_SET_PASSWORD, *PDEVICE_SET_PASSWORD;
#pragma pack (pop, setp_device_data)
#pragma pack(push, identify_device_data_log_page_header, 1)
typedef struct _IDENTIFY_DEVICE_DATA_LOG_PAGE_HEADER {
    ULONGLONG RevisionNumber : 16;
    ULONGLONG PageNumber : 8;
    ULONGLONG Reserved : 39;
    ULONGLONG Valid : 1;
} IDENTIFY_DEVICE_DATA_LOG_PAGE_HEADER, *PIDENTIFY_DEVICE_DATA_LOG_PAGE_HEADER;
#pragma pack (pop, identify_device_data_log_page_header)
#pragma pack(push, identify_device_data_log_page_supported_capabilities, 1)
typedef struct _IDENTIFY_DEVICE_DATA_LOG_PAGE_SUPPORTED_CAPABILITIES {
    IDENTIFY_DEVICE_DATA_LOG_PAGE_HEADER Header;
    struct {
        ULONGLONG WRV : 1;
        ULONGLONG WriteUncorrectable : 1;
        ULONGLONG GplDma : 1;
        ULONGLONG DmMode3 : 1;
        ULONGLONG FreeFall : 1;
        ULONGLONG SenseData : 1;
        ULONGLONG EPC : 1;
        ULONGLONG SmartErrorLogging : 1;
        ULONGLONG SmartSelfTest : 1;
        ULONGLONG Reserved9 : 1;
        ULONGLONG Streaming : 1;
        ULONGLONG GPL : 1;
        ULONGLONG WriteFuaExt : 1;
        ULONGLONG Unload : 1;
        ULONGLONG DownloadMicrocode : 1;
        ULONGLONG Reserved15ForCFA : 1;
        ULONGLONG APM : 1;
        ULONGLONG PUIS : 1;
        ULONGLONG SpinUp : 1;
        ULONGLONG Reserved19 : 1;
        ULONGLONG Cmd48Bit : 1;
        ULONGLONG Reserved21 : 1;
        ULONGLONG FlushCacheExt : 1;
        ULONGLONG Smart : 1;
        ULONGLONG VolatileWriteCache : 1;
        ULONGLONG ReadLookahead : 1;
        ULONGLONG Reserved26 : 1;
        ULONGLONG WriteBuffer : 1;
        ULONGLONG ReadBuffer : 1;
        ULONGLONG NOP : 1;
        ULONGLONG Reserved30 : 1;
        ULONGLONG RZAT : 1;
        ULONGLONG Cmd28bit : 1;
        ULONGLONG DownloadMicrocodeDma : 1;
        ULONGLONG Reserved34 : 1;
        ULONGLONG WriteBufferDma : 1;
        ULONGLONG ReadBufferDma : 1;
        ULONGLONG Reserved37 : 1;
        ULONGLONG LpsMisalignmentReporting : 1;
        ULONGLONG DRAT : 1;
        ULONGLONG Reserved40ForCFA : 1;
        ULONGLONG AmaxAddr : 1;
        ULONGLONG SetEpcPowerSource : 1;
        ULONGLONG LowPowerStandby : 1;
        ULONGLONG DSN : 1;
        ULONGLONG RequestSenseDeviceFault: 1;
        ULONGLONG Reserved : 17;
        ULONGLONG Valid : 1;
    } SupportedCapabilities;
    struct {
        ULONGLONG DmMinTransferSize : 16;
        ULONGLONG DmMaxTransferSize : 16;
        ULONGLONG DmOffsetsImmediateSupported : 1;
        ULONGLONG DmImmediateSupported : 1;
        ULONGLONG DmOffsetsDeferredSupported : 1;
        ULONGLONG Reserved : 28;
        ULONGLONG Valid : 1;
    } DownloadMicrocodeCapabilities;
    struct {
        ULONGLONG Rate : 16;
        ULONGLONG Reserved : 47;
        ULONGLONG Valid : 1;
    } NominalMediaRotationRate;
    struct {
        ULONGLONG Factor : 4;
        ULONGLONG Reserved : 59;
        ULONGLONG Valid : 1;
    } NominalFormFactor;
    struct {
        ULONGLONG Count : 32;
        ULONGLONG Reserved : 31;
        ULONGLONG Valid : 1;
    } WRVSectorCountMode3;
    struct {
        ULONGLONG Count : 32;
        ULONGLONG Reserved : 31;
        ULONGLONG Valid : 1;
    } WRVSectorCountMode2;
    struct {
        ULONGLONG Name;
        ULONGLONG Reserved : 63;
        ULONGLONG Valid : 1;
    } WorldWideName;
    struct {
        ULONGLONG TrimSupported : 1;
        ULONGLONG Reserved : 62;
        ULONGLONG Valid : 1;
    } DataSetManagement;
    struct {
        ULONGLONG UtilizationA : 32;
        ULONGLONG UtilizationB : 32;
        ULONGLONG Reserved0 : 32;
        ULONGLONG UtilizationInterval : 8;
        ULONGLONG UtilizationUnit : 8;
        ULONGLONG UtilizationType : 8;
        ULONGLONG Reserved1 : 7;
        ULONGLONG Valid : 1;
    } UtilizationPerUnitTime;
    struct {
        ULONGLONG DateTimeRateBasisSupported : 1;
        ULONGLONG Reserved0 : 3;
        ULONGLONG PowerOnHoursRateBasisSupported : 1;
        ULONGLONG Reserved1 : 3;
        ULONGLONG SincePowerOnRateBasisSupported : 1;
        ULONGLONG Reserved2 : 14;
        ULONGLONG SettingRateBasisSupported : 1;
        ULONGLONG Reserved3 : 39;
        ULONGLONG Valid : 1;
    } UtilizationUsageRateSupport;
    struct {
        ULONGLONG Zoned : 2;
        ULONGLONG Reserved : 61;
        ULONGLONG Valid : 1;
    } ZonedCapabilities;
    struct {
        ULONGLONG ReportZonesExtSupported : 1;
        ULONGLONG NonDataOpenZoneExtSupported : 1;
        ULONGLONG NonDataCloseZoneExtSupported : 1;
        ULONGLONG NonDataFinishZoneExtSupported : 1;
        ULONGLONG NonDataResetWritePointersExtSupported : 1;
        ULONGLONG Reserved : 58;
        ULONGLONG Valid : 1;
    } SupportedZacCapabilities;
    UCHAR Reserved[392];
} IDENTIFY_DEVICE_DATA_LOG_PAGE_SUPPORTED_CAPABILITIES, *PIDENTIFY_DEVICE_DATA_LOG_PAGE_SUPPORTED_CAPABILITIES;
#pragma pack (pop, identify_device_data_log_page_supported_capabilities)
#pragma pack(push, identify_device_data_log_page_zoned_device_information, 1)
typedef struct _IDENTIFY_DEVICE_DATA_LOG_PAGE_ZONED_DEVICE_INFO {
    IDENTIFY_DEVICE_DATA_LOG_PAGE_HEADER Header;
    struct {
        ULONGLONG URSWRZ : 1;
        ULONGLONG Reserved : 62;
        ULONGLONG Valid : 1;
    } ZonedDeviceCapabilities;
    struct {
        ULONGLONG Reserved : 63;
        ULONGLONG Valid : 1;
    } ZonedDeviceSettings;
    struct {
        ULONGLONG Number : 32;
        ULONGLONG Reserved : 31;
        ULONGLONG Valid : 1;
    } OptimalNumberOfOpenSequentialWritePreferredZones;
    struct {
        ULONGLONG Number : 32;
        ULONGLONG Reserved : 31;
        ULONGLONG Valid : 1;
    } OptimalNumberOfNonSequentiallyWrittenSequentialWritePreferredZones;
    struct {
        ULONGLONG Number : 32;
        ULONGLONG Reserved : 31;
        ULONGLONG Valid : 1;
    } MaxNumberOfOpenSequentialWriteRequiredZones;
    struct {
        ULONGLONG ZacMinorVersion : 16;
        ULONGLONG Reserved0 : 47;
        ULONGLONG Valid : 1;
    } Version;
    UCHAR Reserved[456];
} IDENTIFY_DEVICE_DATA_LOG_PAGE_ZONED_DEVICE_INFO, *PIDENTIFY_DEVICE_DATA_LOG_PAGE_ZONED_DEVICE_INFO;
#pragma pack (pop, identify_device_data_log_page_zoned_device_information)
#pragma pack(push, gplog_current_device_data, 1)
typedef struct _CURRENT_DEVICE_INTERNAL_STATUS_LOG {
    UCHAR LogAddress;
    UCHAR Reserved0[3];
    ULONG OrganizationID;
    USHORT Area1LastLogPage;
    USHORT Area2LastLogPage;
    USHORT Area3LastLogPage;
    UCHAR Reserved2[368];
    UCHAR SavedDataAvailable;
    UCHAR SavedDataGenerationNumber;
    UCHAR ReasonIdentifier[128];
} CURRENT_DEVICE_INTERNAL_STATUS_LOG, *PCURRENT_DEVICE_INTERNAL_STATUS_LOG;
#pragma pack (pop, gplog_current_device_data)
#pragma pack(push, gplog_saved_device_data, 1)
typedef struct _SAVED_DEVICE_INTERNAL_STATUS_LOG {
    UCHAR LogAddress;
    UCHAR Reserved0[3];
    ULONG OrganizationID;
    USHORT Area1LastLogPage;
    USHORT Area2LastLogPage;
    USHORT Area3LastLogPage;
    UCHAR Reserved2[368];
    UCHAR SavedDataAvailable;
    UCHAR GenerationNumber;
    UCHAR ReasonIdentifier[128];
} SAVED_DEVICE_INTERNAL_STATUS_LOG, *PSAVED_DEVICE_INTERNAL_STATUS_LOG;
#pragma pack (pop, gplog_saved_device_data)
#pragma pack(push, device_statistics_log_page_header, 1)
typedef struct _DEVICE_STATISTICS_LOG_PAGE_HEADER {
    ULONGLONG RevisionNumber : 16;
    ULONGLONG PageNumber : 8;
    ULONGLONG Reserved : 40;
} DEVICE_STATISTICS_LOG_PAGE_HEADER, *PDEVICE_STATISTICS_LOG_PAGE_HEADER;
#pragma pack (pop, device_statistics_log_page_header)
    ULONGLONG ReservedFlags : 3; \
    ULONGLONG MonitoredConditionMet : 1; \
    ULONGLONG StatisticsSupportsDsn : 1; \
    ULONGLONG Normalized : 1; \
    ULONGLONG ValidValue : 1; \
    ULONGLONG Supported : 1
#pragma pack(push, gplog_supported_device_statistics_log, 1)
typedef struct _GP_LOG_SUPPORTED_DEVICE_STATISTICS {
    DEVICE_STATISTICS_LOG_PAGE_HEADER Header;
    UCHAR NumberOfEntries;
    UCHAR LogPageNumbers[503];
} GP_LOG_SUPPORTED_DEVICE_STATISTICS, *PGP_LOG_SUPPORTED_DEVICE_STATISTICS;
#pragma pack(pop, gplog_supported_device_statistics_log)
C_ASSERT(sizeof(GP_LOG_SUPPORTED_DEVICE_STATISTICS) == IDE_GP_LOG_SECTOR_SIZE);
#pragma pack(push, gplog_general_statistics_log, 1)
typedef struct _GP_LOG_GENERAL_STATISTICS {
    DEVICE_STATISTICS_LOG_PAGE_HEADER Header;
    struct {
        ULONGLONG Count : 32;
        ULONGLONG Reserved : 24;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } LifeTimePoweronResets;
    struct {
        ULONGLONG Count : 32;
        ULONGLONG Reserved : 24;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } PoweronHours;
    struct {
        ULONGLONG Count : 48;
        ULONGLONG Reserved : 8;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } LogicalSectorsWritten;
    struct {
        ULONGLONG Count : 48;
        ULONGLONG Reserved : 8;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } WriteCommandCount;
    struct {
        ULONGLONG Count : 48;
        ULONGLONG Reserved : 8;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } LogicalSectorsRead;
    struct {
        ULONGLONG Count : 48;
        ULONGLONG Reserved : 8;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } ReadCommandCount;
    struct {
        ULONGLONG TimeStamp : 48;
        ULONGLONG Reserved : 8;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } DateAndTime;
    struct {
        ULONGLONG Count : 32;
        ULONGLONG Reserved : 24;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } PendingErrorCount;
    struct {
        ULONGLONG Value : 16;
        ULONGLONG Reserved : 40;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } WorkloadUtilizaton;
    struct {
        ULONGLONG Value : 8;
        ULONGLONG Reserved0 : 28;
        ULONGLONG RateBasis : 4;
        ULONGLONG RateValidity : 8;
        ULONGLONG Reserved1 : 8;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } UtilizationUsageRate;
    UCHAR Reserved[424];
} GP_LOG_GENERAL_STATISTICS, *PGP_LOG_GENERAL_STATISTICS;
#pragma pack(pop, gplog_general_statistics_log)
C_ASSERT(sizeof(GP_LOG_GENERAL_STATISTICS) == IDE_GP_LOG_SECTOR_SIZE);
#pragma pack(push, gplog_free_fall_statistics_log, 1)
typedef struct _GP_LOG_FREE_FALL_STATISTICS {
    DEVICE_STATISTICS_LOG_PAGE_HEADER Header;
    struct {
        ULONGLONG Count : 32;
        ULONGLONG Reserved : 24;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } NumberofFreeFallEventsDetected;
    struct {
        ULONGLONG Count : 32;
        ULONGLONG Reserved : 24;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } OverlimitShockEvents;
    UCHAR Reserved[488];
} GP_LOG_FREE_FALL_STATISTICS, *PGP_LOG_FREE_FALL_STATISTICS;
#pragma pack(pop, gplog_free_fall_statistics_log)
C_ASSERT(sizeof(GP_LOG_FREE_FALL_STATISTICS) == IDE_GP_LOG_SECTOR_SIZE);
#pragma pack(push, gplog_rotating_media_statistics_log, 1)
typedef struct _GP_LOG_ROTATING_MEDIA_STATISTICS {
    DEVICE_STATISTICS_LOG_PAGE_HEADER Header;
    struct {
        ULONGLONG Count : 32;
        ULONGLONG Reserved : 24;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } SpindleMotorPoweronHours;
    struct {
        ULONGLONG Count : 32;
        ULONGLONG Reserved : 24;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } HeadFlyingHours;
    struct {
        ULONGLONG Count : 32;
        ULONGLONG Reserved : 24;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } HeadLoadEvents;
    struct {
        ULONGLONG Count : 32;
        ULONGLONG Reserved : 24;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } NumberOfReallocatedLogicalSectors;
    struct {
        ULONGLONG Count : 32;
        ULONGLONG Reserved : 24;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } ReadRecoveryAttempts;
    struct {
        ULONGLONG Count : 32;
        ULONGLONG Reserved : 24;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } NumberOfMechanicalStartFailures;
    struct {
        ULONGLONG Count : 32;
        ULONGLONG Reserved : 24;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } NumberOfReallocationCandidateLogicalSectors;
    struct {
        ULONGLONG Count : 32;
        ULONGLONG Reserved : 24;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } NumberOfHighPriorityUnloadEvents;
    UCHAR Reserved[440];
} GP_LOG_ROTATING_MEDIA_STATISTICS, *PGP_LOG_ROTATING_MEDIA_STATISTICS;
#pragma pack(pop, gplog_rotating_media_statistics_log)
C_ASSERT(sizeof(GP_LOG_ROTATING_MEDIA_STATISTICS) == IDE_GP_LOG_SECTOR_SIZE);
#pragma pack(push, gplog_general_error_statistics_log, 1)
typedef struct _GP_LOG_GENERAL_ERROR_STATISTICS {
    DEVICE_STATISTICS_LOG_PAGE_HEADER Header;
    struct {
        ULONGLONG Count : 32;
        ULONGLONG Reserved : 24;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } NumberOfReportedUncorrectableErrors;
    struct {
        ULONGLONG Count : 32;
        ULONGLONG Reserved : 24;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } NumberOfResetsBetweenCommandAcceptanceAndCommandCompletion;
    UCHAR Reserved[488];
} GP_LOG_GENERAL_ERROR_STATISTICS, *PGP_LOG_GENERAL_ERROR_STATISTICS;
#pragma pack(pop, gplog_general_error_statistics_log)
C_ASSERT(sizeof(GP_LOG_GENERAL_ERROR_STATISTICS) == IDE_GP_LOG_SECTOR_SIZE);
#pragma pack(push, gplog_temperature_statistics_log, 1)
typedef struct _GP_LOG_TEMPERATURE_STATISTICS {
    DEVICE_STATISTICS_LOG_PAGE_HEADER Header;
    struct {
        ULONGLONG Value : 8;
        ULONGLONG Reserved : 48;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } CurrentTemperature;
    struct {
        ULONGLONG Value : 8;
        ULONGLONG Reserved : 48;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } AverageShortTermTemperature;
    struct {
        ULONGLONG Value : 8;
        ULONGLONG Reserved : 48;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } AverageLongTermTemperature;
    struct {
        ULONGLONG Value : 8;
        ULONGLONG Reserved : 48;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } HighestTemperature;
    struct {
        ULONGLONG Value : 8;
        ULONGLONG Reserved : 48;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } LowestTemperature;
    struct {
        ULONGLONG Value : 8;
        ULONGLONG Reserved : 48;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } HighestAverageShortTermTemperature;
    struct {
        ULONGLONG Value : 8;
        ULONGLONG Reserved : 48;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } LowestAverageShortTermTemperature;
    struct {
        ULONGLONG Value : 8;
        ULONGLONG Reserved : 48;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } HighstAverageLongTermTemperature;
    struct {
        ULONGLONG Value : 8;
        ULONGLONG Reserved : 48;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } LowestAverageLongTermTemperature;
    struct {
        ULONGLONG Value : 8;
        ULONGLONG Reserved : 48;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } TimeInOverTemperature;
    struct {
        ULONGLONG Value : 8;
        ULONGLONG Reserved : 48;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } SpecifiedMaximumOperatingTemperature;
    struct {
        ULONGLONG Value : 8;
        ULONGLONG Reserved : 48;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } TimeInUnderTemperature;
    struct {
        ULONGLONG Value : 8;
        ULONGLONG Reserved : 48;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } SpecifiedMinimumOperatingTemperature;
    UCHAR Reserved[400];
} GP_LOG_TEMPERATURE_STATISTICS, *PGP_LOG_TEMPERATURE_STATISTICS;
#pragma pack(pop, gplog_temperature_statistics_log)
C_ASSERT(sizeof(GP_LOG_TEMPERATURE_STATISTICS) == IDE_GP_LOG_SECTOR_SIZE);
#pragma pack(push, gplog_transport_statistics_log, 1)
typedef struct _GP_LOG_TRANSPORT_STATISTICS {
    DEVICE_STATISTICS_LOG_PAGE_HEADER Header;
    struct {
        ULONGLONG Count : 8;
        ULONGLONG Reserved : 48;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } NumberOfHardwareResets;
    struct {
        ULONGLONG Count : 32;
        ULONGLONG Reserved : 24;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } NumberOfAsrEvents;
    struct {
        ULONGLONG Count : 32;
        ULONGLONG Reserved : 24;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } NumberOfInterfaceCrcErrors;
    UCHAR Reserved[480];
} GP_LOG_TRANSPORT_STATISTICS, *PGP_LOG_TRANSPORT_STATISTICS;
#pragma pack(pop, gplog_transport_statistics_log)
C_ASSERT(sizeof(GP_LOG_TRANSPORT_STATISTICS) == IDE_GP_LOG_SECTOR_SIZE);
#pragma pack(push, gplog_solid_state_device_statistics_log, 1)
typedef struct _GP_LOG_SOLID_STATE_DEVICE_STATISTICS {
    DEVICE_STATISTICS_LOG_PAGE_HEADER Header;
    struct {
        ULONGLONG Value : 8;
        ULONGLONG Reserved : 48;
        GP_LOG_DEVICE_STATISTICS_FLAGS;
    } PercentageUsedEnduranceIndicator;
    UCHAR Reserved[496];
} GP_LOG_SOLID_STATE_DEVICE_STATISTICS, *PGP_LOG_SOLID_STATE_DEVICE_STATISTICS;
#pragma pack(pop, gplog_solid_state_device_statistics_log)
C_ASSERT(sizeof(GP_LOG_SOLID_STATE_DEVICE_STATISTICS) == IDE_GP_LOG_SECTOR_SIZE);
#pragma pack(push, ncq_error_log, 1)
typedef struct _GP_LOG_NCQ_COMMAND_ERROR {
    UCHAR NcqTag : 5;
    UCHAR Reserved0 : 1;
    UCHAR UNL : 1;
    UCHAR NonQueuedCmd : 1;
    UCHAR Reserved1;
    UCHAR Status;
    UCHAR Error;
    UCHAR LBA7_0;
    UCHAR LBA15_8;
    UCHAR LBA23_16;
    UCHAR Device;
    UCHAR LBA31_24;
    UCHAR LBA39_32;
    UCHAR LBA47_40;
    UCHAR Reserved2;
    UCHAR Count7_0;
    UCHAR Count15_8;
    UCHAR SenseKey;
    UCHAR ASC;
    UCHAR ASCQ;
    UCHAR Reserved3[239];
    UCHAR Vendor[255];
    UCHAR Checksum;
} GP_LOG_NCQ_COMMAND_ERROR, *PGP_LOG_NCQ_COMMAND_ERROR;
#pragma pack (pop, ncq_error_log)
#pragma pack(push, ncq_non_data_log, 1)
typedef struct _GP_LOG_NCQ_NON_DATA {
    struct {
        ULONG AbortNcq : 1;
        ULONG AbortAll : 1;
        ULONG AbortStreaming : 1;
        ULONG AbortNonStreaming : 1;
        ULONG AbortSelectedTTag : 1;
        ULONG Reserved : 27;
    } SubCmd0;
    struct {
        ULONG DeadlineHandling : 1;
        ULONG WriteDataNotContinue : 1;
        ULONG ReadDataNotContinue : 1;
        ULONG Reserved : 29;
    } SubCmd1;
    struct {
        ULONG HybridDemoteBySize : 1;
        ULONG Reserved : 31;
    } SubCmd2;
    struct {
        ULONG HybridChangeByLbaRange : 1;
        ULONG Reserved : 31;
    } SubCmd3;
    struct {
        ULONG HybridControl : 1;
        ULONG Reserved : 31;
    } SubCmd4;
    struct {
        ULONG Reserved : 32;
    } SubCmd5;
    struct {
        ULONG Reserved : 32;
    } SubCmd6;
    struct {
        ULONG Reserved : 32;
    } SubCmd7;
    struct {
        ULONG Reserved : 32;
    } SubCmd8;
    struct {
        ULONG Reserved : 32;
    } SubCmd9;
    struct {
        ULONG Reserved : 32;
    } SubCmdA;
    struct {
        ULONG Reserved : 32;
    } SubCmdB;
    struct {
        ULONG Reserved : 32;
    } SubCmdC;
    struct {
        ULONG Reserved : 32;
    } SubCmdD;
    struct {
        ULONG Reserved : 32;
    } SubCmdE;
    struct {
        ULONG Reserved : 32;
    } SubCmdF;
    ULONG Reserved[112];
} GP_LOG_NCQ_NON_DATA, *PGP_LOG_NCQ_NON_DATA;
#pragma pack (pop, ncq_non_data_log)
#pragma pack(push, ncq_send_receive_log, 1)
typedef struct _GP_LOG_NCQ_SEND_RECEIVE {
    struct {
        ULONG DataSetManagement : 1;
        ULONG HybridEvict : 1;
        ULONG Reserved : 30;
    } SubCmd;
    struct {
        ULONG Trim : 1;
        ULONG Reserved : 31;
    } DataSetManagement;
    ULONG Reserved[126];
} GP_LOG_NCQ_SEND_RECEIVE, *PGP_LOG_NCQ_SEND_RECEIVE;
#pragma pack (pop, ncq_send_receive_log)
#pragma pack(push, hybrid_info_header, 1)
typedef struct _GP_LOG_HYBRID_INFORMATION_HEADER {
    USHORT HybridInfoDescrCount : 4;
    USHORT Reserved0 : 12;
    UCHAR Enabled;
    UCHAR HybridHealth;
    UCHAR DirtyLowThreshold;
    UCHAR DirtyHighThreshold;
    UCHAR OptimalWriteGranularity;
    UCHAR MaximumHybridPriorityLevel : 4;
    UCHAR Reserved1 : 4;
    UCHAR PowerCondidtion;
    UCHAR CachingMediumEnabled ;
    struct {
        UCHAR MaximumPriorityBehavior : 1;
        UCHAR SupportCacheBehavior : 1;
        UCHAR Reserved : 6;
    } SupportedOptions;
    UCHAR Reserved2;
    ULONG TimeSinceEnabled;
    ULONGLONG NVMSize;
    ULONGLONG EnableCount;
    USHORT MaximumEvictionCommands : 5;
    USHORT Reserved3 : 11;
    USHORT MaximumEvictionDataBlocks;
    UCHAR Reserved[28];
} GP_LOG_HYBRID_INFORMATION_HEADER, *PGP_LOG_HYBRID_INFORMATION_HEADER;
#pragma pack (pop, hybrid_info_header)
#pragma pack(push, hybrid_info_descriptor, 1)
typedef struct _GP_LOG_HYBRID_INFORMATION_DESCRIPTOR {
    UCHAR HybridPriority;
    UCHAR ConsumedNVMSizeFraction;
    UCHAR ConsumedMappingResourcesFraction;
    UCHAR ConsumedNVMSizeForDirtyDataFraction;
    UCHAR ConsumedMappingResourcesForDirtyDataFraction;
    UCHAR Reserved[11];
} GP_LOG_HYBRID_INFORMATION_DESCRIPTOR, *PGP_LOG_HYBRID_INFORMATION_DESCRIPTOR;
#pragma pack (pop, hybrid_info_descriptor)
#pragma pack(push, hybrid_info_log, 1)
typedef struct _GP_LOG_HYBRID_INFORMATION {
    GP_LOG_HYBRID_INFORMATION_HEADER Header;
    GP_LOG_HYBRID_INFORMATION_DESCRIPTOR Descriptor[0];
} GP_LOG_HYBRID_INFORMATION, *PGP_LOG_HYBRID_INFORMATION;
#pragma pack (pop, hybrid_info_log)
#pragma pack(push, report_zones_ext_data, 1)
typedef struct _REPORT_ZONES_EXT_DATA {
    ULONG ZoneListLength;
    UCHAR SAME : 4;
    UCHAR Reserved0 : 4;
    UCHAR Reserved1[3];
    ULONGLONG MaxLBA : 48;
    ULONGLONG Reserved2 : 16;
    UCHAR Reserved3[48];
} REPORT_ZONES_EXT_DATA, *PREPORT_ZONES_EXT_DATA;
#pragma pack(pop, report_zones_ext_data)
#pragma pack(push, ata_zone_descriptor, 1)
typedef struct _ATA_ZONE_DESCRIPTOR {
    UCHAR ZoneType : 4;
    UCHAR Reserved0 : 4;
    UCHAR Reset : 1;
    UCHAR NonSeq : 1;
    UCHAR Reserved1 : 2;
    UCHAR ZoneCondition : 4;
    UCHAR Reserved2[6];
    ULONGLONG ZoneLength : 48;
    ULONGLONG Reserved3 : 16;
    ULONGLONG ZoneStartLBA : 48;
    ULONGLONG Reserved4 : 16;
    ULONGLONG WritePointerLBA : 48;
    ULONGLONG Reserved5 : 16;
    UCHAR Reserved6[32];
} ATA_ZONE_DESCRIPTOR, *PATA_ZONE_DESCRIPTOR;
#pragma pack(pop, ata_zone_descriptor)
#pragma pack(push, ATA_PHYSICAL_ELEMENT_STATUS_DESCRIPTOR, 1)
typedef struct _ATA_PHYSICAL_ELEMENT_STATUS_DESCRIPTOR {
    UCHAR Reserved1[4];
    ULONG ElementIdentifier;
    UCHAR Reserved2[6];
    UCHAR PhysicalElementType;
    UCHAR PhysicalElementHealth;
    ULONGLONG AssociatedCapacity;
    UCHAR Reserved3[8];
} ATA_PHYSICAL_ELEMENT_STATUS_DESCRIPTOR, *PATA_PHYSICAL_ELEMENT_STATUS_DESCRIPTOR;
#pragma pack(pop, ATA_PHYSICAL_ELEMENT_STATUS_DESCRIPTOR)
#pragma pack(push, ATA_GET_PHYSICAL_ELEMENT_STATUS_PARAMETER_DATA, 1)
typedef struct _ATA_GET_PHYSICAL_ELEMENT_STATUS_PARAMETER_DATA {
    ULONG NumberOfDescriptors;
    ULONG NumberOfDescriptorsReturned;
    ULONG ElementIdentifierBeingDepoped;
    UCHAR Reserved[20];
    ATA_PHYSICAL_ELEMENT_STATUS_DESCRIPTOR Descriptors[ANYSIZE_ARRAY];
} ATA_GET_PHYSICAL_ELEMENT_STATUS_PARAMETER_DATA, *PATA_GET_PHYSICAL_ELEMENT_STATUS_PARAMETER_DATA;
#pragma pack(pop, ATA_GET_PHYSICAL_ELEMENT_STATUS_PARAMETER_DATA)
#pragma warning(default:4214)
#pragma warning(default:4200)
#pragma warning(default:4201)
