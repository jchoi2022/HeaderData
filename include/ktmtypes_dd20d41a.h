extern "C" {
typedef GUID UOW, *PUOW;
typedef GUID CRM_PROTOCOL_ID, *PCRM_PROTOCOL_ID;
typedef ULONG NOTIFICATION_MASK;
typedef struct _TRANSACTION_NOTIFICATION {
    PVOID TransactionKey;
    ULONG TransactionNotification;
    LARGE_INTEGER TmVirtualClock;
    ULONG ArgumentLength;
} TRANSACTION_NOTIFICATION, *PTRANSACTION_NOTIFICATION;
typedef struct _TRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT {
    GUID EnlistmentId;
    UOW UOW;
} TRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT, *PTRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT;
typedef struct _TRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT {
    GUID TmIdentity;
    ULONG Flags;
} TRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT, *PTRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT;
typedef ULONG SAVEPOINT_ID, *PSAVEPOINT_ID;
typedef struct _TRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT {
    SAVEPOINT_ID SavepointId;
} TRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT, *PTRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT;
typedef struct _TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT {
    ULONG PropagationCookie;
    GUID UOW;
    GUID TmIdentity;
    ULONG BufferLength;
} TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT, *PTRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT;
typedef struct _TRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT {
    ULONG MarshalCookie;
    GUID UOW;
} TRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT, *PTRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT;
typedef TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT TRANSACTION_NOTIFICATION_PROMOTE_ARGUMENT, *PTRANSACTION_NOTIFICATION_PROMOTE_ARGUMENT;
typedef struct _KCRM_MARSHAL_HEADER {
    ULONG VersionMajor;
    ULONG VersionMinor;
    ULONG NumProtocols;
    ULONG Unused;
} KCRM_MARSHAL_HEADER, *PKCRM_MARSHAL_HEADER, *RESTRICTED_POINTER PRKCRM_MARSHAL_HEADER;
typedef struct _KCRM_TRANSACTION_BLOB {
    UOW UOW;
    GUID TmIdentity;
    ULONG IsolationLevel;
    ULONG IsolationFlags;
    ULONG Timeout;
    WCHAR Description[MAX_TRANSACTION_DESCRIPTION_LENGTH];
} KCRM_TRANSACTION_BLOB, *PKCRM_TRANSACTION_BLOB, *RESTRICTED_POINTER PRKCRM_TRANSACTION_BLOB;
typedef struct _KCRM_PROTOCOL_BLOB {
    CRM_PROTOCOL_ID ProtocolId;
    _Field_range_ (0,ULONG_MAX/2) ULONG StaticInfoLength;
    ULONG TransactionIdInfoLength;
    ULONG Unused1;
    ULONG Unused2;
} KCRM_PROTOCOL_BLOB, *PKCRM_PROTOCOL_BLOB, *RESTRICTED_POINTER PRKCRM_PROTOCOL_BLOB;
}