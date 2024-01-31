@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface ENXPCServiceListener : NSObject {
    NSMutableSet *_connections;
    NSObject<OS_xpc_object> *_xpcListener;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcEndpoint;

+ (id)sharedServiceListener;

- (id)_init;
- (void)main;
- (void)invalidate;
- (void)activate;
- (id)initAnonymousListener;
- (void).cxx_destruct;
- (void)connectionInvalidated:(id)a0;
- (void)xpcConnectionAccept:(id)a0;
- (void)xpcListenerEvent:(id)a0;

@end
