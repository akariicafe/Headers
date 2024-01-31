@class HMDRapportMessaging, HMDAppleAccountManager;
@protocol HMMLogEventSubmitting;

@interface HMDRapportMessageTransport : HMDRemoteMessageTransport <HMDRapportMessagingReachabilityDelegate>

@property (readonly, nonatomic) HMDRapportMessaging *rapportMessaging;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) HMDAppleAccountManager *appleAccountManager;

+ (unsigned long long)restriction;
+ (id)logCategory;

- (BOOL)isSecure;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)start;
- (void).cxx_destruct;
- (int)transportType;
- (BOOL)canSendMessage:(id)a0;
- (void)_sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isValidMessage:(id)a0;
- (id)_IDSIdentifierForDestination:(id)a0;
- (void)_addSourceDeviceIdentifierToPayload:(id)a0 withRemoteMessage:(id)a1;
- (void)_configureRapport;
- (id)_deviceForIDSIdentifier:(id)a0 deviceIdentifier:(id)a1;
- (void)_didReceiveRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (id)_rpOptions:(id)a0 stringForKey:(id)a1;
- (id)_serializeRemoteMessage:(id)a0 withResponseErrorData:(id)a1 serializationError:(id *)a2;
- (void)_setSharedUserIDSIdentifierForDevice:(id)a0 idsIdentifier:(id)a1;
- (id)initWithAccountRegistry:(id)a0;
- (id)initWithAccountRegistry:(id)a0 rapportMessaging:(id)a1 logEventSubmitter:(id)a2 appleAccountManager:(id)a3;
- (void)rapportMessaging:(id)a0 idsIdentifier:(id)a1 didAppearReachable:(BOOL)a2;

@end
