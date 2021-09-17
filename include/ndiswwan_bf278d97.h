typedef UCHAR NDIS_WWAN_MAC_ADDRESS[6];
typedef struct _NDIS_WWAN_DRIVER_CAPS {
    NDIS_OBJECT_HEADER Header;
    WWAN_DRIVER_CAPS DriverCaps;
} NDIS_WWAN_DRIVER_CAPS, *PNDIS_WWAN_DRIVER_CAPS;
typedef struct _NDIS_WWAN_SERVICE_ACTIVATION {
    NDIS_OBJECT_HEADER Header;
    WWAN_SERVICE_ACTIVATION ServiceActivation;
} NDIS_WWAN_SERVICE_ACTIVATION, *PNDIS_WWAN_SERVICE_ACTIVATION;
typedef struct _NDIS_WWAN_SET_RADIO_STATE {
    NDIS_OBJECT_HEADER Header;
    WWAN_RADIO RadioAction;
} NDIS_WWAN_SET_RADIO_STATE, *PNDIS_WWAN_SET_RADIO_STATE;
typedef struct _NDIS_WWAN_SET_PIN {
    NDIS_OBJECT_HEADER Header;
    WWAN_PIN_ACTION PinAction;
} NDIS_WWAN_SET_PIN, *PNDIS_WWAN_SET_PIN;
typedef struct _NDIS_WWAN_SET_PIN_EX {
    NDIS_OBJECT_HEADER Header;
    WWAN_PIN_ACTION PinAction;
} NDIS_WWAN_SET_PIN_EX, *PNDIS_WWAN_SET_PIN_EX;
typedef struct _NDIS_WWAN_SET_PREFERRED_PROVIDERS {
    NDIS_OBJECT_HEADER Header;
    WWAN_LIST_HEADER PreferredListHeader;
} NDIS_WWAN_SET_PREFERRED_PROVIDERS, *PNDIS_WWAN_SET_PREFERRED_PROVIDERS;
typedef struct _NDIS_WWAN_SET_REGISTER_STATE {
    NDIS_OBJECT_HEADER Header;
    WWAN_SET_REGISTER_STATE SetRegisterState;
} NDIS_WWAN_SET_REGISTER_STATE, *PNDIS_WWAN_SET_REGISTER_STATE;
typedef struct _NDIS_WWAN_SET_REGISTER_STATE_EX {
    NDIS_OBJECT_HEADER Header;
    WWAN_SET_REGISTER_STATE_EX SetRegisterState;
} NDIS_WWAN_SET_REGISTER_STATE_EX, *PNDIS_WWAN_SET_REGISTER_STATE_EX;
typedef struct _NDIS_WWAN_SET_SIGNAL_INDICATION {
    NDIS_OBJECT_HEADER Header;
    WWAN_SET_SIGNAL_INDICATION SignalIndication;
} NDIS_WWAN_SET_SIGNAL_INDICATION, *PNDIS_WWAN_SET_SIGNAL_INDICATION;
typedef struct _NDIS_WWAN_SET_SIGNAL_INDICATION_EX {
    NDIS_OBJECT_HEADER Header;
    WWAN_SET_SIGNAL_INDICATION_EX SignalIndication;
} NDIS_WWAN_SET_SIGNAL_INDICATION_EX, *PNDIS_WWAN_SET_SIGNAL_INDICATION_EX;
typedef struct _NDIS_WWAN_SET_PACKET_SERVICE {
    NDIS_OBJECT_HEADER Header;
    WWAN_PACKET_SERVICE_ACTION PacketServiceAction;
} NDIS_WWAN_SET_PACKET_SERVICE, *PNDIS_WWAN_SET_PACKET_SERVICE;
typedef struct _NDIS_WWAN_SET_PROVISIONED_CONTEXT {
    NDIS_OBJECT_HEADER Header;
    WWAN_SET_CONTEXT ProvisionedContext;
} NDIS_WWAN_SET_PROVISIONED_CONTEXT, *PNDIS_WWAN_SET_PROVISIONED_CONTEXT;
typedef struct _NDIS_WWAN_SET_PROVISIONED_CONTEXT_V2 {
    NDIS_OBJECT_HEADER Header;
    WWAN_SET_CONTEXT_V2 ProvisionedContext;
} NDIS_WWAN_SET_PROVISIONED_CONTEXT_V2, *PNDIS_WWAN_SET_PROVISIONED_CONTEXT_V2;
typedef struct _NDIS_WWAN_SET_CONTEXT_STATE {
    NDIS_OBJECT_HEADER Header;
    WWAN_SET_CONTEXT_STATE SetContextState;
} NDIS_WWAN_SET_CONTEXT_STATE, *PNDIS_WWAN_SET_CONTEXT_STATE;
    ( RTL_SIZEOF_THROUGH_FIELD(WWAN_SET_CONTEXT_STATE,AuthType) )
    ( FIELD_OFFSET(NDIS_WWAN_SET_CONTEXT_STATE,SetContextState) + \
      RTL_SIZEOF_THROUGH_FIELD(WWAN_SET_CONTEXT_STATE,AuthType) )
    ( RTL_SIZEOF_THROUGH_FIELD(WWAN_SET_CONTEXT_STATE,IPType) )
    ( FIELD_OFFSET(NDIS_WWAN_SET_CONTEXT_STATE,SetContextState) + \
      RTL_SIZEOF_THROUGH_FIELD(WWAN_SET_CONTEXT_STATE,IPType) )
    ( RTL_SIZEOF_THROUGH_FIELD(WWAN_SET_CONTEXT_STATE,ConnectionMediaSource) )
    ( FIELD_OFFSET(NDIS_WWAN_SET_CONTEXT_STATE,SetContextState) + \
      RTL_SIZEOF_THROUGH_FIELD(WWAN_SET_CONTEXT_STATE,ConnectionMediaSource) )
