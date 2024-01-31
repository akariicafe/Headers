@class NSSet, NSXPCConnection, NSXPCInterface, NSString, NSObject;
@protocol OS_dispatch_queue, TUCallHistoryControllerXPCServer;

@interface TUCallHistoryControllerXPCClient : NSObject <TUCallHistoryControllerXPCClient, TUCallHistoryControllerDataSource>

@property (class, readonly, copy, nonatomic) NSSet *callHistoryControllerAllowedClasses;
@property (class, retain, nonatomic) id<TUCallHistoryControllerXPCServer> asynchronousServer;
@property (class, retain, nonatomic) id<TUCallHistoryControllerXPCServer> synchronousServer;
@property (class, readonly, nonatomic) NSXPCInterface *callHistoryControllerClientXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *callHistoryControllerServerXPCInterface;

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) BOOL hasRequestedInitialState;
@property (nonatomic) BOOL hasInitialState;
@property (nonatomic) int shouldConnectToken;
@property (nonatomic) BOOL shouldConnectToHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invokeCompletionHandler:(id /* block */)a0;
- (id)synchronousServerWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)asynchronousServerWithErrorHandler:(id /* block */)a0;
- (void)_requestInitialStateIfNecessary;
- (void)registerWithCompletionHandler:(id /* block */)a0;
- (void)_requestInitialStateWithCompletionHandler:(id /* block */)a0;
- (void)allCallHistoryDeleted;
- (void)recentCallsDeleted:(id)a0;

@end
