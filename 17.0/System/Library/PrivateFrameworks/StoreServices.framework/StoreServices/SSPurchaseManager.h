@class NSString, SSXPCConnection, NSObject;
@protocol SSPurchaseManagerDelegate, OS_dispatch_queue;

@interface SSPurchaseManager : NSObject {
    NSObject<OS_dispatch_queue> *_completionBlockQueue;
    id<SSPurchaseManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_managerIdentifier;
    SSXPCConnection *_requestConnection;
    SSXPCConnection *_responseConnection;
}

@property (readonly) NSString *managerIdentifier;
@property id<SSPurchaseManagerDelegate> delegate;

- (void)getPurchasesUsingBlock:(id /* block */)a0;
- (id)_newEncodedArrayWithPurchases:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_sendMessage:(long long)a0 withPurchases:(id)a1 afterPurchase:(id)a2 completionBlock:(id /* block */)a3;
- (id)initWithManagerIdentifier:(id)a0;
- (BOOL)_resultForReply:(id)a0 error:(id *)a1;
- (void)_sendCompletionBlock:(id /* block */)a0 forGetPurchasesReply:(id)a1;
- (BOOL)_shouldInvalidateSubscriptionStatusForPurchaseResponse:(id)a0;
- (id)_newEncodedArrayWithPurchaseIdentifiers:(id)a0;
- (void)_sendCompletionBlock:(id /* block */)a0 forStandardReply:(id)a1;
- (void)_sendMessage:(long long)a0 withPurchaseIdentifiers:(id)a1 afterPurchase:(id)a2 completionBlock:(id /* block */)a3;
- (void)_handlePurchasesFinished:(id)a0 fromConnection:(id)a1;
- (void)cancelPurchases:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)insertPurchases:(id)a0 afterPurchase:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)_handleAuthenticateRequest:(id)a0 fromConnection:(id)a1;
- (id)_responseConnection;
- (void)_reconnectForDaemonLaunch;
- (void)_connectToDaemon;
- (void)movePurchases:(id)a0 afterPurchase:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)addPurchases:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)_requestConnection;
- (void)_handleMessage:(id)a0 fromConnection:(id)a1;

@end
