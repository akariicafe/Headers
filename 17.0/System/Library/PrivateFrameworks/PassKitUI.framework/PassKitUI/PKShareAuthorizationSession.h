@class LAContext;

@interface PKShareAuthorizationSession : NSObject {
    LAContext *_context;
}

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)authorizeDeviceOwnerWithAuthHandler:(id /* block */)a0 completion:(id /* block */)a1;

@end
