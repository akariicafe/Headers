@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface PCMediaTransferObserver : NSObject <NSSecureCoding> {
    BOOL _activateCalled;
    BOOL _invalidated;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ transferBeganHandler;
@property (copy, nonatomic) id /* block */ transferEndedHandler;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void)_xpcEnsureStopped;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_interrupted;
- (void)_invalidateWithError:(id)a0;
- (void)_xpcEnsureStarted;
- (id)initWithCoder:(id)a0;
- (void)transferBeganWithContext:(id)a0;
- (void)transferEnded;

@end
