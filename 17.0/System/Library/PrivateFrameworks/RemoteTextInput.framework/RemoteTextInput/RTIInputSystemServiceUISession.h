@class BSProcessHandle;

@interface RTIInputSystemServiceUISession : RTIInputSystemServiceSession {
    BSProcessHandle *_remoteProcess;
}

+ (id)sessionWithConnection:(id)a0 remoteProcess:(id)a1;

- (int)pid;
- (id)valueForEntitlement:(id)a0;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 remoteProcess:(id)a1;

@end
