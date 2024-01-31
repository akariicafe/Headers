@class NSObject, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CMIOExtensionProviderServer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listener;
    NSObject<OS_xpc_object> *_endpoint;
    NSString *_serviceName;
}

@property (class, readonly) CMIOExtensionProviderServer *sharedServer;

@property (readonly, nonatomic) BOOL internalDaemon;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)addConnection:(id)a0;

@end
