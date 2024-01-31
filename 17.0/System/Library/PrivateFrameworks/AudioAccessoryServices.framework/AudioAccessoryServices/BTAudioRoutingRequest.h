@class NSXPCListenerEndpoint, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface BTAudioRoutingRequest : NSObject <NSSecureCoding> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (nonatomic) int audioScore;
@property (copy, nonatomic) NSString *appBundleID;
@property (copy, nonatomic) NSString *deviceAddress;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) id /* block */ responseHandler;

- (id)init;
- (void)_activate;
- (BOOL)_ensureXPCStarted;
- (void)_invalidated;
- (void)_reportError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (void)activate;
- (id)description;
- (void).cxx_destruct;
- (void)_interrupted;
- (id)initWithCoder:(id)a0;
- (BOOL)isSystemContext;
- (void)_handleServerDied;
- (void)updateAudioState:(id)a0 withState:(unsigned int)a1;

@end
