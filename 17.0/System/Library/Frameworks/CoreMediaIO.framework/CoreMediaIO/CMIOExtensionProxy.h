@class NSString, NSMutableArray, NSObject;
@protocol OS_xpc_object, CMIOExtensionProxyDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CMIOExtensionProxy : NSObject <CMIOExtensionProxyContextDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_xpc_object> *_listener;
    NSObject<OS_xpc_object> *_endpoint;
    NSObject<OS_xpc_object> *_proxyEndpoint;
    id<CMIOExtensionProxyDelegate> _delegate;
    int _extensionPID;
    int _activeStreams;
    NSMutableArray *_contexts;
    NSObject<OS_dispatch_queue> *_updateStreamStateQueue;
    NSObject<OS_dispatch_source> *_updateStreamStateTimer;
    BOOL _updateStreamStateTimerActive;
}

@property (readonly) NSObject<OS_xpc_object> *endpoint;
@property (readonly) NSObject<OS_xpc_object> *proxyEndpoint;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyWithEndpoint:(id)a0 extensionPID:(int)a1 delegate:(id)a2;

- (void)dealloc;
- (void)invalidate;
- (void)addConnection:(id)a0;
- (void)proxyContextHasBeenInvalidated:(id)a0;
- (id)initWithEndpoint:(id)a0 extensionPID:(int)a1 delegate:(id)a2;
- (void)proxyStreamHasStarted;
- (void)proxyStreamsHaveStopped:(int)a0;

@end
