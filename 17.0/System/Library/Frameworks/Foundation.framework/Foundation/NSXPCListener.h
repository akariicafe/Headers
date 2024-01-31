@class NSXPCListenerEndpoint, NSString, NSObject, OS_xpc_remote_connection;
@protocol OS_xpc_object, OS_dispatch_queue, NSXPCListenerDelegate;

@interface NSXPCListener : NSObject {
    union { NSObject<OS_xpc_object> *xpc; OS_xpc_remote_connection *remote; } _connection;
    NSObject<OS_dispatch_queue> *_userQueue;
    _Atomic id _delegate;
    NSString *_serviceName;
    unsigned long long _state;
    unsigned char _remote;
}

@property (weak) id<NSXPCListenerDelegate> delegate;
@property (readonly, retain) NSXPCListenerEndpoint *endpoint;

+ (id)anonymousListener;
+ (id)_UUID;
+ (id)serviceListener;
+ (void)enableTransactions;

- (void)_setQueue:(id)a0;
- (id)_queue;
- (void)dealloc;
- (void)setOptions:(unsigned long long)a0;
- (void)suspend;
- (id)_xpcConnection;
- (void)__receiveRemoteConnection:(id)a0;
- (id)_initShared;
- (id)_initWithRemoteName:(id)a0;
- (id)__initWithoutRemoteConnection;
- (void)invalidate;
- (id)serviceName;
- (void)activate;
- (void)stop;
- (id)initWithServiceName:(id)a0;
- (id)description;
- (void)resume;
- (id)initWithMachServiceName:(id)a0;

@end
