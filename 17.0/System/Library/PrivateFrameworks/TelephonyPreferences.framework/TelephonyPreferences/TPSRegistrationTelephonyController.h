@class NSArray, CTNetworkSelectionInfo, CTXPCServiceSubscriptionContext, NSString;

@interface TPSRegistrationTelephonyController : TPSTelephonyController <CoreTelephonyClientRegistrationDelegate>

@property (copy, nonatomic) NSArray *networks;
@property (retain, nonatomic) CTNetworkSelectionInfo *networkSelectionInfo;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)networkSelected:(id)a0 success:(BOOL)a1 mode:(id)a2;
- (void).cxx_destruct;
- (void)performDelegateSelector:(SEL)a0;
- (void)networkListAvailable:(id)a0 list:(id)a1;
- (void)fetchNetworkListWithCompletion:(id /* block */)a0;
- (void)automaticallySelectNetwork;
- (void)automaticallySelectNetworkWithCompletion:(id /* block */)a0;
- (id)copyNetworkSelectionInfo;
- (void)fetchNetworkList;
- (id)initWithSubscriptionContext:(id)a0;
- (void)networksWithCompletionHandler:(id /* block */)a0;
- (void)selectNetwork:(id)a0;
- (void)selectNetwork:(id)a0 completion:(id /* block */)a1;

@end
