@class NSObject, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface AAAudioSessionControl : NSObject <NSSecureCoding> {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _direct;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (nonatomic) int conversationDetectSignal;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (id)init;
- (void)_ensureXPCStarted;
- (void)_invalidated;
- (void)_invalidateDirect;
- (void)_reportError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_interrupted;
- (void)_activate:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)setMuteAction:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1 bundleIdentifier:(id)a2;
- (BOOL)isSystemContext;
- (void)_activateDirect:(id /* block */)a0;
- (void)_activateXPC:(id /* block */)a0 reactivate:(BOOL)a1;
- (void)setMuteAction:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;

@end
