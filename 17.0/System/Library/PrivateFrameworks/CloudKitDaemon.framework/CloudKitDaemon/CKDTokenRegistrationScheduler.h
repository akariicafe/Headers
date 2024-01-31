@class NSMutableDictionary, NSMutableSet, CKDLogicalDeviceContext, NSObject;
@protocol OS_dispatch_queue;

@interface CKDTokenRegistrationScheduler : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableDictionary *callbackBlocks;
@property (readonly, nonatomic) NSMutableDictionary *callbackTimers;
@property (readonly, nonatomic) NSMutableSet *operations;
@property (readonly, weak, nonatomic) CKDLogicalDeviceContext *deviceContext;
@property (readonly, nonatomic) NSMutableDictionary *unitTestingPushTokens;

- (void)dealloc;
- (void)registerTokenForAdopterContainer:(id)a0 completionBlock:(id /* block */)a1;
- (void)unregisterAllTokensForAccountID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_refreshApsToken:(id)a0 container:(id)a1 completionBlock:(id /* block */)a2;
- (void)tokenRefreshChanged;
- (id)initWithDeviceContext:(id)a0;
- (void)unregisterTokenForAppContainerAccountTuple:(id)a0;
- (void)registerTokenRefreshActivity;
- (void)refreshAllClientsNow:(BOOL)a0;
- (void).cxx_destruct;
- (void)handlePublicPushTokenDidUpdate:(id)a0;
- (void)forceTokenRefreshForAllClients;
- (void)_removeApsToken:(id)a0 appContainerAccountTuple:(id)a1 completionBlock:(id /* block */)a2;
- (void)_handlePushToken:(id)a0 forContainer:(id)a1 completionBlock:(id /* block */)a2;

@end
