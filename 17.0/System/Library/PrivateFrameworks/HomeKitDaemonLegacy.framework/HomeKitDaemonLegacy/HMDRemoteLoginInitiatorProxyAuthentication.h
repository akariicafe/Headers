@class NSDictionary;

@interface HMDRemoteLoginInitiatorProxyAuthentication : HMDRemoteLoginInitiatorAuthentication

@property (readonly, nonatomic) NSDictionary *authResults;

+ (id)logCategory;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)_authenticate;
- (void)authenticate;
- (id)initWithSessionID:(id)a0 remoteDevice:(id)a1 workQueue:(id)a2 remoteMessageSender:(id)a3 delegate:(id)a4 authResults:(id)a5;
- (int)loginType;

@end
