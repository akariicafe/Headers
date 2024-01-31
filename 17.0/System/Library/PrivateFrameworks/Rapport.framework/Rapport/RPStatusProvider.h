@class NSString, NSMutableDictionary, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, RPSignedInUserProvider;

@interface RPStatusProvider : NSObject <NSSecureCoding, RPStatusUpdatableXPCClientInterface, RPStatusUpdatableProvider> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    id<RPSignedInUserProvider> _userProvider;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSMutableDictionary *currentlyProviding;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) BOOL targetUserSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)_ensureXPCStarted;
- (void)_invalidated;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_interrupted;
- (id)initWithCoder:(id)a0;
- (void)_activateWithCompletion:(id /* block */)a0 reactivate:(BOOL)a1;
- (id)_connectionWithClient:(id)a0 queue:(id)a1 userProvider:(id)a2 interruptionHandler:(id /* block */)a3 invalidationHandler:(id /* block */)a4;
- (void)cancelStatusUpdate:(id)a0 completion:(id /* block */)a1;
- (void)provideStatusUpdate:(id)a0 statusInfo:(id)a1 completion:(id /* block */)a2;

@end
