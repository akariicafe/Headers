@class HMDRemoteLoginReceiverSession, NSString;

@interface HMDRemoteLoginReceiver : HMDRemoteLoginBase <HMDRemoteLoginReceiverAuthenticationDelegate>

@property (retain, nonatomic) HMDRemoteLoginReceiverSession *loginSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)registerForNotifications;
- (void)registerForMessages;
- (void)_auditLoggedInAccountFor:(id)a0;
- (void)_authenticate:(id)a0 message:(id)a1;
- (void)_callCompletion:(id)a0;
- (void)_handleACAccountDidChangeNotification:(id)a0;
- (void)_handleCompanionAuthenticationRequest:(id)a0;
- (void)_handleProxyAuthenticationRequest:(id)a0;
- (void)_handleProxyDeviceRequest:(id)a0;
- (void)_handleSignoutRequest:(id)a0;
- (void)auditLoggedInAccount;
- (void)auditLoggedInAccountFor:(id)a0;
- (void)configureWithWorkQueue:(id)a0 messageDispatcher:(id)a1;
- (void)didCompleteAuthentication:(id)a0 response:(id)a1;

@end
