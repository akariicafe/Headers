@class SFSession, SFDevice, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SFContinuityRemoteSession : NSObject {
    BOOL _activateCalled;
    id /* block */ _activateHandler;
    BOOL _invalidateCalled;
    NSMutableArray *_messageQueue;
    BOOL _pairVerifyDone;
    BOOL _pairVerifyRunning;
    SFSession *_sfSession;
    BOOL _sfSessionActivated;
    BOOL _started;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) SFDevice *peerDevice;

- (void)_cleanup;
- (void)_run;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_sfSessionStart;
- (void)_sendCommand:(int)a0 options:(id)a1;
- (void)_sendQueuedMesssages;
- (void)sendCommand:(int)a0;
- (void)sendCommand:(int)a0 options:(id)a1;

@end
