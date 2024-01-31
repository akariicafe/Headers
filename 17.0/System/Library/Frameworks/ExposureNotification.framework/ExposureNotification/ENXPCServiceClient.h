@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface ENXPCServiceClient : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_xpc_object> *_xpcConnection;
    BOOL _invalidated;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *testListenerEndpoint;

- (id)init;
- (void)dealloc;
- (void)_xpcReceivedEvent:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)getXPCConnectionAndReturnError:(id *)a0;
- (id)_ensureXPCStartedAndReturnError:(id *)a0;
- (void)_invalidateForced:(BOOL)a0;

@end
