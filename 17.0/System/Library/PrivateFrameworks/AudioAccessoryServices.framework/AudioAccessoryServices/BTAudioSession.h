@class NSXPCListenerEndpoint, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BTAudioSession : NSObject <NSSecureCoding> {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (nonatomic) int audioArbitrationResult;
@property (nonatomic) int category;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) BOOL inAppRouting;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) double timeoutSeconds;
@property (nonatomic) int mode;

- (id)init;
- (void)_activate;
- (void)dealloc;
- (void)_ensureXPCStarted;
- (void)_invalidated;
- (void)_reportError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_interrupted;
- (id)initWithCoder:(id)a0;

@end
