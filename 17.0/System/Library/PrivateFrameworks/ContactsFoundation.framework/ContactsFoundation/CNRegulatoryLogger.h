@class NSString, PAApplication, CNAuditToken, PAAccessLogger, NSObject;
@protocol OS_os_log, OS_tcc_identity;

@interface CNRegulatoryLogger : NSObject <CNRegulatoryLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *os_log;
@property (readonly, nonatomic) struct ct_green_tea_logger_s { } *greenTeaLogger;
@property (readonly, nonatomic) BOOL isGreenTeaDiagnosticsEnabled;
@property (nonatomic) unsigned long long greenTeaDiagnosticLogFaultForEventCount;
@property (nonatomic) unsigned long long greenTeaDiagnosticEventCounter;
@property (retain, nonatomic) PAAccessLogger *privacyAccountingLogger;
@property (retain, nonatomic) PAApplication *privacyAccountingAccessor;
@property (readonly, nonatomic) CNAuditToken *cnAuditToken;
@property (readonly, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (readonly, nonatomic) BOOL isPrivacyAccountingDiagnosticsEnabled;
@property (retain, nonatomic) NSString *processDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanceForAddressBook;

- (void)dealloc;
- (void)logPrivacyAccountingAccessEvent:(id)a0;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1 logCategory:(const char *)a2;
- (void)willNotLogContactPickerAccessEventAsLoggingInProcess;
- (id)accessorForAuditTokenValidatingAssumedIdentity;
- (id)privacyAccountingAccessorImpl;
- (void)readAndTransmittingContactsData;
- (void)displayingOOPContactPicker;
- (id)processDescriptionImpl;
- (void)logContactsDataAccessEvent;
- (void)readingContactsData;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (void)logGreenTeaEvent:(id)a0;
- (void)deletingContactsData;
- (void)willLogContactPickerAccessEvent;
- (void).cxx_destruct;
- (void)willNotLogContactPickerAccessEventAsLoggingDisabled;
- (void)logContactsDataAccessEventWithAssetIdentifiers:(id)a0;
- (void)receivingContactsDataFromOOPContactPicker;
- (void)willNotLogContactsDataAccessEventAsLoggingDisabled;
- (void)willLogContactsDataAccessEvent;
- (void)logContactPickerAccessEvent;
- (void)modifyingContactsData;
- (void)willLogContactsDataAccessEventWithAssetIdentifiers:(id)a0;

@end
