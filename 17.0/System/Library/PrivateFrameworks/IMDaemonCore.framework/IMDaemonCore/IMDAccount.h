@class NSString, NSDictionary, NSMutableDictionary, IMDService, IMDServiceSession, NSArray;

@interface IMDAccount : NSObject <IMSystemMonitorListener>

@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic) BOOL wasDisabledAutomatically;
@property (readonly, nonatomic) BOOL shouldPublishNowPlaying;
@property (copy, nonatomic) NSString *accountID;
@property (copy, nonatomic) NSString *loginID;
@property (retain, nonatomic) IMDService *service;
@property (retain, nonatomic) IMDServiceSession *session;
@property (nonatomic) unsigned int serviceLoginStatus;
@property (nonatomic) int serviceDisconnectReason;
@property (copy, nonatomic) NSString *serviceLoginStatusMessage;
@property (readonly, nonatomic) int registrationStatus;
@property (readonly, nonatomic) int registrationError;
@property (readonly, retain, nonatomic) NSDictionary *registrationAlertInfo;
@property (readonly, nonatomic) NSMutableDictionary *accountDefaults;
@property (readonly, copy, nonatomic) NSArray *aliases;
@property (readonly, nonatomic) NSArray *replicationSessions;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic, getter=isManaged) BOOL managed;
@property (readonly, nonatomic) BOOL canMakeDowngradeRoutingChecks;
@property (readonly, nonatomic) long long accountType;

- (void)dealloc;
- (void)writeAccountDefaults:(id)a0;
- (void)setIsManaged:(BOOL)a0;
- (void).cxx_destruct;
- (id)_registrationInfo;
- (void)_createReplicationSessionsIfNecessary;
- (void)_forceSetLoginStatus:(unsigned int)a0 message:(id)a1 reason:(int)a2 properties:(id)a3;
- (id)accountInfoToPost;
- (void)createSessionIfNecessary;
- (id)initWithAccountID:(id)a0 defaults:(id)a1 service:(id)a2;
- (void)postAccountCapabilities;
- (void)releaseSession;
- (void)resetReplicationSessions;
- (void)setLoginStatus:(unsigned int)a0 message:(id)a1;
- (void)setLoginStatus:(unsigned int)a0 message:(id)a1 reason:(int)a2 properties:(id)a3;
- (void)setRegistrationStatus:(int)a0 error:(int)a1 alertInfo:(id)a2;

@end
