@class NSHashTable, RBSProcessIdentity, NSXPCListenerEndpoint, NSArray, _EXLaunchConfiguration, _EXInternalHostConnection, BKSProcessAssertion, RBSAssertion, _EXExtensionProcessMannger;

@interface _EXExtensionProcessHandle : NSObject <NSSecureCoding> {
    BOOL _invalidationLock_invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _invalidationLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *sandboxExtensions;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } xpcConnectionLock;
@property (retain) NSHashTable *xpcConnections;
@property (weak) _EXExtensionProcessMannger *manager;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } observersLock;
@property (retain) NSHashTable *observers;
@property (weak) _EXInternalHostConnection *internalConnection;
@property (readonly) _EXLaunchConfiguration *launchConfiguration;
@property (readonly) struct { unsigned int val[8]; } auditToken;
@property (readonly) NSXPCListenerEndpoint *serviceListenerEndpoint;
@property (readonly) int pid;
@property (readonly) RBSAssertion *launchAssertion;
@property (readonly) BKSProcessAssertion *assertion;
@property (readonly) RBSProcessIdentity *processIdentity;
@property (readonly, getter=isValid) BOOL valid;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (id)description;
- (void)_handleAssertionInvalidation;
- (id)initWithLaunchConfiguration:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 processIdentity:(id)a2 sandboxExtensions:(id)a3 launchAssertion:(id)a4;
- (id)makeXPCConnectionRetainProcess:(BOOL)a0 withError:(id *)a1;
- (void).cxx_destruct;
- (id)configuration;
- (id)makeXPCConnection;
- (id)makeSessionXPCConnection;
- (void)addObserver:(id)a0;
- (id)acquireAsertionWithError:(id *)a0;
- (id)initWithCoder:(id)a0;

@end
