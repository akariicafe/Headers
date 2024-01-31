@class RPDevice, NSString, CUMobileDeviceSession, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface RPLegacySession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableArray *_messageSendQueue;
    BOOL _messagingReady;
    int _pairVerifyState;
    BOOL _secureReady;
    BOOL _mdEnabled;
    CUMobileDeviceSession *_mdSession;
    int _mdState;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) RPDevice *peerDevice;
@property (nonatomic) unsigned int securityFlags;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ promptForPINHandler;

- (void)_cleanup;
- (void)_run;
- (id)init;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_sendMessage:(id)a0;
- (void)_pairSetupWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void)pairVerifyWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void)_pairSetupTryPIN:(id)a0;
- (void)_pairVerifyWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void)_unpairWithCompletion:(id /* block */)a0;
- (void)pairSetupTryPIN:(id)a0;
- (void)pairSetupWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void)registerRequestID:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)sendRequestID:(id)a0 options:(id)a1 request:(id)a2 responseHandler:(id /* block */)a3;
- (void)unpairWithCompletion:(id /* block */)a0;
- (int)_runPairVerify;
- (int)_runMobileDeviceStart;
- (void)_sendQueuedMessages;
- (void)requestSystemInfoWithCompletion:(id /* block */)a0;

@end
