@class CUMobileDevice, CURunLoopThread, NSObject;
@protocol OS_dispatch_queue;

@interface CUMobileDeviceSession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    CURunLoopThread *_mdRunLoopThread;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) CUMobileDevice *peerDevice;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ promptForPINHandler;

- (id)init;
- (void)_invalidated;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (void)_pairSetupWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void)pairVerifyWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void)_pairSetupTryPIN:(id)a0;
- (void)_pairVerifyWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void)_unpairWithCompletion:(id /* block */)a0;
- (void)pairSetupTryPIN:(id)a0;
- (void)pairSetupWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void)unpairWithCompletion:(id /* block */)a0;

@end
