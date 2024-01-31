@protocol CDPDCircleProxy, CDPDKeychainSyncPolicyProvider;

@interface CDPDKeychainSync : NSObject <CDPInitUnavailable>

@property (readonly, nonatomic) id<CDPDCircleProxy> circleProxy;
@property (readonly, nonatomic) id<CDPDCircleProxy> sosCircleProxy;
@property (readonly, nonatomic) id<CDPDKeychainSyncPolicyProvider> syncPolicy;
@property (readonly, nonatomic) BOOL isUserVisibleKeychainSyncEnabled;
@property (readonly, nonatomic) BOOL isUserVisibleKeychainSyncAvailable;

+ (id)_defaultUserVisibleViewSet;
+ (id)keyChainSync;
+ (id)keyChainSyncWithProxy:(id)a0 sosCircleProxy:(id)a1 context:(id)a2;

- (id)initWithContext:(id)a0;
- (void)setUserVisibleKeychainSyncEnabled:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_processAuthFailure:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isThisDeviceInCircle;
- (BOOL)_keychainSyncAvailableViaOctacon;
- (BOOL)_keychainSyncAvailableViaSOS;
- (void)_preflightCircleStatusWithCompletion:(id /* block */)a0;
- (BOOL)_setKeychainSyncState:(BOOL)a0 error:(id *)a1;
- (void)_setUserVisibleKeychainSyncEnabled:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)initWithCircleProxy:(id)a0 sosCircleProxy:(id)a1 context:(id)a2;
- (id)initWithCircleProxy:(id)a0 sosCircleProxy:(id)a1 policyProvider:(id)a2;
- (void)removeNonViewAwarePeersFromCircleWithCompletion:(id /* block */)a0;
- (void)updateKeychainSyncStateIfNeededWithCompletion:(id /* block */)a0;

@end
