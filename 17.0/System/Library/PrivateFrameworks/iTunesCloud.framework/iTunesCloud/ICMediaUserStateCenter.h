@class NSMutableArray, NSArray, ICMediaUserState, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface ICMediaUserStateCenter : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_xpcConnection;
    NSMutableArray *_refreshUserStateCompletionHandlers;
    NSObject<OS_dispatch_queue> *_completionHandlersQueue;
}

@property (class, readonly, nonatomic) ICMediaUserStateCenter *shared;

@property (copy, nonatomic) NSArray *allUserStates;
@property (readonly, nonatomic) ICMediaUserState *activeUserState;

- (void)dealloc;
- (void)_clearConnection;
- (void).cxx_destruct;
- (id)initLazily;
- (void)_onAsyncServer:(id /* block */)a0;
- (void)_applyServerStateUpdatedWithUserStates:(id)a0;
- (id)_establishClientConnection;
- (id)_getUserStatesCacheOnly;
- (id)_getUserStatesForcingRefresh:(BOOL)a0;
- (void)_handleServerStateUpdatedNotification:(id)a0;
- (id)_initLazily:(BOOL)a0;
- (void)_onSyncServer:(id /* block */)a0;
- (void)refreshUserStatesWithCompletion:(id /* block */)a0;
- (void)refreshUserStatesWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;

@end