typedef struct _NDIS_WWAN_SET_SMS_CONFIGURATION {
    NDIS_OBJECT_HEADER Header;
    WWAN_SET_SMS_CONFIGURATION SetSmsConfiguration;
} NDIS_WWAN_SET_SMS_CONFIGURATION, *PNDIS_WWAN_SET_SMS_CONFIGURATION;
typedef struct _NDIS_WWAN_SMS_READ {
    NDIS_OBJECT_HEADER Header;
    WWAN_SMS_READ SmsRead;
} NDIS_WWAN_SMS_READ, *PNDIS_WWAN_SMS_READ;
typedef struct _NDIS_WWAN_SMS_SEND {
    NDIS_OBJECT_HEADER Header;
    WWAN_SMS_SEND SmsSend;
} NDIS_WWAN_SMS_SEND, *PNDIS_WWAN_SMS_SEND;
typedef struct _NDIS_WWAN_SMS_DELETE {
    NDIS_OBJECT_HEADER Header;
    WWAN_SMS_FILTER SmsFilter;
} NDIS_WWAN_SMS_DELETE, *PNDIS_WWAN_SMS_DELETE;
typedef struct _NDIS_WWAN_SET_HOME_PROVIDER {
    NDIS_OBJECT_HEADER Header;
    WWAN_PROVIDER2 HomeProvider;
} NDIS_WWAN_SET_HOME_PROVIDER, *PNDIS_WWAN_SET_HOME_PROVIDER;
typedef struct _NDIS_WWAN_SET_PREFERRED_MULTICARRIER_PROVIDERS {
    NDIS_OBJECT_HEADER Header;
    WWAN_LIST_HEADER PreferredListHeader;
} NDIS_WWAN_SET_PREFERRED_MULTICARRIER_PROVIDERS, *PNDIS_WWAN_SET_PREFERRED_MULTICARRIER_PROVIDERS;
typedef struct _NDIS_WWAN_GET_VISIBLE_PROVIDERS {
    NDIS_OBJECT_HEADER Header;
    WWAN_GET_VISIBLE_PROVIDERS VisibleProviders;
} NDIS_WWAN_GET_VISIBLE_PROVIDERS, *PNDIS_WWAN_GET_VISIBLE_PROVIDERS;
typedef struct _NDIS_WWAN_USSD_REQUEST {
  NDIS_OBJECT_HEADER Header;
  WWAN_USSD_REQUEST UssdRequest;
} NDIS_WWAN_USSD_REQUEST, *PNDIS_WWAN_USSD_REQUEST;
typedef struct _NDIS_WWAN_DEVICE_SERVICE_COMMAND {
  NDIS_OBJECT_HEADER Header;
  WWAN_DEVICE_SERVICE_COMMAND Command;
} NDIS_WWAN_DEVICE_SERVICE_COMMAND, *PNDIS_WWAN_DEVICE_SERVICE_COMMAND;
typedef struct _NDIS_WWAN_SUBSCRIBE_DEVICE_SERVICE_EVENTS {
  NDIS_OBJECT_HEADER Header;
  WWAN_LIST_HEADER DeviceServiceListHeader;
} NDIS_WWAN_SUBSCRIBE_DEVICE_SERVICE_EVENTS, *PNDIS_WWAN_SUBSCRIBE_DEVICE_SERVICE_EVENTS;
typedef struct _NDIS_WWAN_ENUMERATE_DEVICE_SERVICE_COMMANDS {
  NDIS_OBJECT_HEADER Header;
  GUID DeviceServiceGuid;
} NDIS_WWAN_ENUMERATE_DEVICE_SERVICE_COMMANDS, *PNDIS_WWAN_ENUMERATE_DEVICE_SERVICE_COMMANDS;
typedef struct _NDIS_WWAN_DEVICE_SET_SERVICE_SESSION {
  NDIS_OBJECT_HEADER Header;
  WWAN_DEVICE_SERVICE_SESSION Session;
} NDIS_WWAN_SET_DEVICE_SERVICE_SESSION, *PNDIS_WWAN_SET_DEVICE_SERVICE_SESSION;
typedef struct _NDIS_WWAN_DEVICE_SERVICE_SESSION_INFO {
  NDIS_OBJECT_HEADER Header;
  WWAN_STATUS uStatus;
  WWAN_DEVICE_SERVICE_SESSION Session;
} NDIS_WWAN_DEVICE_SERVICE_SESSION_INFO, *PNDIS_WWAN_DEVICE_SERVICE_SESSION_COMPLETE;
typedef struct _NDIS_WWAN_DEVICE_SERVICE_SESSION_WRITE {
  NDIS_OBJECT_HEADER Header;
  WWAN_DEVICE_SERVICE_SESSION_WRITE WriteData;
} NDIS_WWAN_DEVICE_SERVICE_SESSION_WRITE, *PNDIS_WWAN_DEVICE_SERVICE_SESSION_WRITE;
typedef struct _NDIS_WWAN_MAC_PARAMETERS{
    NDIS_OBJECT_HEADER Header;
} NDIS_WWAN_MAC_PARAMETERS, *PNDIS_WWAN_MAC_PARAMETERS;
typedef struct _NDIS_WWAN_MAC_INFO
{
    ULONG uReserved;
    ULONG uNdisPortNumber;
    NDIS_WWAN_MAC_ADDRESS MacAddr;
} NDIS_WWAN_MAC_INFO, * PNDIS_WWAN_MAC_INFO;
    ( FIELD_OFFSET(NDIS_WWAN_MBIM_VERSION,MbimVersion) + \
      RTL_SIZEOF_THROUGH_FIELD(WWAN_MBIM_VERSION,MbimVersion) )
