@class NSUUID, NSString, NSURL, IDSService, IDSPseudonym, ICSharedListeningConnectionReport, NSDictionary, MSVTimer, NSObject, IDSAccount;
@protocol OS_dispatch_queue;

@interface ICLiveLinkQRConnectionDataSource : NSObject <MSVQRConnectionSessionDataSource>

@property (retain, nonatomic) IDSService *service;
@property (retain, nonatomic) IDSAccount *account;
@property (retain, nonatomic) NSUUID *groupSessionIdentifier;
@property (retain, nonatomic) NSDictionary *groupSessionOptions;
@property (retain, nonatomic) IDSPseudonym *pseudonym;
@property (retain, nonatomic) MSVTimer *pseudonymRenewalTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSURL *sharedListeningSessionInviteURL;
@property (copy, nonatomic) NSString *sharedListeningSessionIdentifier;
@property (retain, nonatomic) NSString *sharedSessionToken;
@property (retain, nonatomic) NSString *externalIdentifier;
@property (readonly, nonatomic) NSString *pluginIdentifier;
@property (readonly, nonatomic) NSString *rpcPath;
@property (readonly, nonatomic) id /* block */ trustHandler;
@property (readonly, nonatomic) NSString *applicationProtocol;
@property (weak, nonatomic) ICSharedListeningConnectionReport *report;
@property (copy, nonatomic) id /* block */ dataSourceErrorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataSourceForExistingSharedListeningSession:(id)a0 identity:(id)a1;
+ (id)dataSourceForNewSharedListeningSessionWithIdentity:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_beginPseudonymAutoRenewal;
- (void)_joinSharedListeningSessionWithCompletion:(id /* block */)a0;
- (void)_provisionUserPseudonymWithCompletion:(id /* block */)a0;
- (void)_renewUserPseudonym;
- (void)_revokeUserPseudonymWithCompletion:(id /* block */)a0;
- (id)initWithSharedListeningSessionIdentifier:(id)a0 identity:(id)a1;
- (void)populateWithCompletion:(id /* block */)a0;
- (id)sessionURLForBag:(id)a0 error:(id *)a1;

@end
