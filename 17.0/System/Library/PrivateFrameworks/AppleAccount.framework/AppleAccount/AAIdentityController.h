@class AAIdentityDaemonConnection;

@interface AAIdentityController : NSObject {
    AAIdentityDaemonConnection *_daemonConnection;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDaemonXPCEndpoint:(id)a0;

@end