typedef struct _NDIS_WWAN_MBIM_VERSION {
    NDIS_OBJECT_HEADER Header;
    WWAN_MBIM_VERSION MbimVersion;
} NDIS_WWAN_MBIM_VERSION, *PNDIS_WWAN_MBIM_VERSION;
typedef struct _NDIS_WWAN_SET_DEVICE_SLOT_MAPPING_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_DEVICE_SLOT_MAPPING_INFO SetDeviceSlotMappingInfo;
} NDIS_WWAN_SET_DEVICE_SLOT_MAPPING_INFO, *PNDIS_WWAN_SET_DEVICE_SLOT_MAPPING_INFO;
typedef struct _NDIS_WWAN_GET_SLOT_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_GET_SLOT_INFO GetSlotInfo;
} NDIS_WWAN_GET_SLOT_INFO, *PNDIS_WWAN_GET_SLOT_INFO;
typedef struct _NDIS_WWAN_SET_DEVICE_BINDINGS_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_DEVICE_BINDINGS_INFO SetDeviceBindingsInfo;
} NDIS_WWAN_SET_DEVICE_BINDINGS_INFO, *PNDIS_WWAN_SET_DEVICE_BINDINGS_INFO;
typedef struct _NDIS_WWAN_SET_IMS_VOICE_STATE {
    NDIS_OBJECT_HEADER Header;
    WWAN_SET_IMS_VOICE_STATE SetImsVoiceState;
} NDIS_WWAN_SET_IMS_VOICE_STATE, *PNDIS_WWAN_SET_IMS_VOICE_STATE;
typedef struct _NDIS_WWAN_LOCATION_TRIGGER_MODE {
    NDIS_OBJECT_HEADER Header;
    WWAN_SET_LOCATION_STATE SetLocationState;
} NDIS_WWAN_LOCATION_TRIGGER_MODE, *PNDIS_WWAN_LOCATION_TRIGGER_MODE;
typedef struct _NDIS_WWAN_NETWORK_IDLE_HINT {
    NDIS_OBJECT_HEADER Header;
    WWAN_NETWORK_IDLE_HINT IdleHint;
} NDIS_WWAN_NETWORK_IDLE_HINT, *PNDIS_WWAN_NETWORK_IDLE_HINT;
typedef struct _NDIS_WWAN_SET_PRESHUTDOWN_STATE{
    NDIS_OBJECT_HEADER Header;
} NDIS_WWAN_SET_PRESHUTDOWN_STATE, *PNDIS_WWAN_SET_PRESHUTDOWN_STATE;
typedef struct _NDIS_WWAN_SET_UICC_OPEN_CHANNEL {
    NDIS_OBJECT_HEADER Header;
    WWAN_SET_UICC_OPEN_CHANNEL SetUiccOpenChannel;
} NDIS_WWAN_SET_UICC_OPEN_CHANNEL, *PNDIS_WWAN_SET_UICC_OPEN_CHANNEL;
typedef struct _NDIS_WWAN_SET_UICC_CLOSE_CHANNEL {
    NDIS_OBJECT_HEADER Header;
    WWAN_SET_UICC_CLOSE_CHANNEL SetUiccCloseChannel;
} NDIS_WWAN_SET_UICC_CLOSE_CHANNEL, *PNDIS_WWAN_SET_UICC_CLOSE_CHANNEL;
typedef struct _NDIS_WWAN_SET_UICC_APDU {
    NDIS_OBJECT_HEADER Header;
    WWAN_SET_UICC_APDU SetUiccApdu;
} NDIS_WWAN_SET_UICC_APDU, *PNDIS_WWAN_SET_UICC_APDU;
typedef struct _NDIS_WWAN_SET_UICC_TERMINAL_CAPABILITY {
    NDIS_OBJECT_HEADER Header;
    WWAN_LIST_HEADER CapabilityListHeader;
} NDIS_WWAN_SET_UICC_TERMINAL_CAPABILITY, *PNDIS_WWAN_SET_UICC_TERMINAL_CAPABILITY;
typedef struct _NDIS_WWAN_SET_PS_MEDIA_CONFIG {
    NDIS_OBJECT_HEADER Header;
    WWAN_PS_MEDIA_CONFIG_ITEM SetPSMediaConfigItem;
} NDIS_WWAN_SET_PS_MEDIA_CONFIG, *PNDIS_WWAN_SET_PS_MEDIA_CONFIG;
typedef struct _NDIS_WWAN_QUERY_PS_MEDIA_CONFIG {
    NDIS_OBJECT_HEADER Header;
    DWORD ServicesBitMap;
} NDIS_WWAN_QUERY_PS_MEDIA_CONFIG, *PNDIS_WWAN_QUERY_PS_MEDIA_CONFIG;
typedef struct _NDIS_WWAN_SET_SAR_CONFIG {
    NDIS_OBJECT_HEADER Header;
    WWAN_SET_SAR_CONFIG SetSarConfig;
} NDIS_WWAN_SET_SAR_CONFIG, *PNDIS_WWAN_SET_SAR_CONFIG;
typedef struct _NDIS_WWAN_SET_SAR_TRANSMISSION_STATUS {
    NDIS_OBJECT_HEADER Header;
    WWAN_SET_SAR_TRANSMISSION_STATUS SetTransmissionStatus;
} NDIS_WWAN_SET_SAR_TRANSMISSION_STATUS, *PNDIS_WWAN_SET_SAR_TRANSMISSION_STATUS;
typedef struct _NDIS_WWAN_SET_NETWORK_BLACKLIST {
    NDIS_OBJECT_HEADER Header;
    WWAN_NETWORK_BLACKLIST_INFO SetNetworkBlacklist;
} NDIS_WWAN_SET_NETWORK_BLACKLIST, *PNDIS_WWAN_SET_NETWORK_BLACKLIST;
typedef struct _NDIS_WWAN_SET_LTE_ATTACH_CONTEXT {
    NDIS_OBJECT_HEADER Header;
    WWAN_SET_LTE_ATTACH SetLteAttachContext;
} NDIS_WWAN_SET_LTE_ATTACH_CONTEXT, *PNDIS_WWAN_SET_LTE_ATTACH_CONTEXT;
typedef struct _NDIS_WWAN_SET_UICC_RESET {
    NDIS_OBJECT_HEADER Header;
    WWAN_SET_UICC_RESET SetUiccReset;
} NDIS_WWAN_SET_UICC_RESET, *PNDIS_WWAN_SET_UICC_RESET;
typedef struct _NDIS_WWAN_SET_DEVICE_RESET {
    NDIS_OBJECT_HEADER Header;
} NDIS_WWAN_SET_DEVICE_RESET, *PNDIS_WWAN_SET_DEVICE_RESET;
typedef struct _NDIS_WWAN_BASE_STATIONS_INFO_REQ {
    NDIS_OBJECT_HEADER Header;
    WWAN_BASE_STATIONS_INFO_REQ BaseStationsInfoRequest;
} NDIS_WWAN_BASE_STATIONS_INFO_REQ, *PNDIS_WWAN_BASE_STATIONS_INFO_REQ;
typedef struct _NDIS_WWAN_UICC_FILE_PATH {
    NDIS_OBJECT_HEADER Header;
    WWAN_UICC_FILE_PATH UiccFilePath;
} NDIS_WWAN_UICC_FILE_PATH, *PNDIS_WWAN_UICC_FILE_PATH;
typedef struct _NDIS_WWAN_UICC_ACCESS_BINARY {
    NDIS_OBJECT_HEADER Header;
    WWAN_UICC_ACCESS_BINARY UiccAccessBinary;
} NDIS_WWAN_UICC_ACCESS_BINARY, *PNDIS_WWAN_UICC_ACCESS_BINARY;
typedef struct _NDIS_WWAN_UICC_ACCESS_RECORD {
    NDIS_OBJECT_HEADER Header;
    WWAN_UICC_ACCESS_RECORD UiccAccessRecord;
} NDIS_WWAN_UICC_ACCESS_RECORD, *PNDIS_WWAN_UICC_ACCESS_RECORD;
typedef struct _NDIS_WWAN_SET_PIN_EX2 {
    NDIS_OBJECT_HEADER Header;
    WWAN_PIN_ACTION_EX2 PinAction;
} NDIS_WWAN_SET_PIN_EX2, *PNDIS_WWAN_SET_PIN_EX2;
typedef struct _NDIS_WWAN_PIN_APP {
    NDIS_OBJECT_HEADER Header;
    WWAN_PIN_APP PinApp;
} NDIS_WWAN_PIN_APP, *PNDIS_WWAN_PIN_APP;
typedef struct _NDIS_WWAN_SET_MODEM_LOGGING_CONFIG {
    NDIS_OBJECT_HEADER Header;
    WWAN_MODEM_LOGGING_CONFIG ModemLoggingConfig;
} NDIS_WWAN_SET_MODEM_LOGGING_CONFIG, *PNDIS_WWAN_SET_MODEM_LOGGING_CONFIG;
typedef struct _NDIS_WWAN_DEVICE_CAPS {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_DEVICE_CAPS DeviceCaps;
} NDIS_WWAN_DEVICE_CAPS, *PNDIS_WWAN_DEVICE_CAPS;
typedef struct _NDIS_WWAN_DEVICE_CAPS_EX {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_DEVICE_CAPS_EX DeviceCaps;
} NDIS_WWAN_DEVICE_CAPS_EX, *PNDIS_WWAN_DEVICE_CAPS_EX;
typedef struct _NDIS_WWAN_READY_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_READY_INFO ReadyInfo;
} NDIS_WWAN_READY_INFO, *PNDIS_WWAN_READY_INFO;
typedef struct _NDIS_WWAN_SERVICE_ACTIVATION_STATUS {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_SERVICE_ACTIVATION_STATUS ServiceActivationStatus;
} NDIS_WWAN_SERVICE_ACTIVATION_STATUS, *PNDIS_WWAN_SERVICE_ACTIVATION_STATUS;
typedef struct _NDIS_WWAN_VENDOR_SPECIFIC {
    NDIS_OBJECT_HEADER Header;
    WWAN_VENDOR_SPECIFIC VendorSpecificData;
} NDIS_WWAN_VENDOR_SPECIFIC, *PNDIS_WWAN_VENDOR_SPECIFIC;
typedef struct _NDIS_WWAN_RADIO_STATE {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_RADIO_STATE RadioState;
} NDIS_WWAN_RADIO_STATE, *PNDIS_WWAN_RADIO_STATE;
typedef struct _NDIS_WWAN_PIN_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_PIN_INFO PinInfo;
} NDIS_WWAN_PIN_INFO, *PNDIS_WWAN_PIN_INFO;
typedef struct _NDIS_WWAN_PIN_LIST {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_PIN_LIST PinList;
} NDIS_WWAN_PIN_LIST, *PNDIS_WWAN_PIN_LIST;
typedef struct _NDIS_WWAN_HOME_PROVIDER {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_PROVIDER Provider;
} NDIS_WWAN_HOME_PROVIDER, *PNDIS_WWAN_HOME_PROVIDER;
typedef struct _NDIS_WWAN_PREFERRED_PROVIDERS {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_LIST_HEADER PreferredListHeader;
} NDIS_WWAN_PREFERRED_PROVIDERS, *PNDIS_WWAN_PREFERRED_PROVIDERS;
typedef struct _NDIS_WWAN_VISIBLE_PROVIDERS {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_LIST_HEADER VisibleListHeader;
} NDIS_WWAN_VISIBLE_PROVIDERS, *PNDIS_WWAN_VISIBLE_PROVIDERS;
typedef struct _NDIS_WWAN_REGISTRATION_STATE {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_REGISTRATION_STATE RegistrationState;
} NDIS_WWAN_REGISTRATION_STATE, *PNDIS_WWAN_REGISTRATION_STATE;
typedef struct _NDIS_WWAN_REGISTRATION_STATE_INFOS_EX {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_REGISTRATION_STATE_INFOS RegistrationStateInfos;
} NDIS_WWAN_REGISTRATION_STATE_INFOS_EX, *PNDIS_WWAN_REGISTRATION_STATE_INFOS_EX;
typedef struct _NDIS_WWAN_SIGNAL_STATE {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_SIGNAL_STATE SignalState;
} NDIS_WWAN_SIGNAL_STATE, *PNDIS_WWAN_SIGNAL_STATE;
typedef struct _NDIS_WWAN_SIGNAL_STATE_INFOS_EX {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_SIGNAL_STATE_INFOS SignalStateInfos;
} NDIS_WWAN_SIGNAL_STATE_INFOS_EX, *PNDIS_WWAN_SIGNAL_STATE_INFOS_EX;
typedef struct _NDIS_WWAN_PACKET_SERVICE_STATE {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_PACKET_SERVICE PacketService;
} NDIS_WWAN_PACKET_SERVICE_STATE, *PNDIS_WWAN_PACKET_SERVICE_STATE;
typedef struct _NDIS_WWAN_CONTEXT_STATE {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_CONTEXT_STATE ContextState;
} NDIS_WWAN_CONTEXT_STATE, *PNDIS_WWAN_CONTEXT_STATE;
    ( FIELD_OFFSET(NDIS_WWAN_CONTEXT_STATE,ContextState) + \
      RTL_SIZEOF_THROUGH_FIELD(WWAN_CONTEXT_STATE,VoiceCallState) )
    ( FIELD_OFFSET(NDIS_WWAN_CONTEXT_STATE,ContextState) + \
      RTL_SIZEOF_THROUGH_FIELD(WWAN_CONTEXT_STATE,IPType) )
    ( FIELD_OFFSET(NDIS_WWAN_CONTEXT_STATE,ContextState) + \
      RTL_SIZEOF_THROUGH_FIELD(WWAN_CONTEXT_STATE,ConnectionMedia) )
