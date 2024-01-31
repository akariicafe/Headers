@class NSUUID, NSObject;
@protocol OS_xpc_object;

@interface BSXPCServiceConnectionRootClientEndpointContext : BSXPCServiceConnectionRootContext {
    BOOL _nonLaunching;
    NSObject<OS_xpc_object> *_endpoint;
    NSUUID *_oneshot;
}

- (BOOL)isClient;
- (void).cxx_destruct;
- (BOOL)isNonLaunching;

@end