typedef struct _NDIS_WWAN_PROVISIONED_CONTEXTS {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_LIST_HEADER ContextListHeader;
} NDIS_WWAN_PROVISIONED_CONTEXTS, *PNDIS_WWAN_PROVISIONED_CONTEXTS;
typedef struct _NDIS_WWAN_SMS_CONFIGURATION {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_SMS_CONFIGURATION SmsConfiguration;
} NDIS_WWAN_SMS_CONFIGURATION, *PNDIS_WWAN_SMS_CONFIGURATION;
typedef struct _NDIS_WWAN_SMS_RECEIVE {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_LIST_HEADER SmsListHeader;
} NDIS_WWAN_SMS_RECEIVE, *PNDIS_WWAN_SMS_RECEIVE;
typedef struct _NDIS_WWAN_SMS_SEND_STATUS {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    ULONG MessageReference;
} NDIS_WWAN_SMS_SEND_STATUS, *PNDIS_WWAN_SMS_SEND_STATUS;
typedef struct _NDIS_WWAN_SMS_DELETE_STATUS {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
} NDIS_WWAN_SMS_DELETE_STATUS, *PNDIS_WWAN_SMS_DELETE_STATUS;
typedef struct _NDIS_WWAN_SMS_STATUS {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_SMS_STATUS SmsStatus;
} NDIS_WWAN_SMS_STATUS, *PNDIS_WWAN_SMS_STATUS;
typedef struct _NDIS_WWAN_SUPPORTED_DEVICE_SERVICES {
  NDIS_OBJECT_HEADER Header;
  WWAN_STATUS uStatus;
  WWAN_SUPPORTED_DEVICE_SERVICES DeviceServices;
} NDIS_WWAN_SUPPORTED_DEVICE_SERVICES, *PNDIS_WWAN_SUPPORTED_DEVICE_SERVICES;
typedef struct _NDIS_WWAN_DEVICE_SERVICE_RESPONSE {
   NDIS_OBJECT_HEADER Header;
   WWAN_STATUS uStatus;
   WWAN_DEVICE_SERVICE_RESPONSE Response;
} NDIS_WWAN_DEVICE_SERVICE_RESPONSE, *PNDIS_WWAN_DEVICE_SERVICE_RESPONSE;
typedef struct _NDIS_WWAN_DEVICE_SERVICE_EVENT {
  NDIS_OBJECT_HEADER Header;
  WWAN_DEVICE_SERVICE_EVENT Event;
} NDIS_WWAN_DEVICE_SERVICE_EVENT, *PNDIS_WWAN_DEVICE_SERVICE_EVENT;
typedef struct _NDIS_WWAN_DEVICE_SERVICE_SUBSCRIPTION {
  NDIS_OBJECT_HEADER Header;
  WWAN_STATUS uStatus;
  WWAN_LIST_HEADER DeviceServiceListHeader;
} NDIS_WWAN_DEVICE_SERVICE_SUBSCRIPTION, *PNDIS_WWAN_DEVICE_SERVICE_SUBSCRIPTION;
typedef struct _NDIS_WWAN_HOME_PROVIDER2 {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_PROVIDER2 Provider;
} NDIS_WWAN_HOME_PROVIDER2, *PNDIS_WWAN_HOME_PROVIDER2;
typedef struct _NDIS_WWAN_USSD_EVENT {
  NDIS_OBJECT_HEADER Header;
  WWAN_STATUS uStatus;
  WWAN_USSD_EVENT UssdEvent;
} NDIS_WWAN_USSD_EVENT, *PNDIS_WWAN_USSD_EVENT;
typedef struct _NDIS_WWAN_DEVICE_SERVICE_SUPPORTED_COMMANDS {
  NDIS_OBJECT_HEADER Header;
  WWAN_STATUS uStatus;
  WWAN_DEVICE_SERVICE_SUPPORTED_COMMANDS SupportedCommands;
} NDIS_WWAN_DEVICE_SERVICE_SUPPORTED_COMMANDS, *PNDIS_WWAN_DEVICE_SERVICE_SUPPORTED_COMMANDS;
typedef struct _NDIS_WWAN_AUTH_CHALLENGE {
    NDIS_OBJECT_HEADER Header;
    WWAN_AUTH_CHALLENGE AuthChallenge;
} NDIS_WWAN_AUTH_CHALLENGE, *PNDIS_WWAN_AUTH_CHALLENGE;
typedef struct _NDIS_WWAN_AUTH_RESPONSE {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_AUTH_RESPONSE AuthResponse;
} NDIS_WWAN_AUTH_RESPONSE, *PNDIS_WWAN_AUTH_RESPONSE;
typedef struct _NDIS_WWAN_PREFERRED_MULTICARRIER_PROVIDERS {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_LIST_HEADER PreferredListHeader;
} NDIS_WWAN_PREFERRED_MULTICARRIER_PROVIDERS, *PNDIS_WWAN_PREFERRED_MULTICARRIER_PROVIDERS;
typedef struct _NDIS_WWAN_DEVICE_SERVICE_SESSION_WRITE_COMPLETE {
   NDIS_OBJECT_HEADER Header;
   WWAN_STATUS uStatus;
} NDIS_WWAN_DEVICE_SERVICE_SESSION_WRITE_COMPLETE, *PNDIS_WWAN_DEVICE_SERVICE_SESSION_WRITE_COMPLETE;
typedef struct _NDIS_WWAN_DEVICE_SERVICE_SESSION_READ {
  NDIS_OBJECT_HEADER Header;
  WWAN_DEVICE_SERVICE_SESSION_READ ReadData;
} NDIS_WWAN_DEVICE_SERVICE_SESSION_READ, *PNDIS_WWAN_DEVICE_SERVICE_SESSION_READ;
typedef struct _NDIS_WWAN_IP_ADDRESS_STATE
{
   NDIS_OBJECT_HEADER Header;
   WWAN_IP_ADDRESS_STATE WwanIpAddressState;
} NDIS_WWAN_IP_ADDRESS_STATE, *PNDIS_WWAN_IP_ADDRESS_STATE;
typedef struct _NDIS_WWAN_SYS_CAPS_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_SYS_CAPS_INFO SysCapsInfo;
} NDIS_WWAN_SYS_CAPS_INFO, *PNDIS_WWAN_SYS_CAPS_INFO;
typedef struct _NDIS_WWAN_DEVICE_SLOT_MAPPING_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_DEVICE_SLOT_MAPPING_INFO DeviceSlotMappingInfo;
} NDIS_WWAN_DEVICE_SLOT_MAPPING_INFO, *PNDIS_WWAN_DEVICE_SLOT_MAPPING_INFO;
typedef struct _NDIS_WWAN_SLOT_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_SLOT_INFO SlotInfo;
} NDIS_WWAN_SLOT_INFO, *PNDIS_WWAN_SLOT_INFO;
typedef struct _NDIS_WWAN_DEVICE_BINDINGS_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_DEVICE_BINDINGS_INFO DeviceBindingsInfo;
} NDIS_WWAN_DEVICE_BINDINGS_INFO, *PNDIS_WWAN_DEVICE_BINDINGS_INFO;
typedef struct _NDIS_WWAN_IMS_VOICE_STATE {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_IMS_VOICE_STATE ImsVoiceState;
} NDIS_WWAN_IMS_VOICE_STATE, *PNDIS_WWAN_IMS_VOICE_STATE;
typedef struct _NDIS_WWAN_LOCATION_STATE_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_LOCATION_STATE_INFO LocationStateInfo;
} NDIS_WWAN_LOCATION_STATE_INFO, *PNDIS_WWAN_LOCATION_STATE_INFO;
typedef struct _NDIS_WWAN_PRESHUTDOWN_STATE {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
} NDIS_WWAN_PRESHUTDOWN_STATE, *PNDIS_WWAN_PRESHUTDOWN_STATE;
typedef struct _NDIS_WWAN_ATR_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_ATR_INFO AtrInfo;
} NDIS_WWAN_ATR_INFO, *PNDIS_WWAN_ATR_INFO;
typedef struct _NDIS_WWAN_UICC_OPEN_CHANNEL_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_UICC_OPEN_CHANNEL_INFO UiccOpenChannelInfo;
} NDIS_WWAN_UICC_OPEN_CHANNEL_INFO, *PNDIS_WWAN_UICC_OPEN_CHANNEL_INFO;
typedef struct _NDIS_WWAN_UICC_CLOSE_CHANNEL_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_UICC_CLOSE_CHANNEL_INFO UiccCloseChannelInfo;
} NDIS_WWAN_UICC_CLOSE_CHANNEL_INFO, *PNDIS_WWAN_UICC_CLOSE_CHANNEL_INFO;
typedef struct _NDIS_WWAN_UICC_APDU_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_UICC_APDU_INFO UiccApduInfo;
} NDIS_WWAN_UICC_APDU_INFO, *PNDIS_WWAN_UICC_APDU_INFO;
typedef struct _NDIS_WWAN_UICC_TERMINAL_CAPABILITY_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_LIST_HEADER CapabilityListHeader;
} NDIS_WWAN_UICC_TERMINAL_CAPABILITY_INFO, *PNDIS_WWAN_UICC_TERMINAL_CAPABILITY_INFO;
typedef struct _NDIS_WWAN_PS_MEDIA_CONFIG_STATE {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    DWORD nNumItems;
    WWAN_PS_MEDIA_CONFIG_ITEM PSMediaConfigItems[1];
} NDIS_WWAN_PS_MEDIA_CONFIG_STATE, *PNDIS_WWAN_PS_MEDIA_CONFIG_STATE;
typedef struct _NDIS_WWAN_SAR_CONFIG_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_SAR_CONFIG_INFO SarConfig;
} NDIS_WWAN_SAR_CONFIG_INFO, *PNDIS_WWAN_SAR_CONFIG_INFO;
typedef struct _NDIS_WWAN_SAR_TRANSMISSION_STATUS_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_SAR_TRANSMISSION_STATUS_INFO TransmissionStatus;
} NDIS_WWAN_SAR_TRANSMISSION_STATUS_INFO, *PNDIS_WWAN_SAR_TRANSMISSION_STATUS_INFO;
typedef struct _NDIS_WWAN_NETWORK_BLACKLIST {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_NETWORK_BLACKLIST_INFO NetworkBlacklistInfo;
} NDIS_WWAN_NETWORK_BLACKLIST, *PNDIS_WWAN_NETWORK_BLACKLIST;
typedef struct _NDIS_WWAN_LTE_ATTACH_CONTEXTS {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_LTE_ATTACH_CONFIG LteAttachContext;
} NDIS_WWAN_LTE_ATTACH_CONTEXTS, *PNDIS_WWAN_LTE_ATTACH_CONTEXTS;
typedef struct _NDIS_WWAN_LTE_ATTACH_STATUS {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_LTE_ATTACH_STATUS LteAttachStatus;
} NDIS_WWAN_LTE_ATTACH_STATUS, *PNDIS_WWAN_LTE_ATTACH_STATUS;
typedef struct _NDIS_WWAN_MODEM_CONFIG_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_MODEM_CONFIG_INFO ModemConfigInfo;
} NDIS_WWAN_MODEM_CONFIG_INFO, *PNDIS_WWAN_MODEM_CONFIG_INFO;
typedef struct _NDIS_WWAN_PCO_STATUS {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_PCO_VALUE PcoValue;
} NDIS_WWAN_PCO_STATUS, *PNDIS_WWAN_PCO_STATUS;
typedef struct _NDIS_WWAN_UICC_RESET_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_UICC_RESET_INFO UiccResetInfo;
} NDIS_WWAN_UICC_RESET_INFO, *PNDIS_WWAN_UICC_RESET_INFO;
typedef struct _NDIS_WWAN_DEVICE_RESET_STATUS {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
} NDIS_WWAN_DEVICE_RESET_STATUS, *PNDIS_WWAN_DEVICE_RESET_STATUS;
typedef struct _NDIS_WWAN_BASE_STATIONS_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_BASE_STATIONS_INFO BaseStationsInfo;
} NDIS_WWAN_BASE_STATIONS_INFO, *PNDIS_WWAN_BASE_STATIONS_INFO;
typedef enum _WWAN_MPDP_OPERATION {
    WwanMPDPOperationCreateChildInterface = 0,
    WwanMPDPOperationDeleteChildInterface,
    WwanMPDPOperationMax
} WWAN_MPDP_OPERATION, *PWWAN_MPDP_OPERATION;
typedef struct _NDIS_WWAN_MPDP_INFO
{
    WWAN_MPDP_OPERATION Operation;
    GUID ChildInterfaceGUID;
    NDIS_WWAN_MAC_ADDRESS MacAddr;
} NDIS_WWAN_MPDP_INFO, *PNDIS_WWAN_MPDP_INFO;
typedef struct _NDIS_WWAN_SET_MPDP_STATE{
    NDIS_OBJECT_HEADER Header;
    NDIS_WWAN_MPDP_INFO Info;
} NDIS_WWAN_SET_MPDP_STATE, *PNDIS_WWAN_SET_MPDP_STATE;
typedef struct _NDIS_WWAN_MPDP_STATE {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    NDIS_WWAN_MPDP_INFO Info;
} NDIS_WWAN_MPDP_STATE, *PNDIS_WWAN_MPDP_STATE;
typedef struct _NDIS_WWAN_MPDP_LIST {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_LIST_HEADER ChildInterfaceList;
} NDIS_WWAN_MPDP_LIST, *PNDIS_WWAN_MPDP_LIST;
typedef struct _NDIS_WWAN_NITZ_INFO {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_NITZ_INFO NitzInfo;
} NDIS_WWAN_NITZ_INFO, *PNDIS_WWAN_NITZ_INFO;
typedef struct _NDIS_WWAN_UICC_APP_LIST {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_UICC_APP_LIST UiccAppList;
} NDIS_WWAN_UICC_APP_LIST, *PNDIS_WWAN_UICC_APP_LIST;
typedef struct _NDIS_WWAN_UICC_FILE_STATUS {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_UICC_FILE_STATUS UiccFileStatus;
} NDIS_WWAN_UICC_FILE_STATUS, *PNDIS_WWAN_UICC_FILE_STATUS;
typedef struct _NDIS_WWAN_UICC_RESPONSE {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_UICC_RESPONSE UiccResponse;
} NDIS_WWAN_UICC_RESPONSE, *PNDIS_WWAN_UICC_RESPONSE;
typedef struct _NDIS_WWAN_MODEM_LOGGING_CONFIG {
    NDIS_OBJECT_HEADER Header;
    WWAN_STATUS uStatus;
    WWAN_MODEM_LOGGING_CONFIG ModemLoggingConfig;
} NDIS_WWAN_MODEM_LOGGING_CONFIG, *PNDIS_WWAN_MODEM_LOGGING_CONFIG;