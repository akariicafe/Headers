@class NSString, NSObject;
@protocol OS_dispatch_queue, TRDeviceSetupPeripheralDelegate;

@interface TRDeviceSetupPeripheral : NSObject {
    BOOL _performingSetup;
    BOOL _preparingForSetup;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy) id /* block */ pendingSendDataHandler;
@property (copy, nonatomic) NSString *authenticatediTunesStoreID;
@property (weak, nonatomic) id<TRDeviceSetupPeripheralDelegate> delegate;

- (id)init;
- (void)_didDisconnect;
- (void).cxx_destruct;
- (void)_authenticateWithAction:(id)a0 replyHandler:(id /* block */)a1;
- (void)_cancelAuthenticationWithReceivedAction:(id)a0 replyHandler:(id /* block */)a1;
- (void)_cancelSetupWithAction:(id)a0 replyHandler:(id /* block */)a1;
- (void)_didReceiveData:(id)a0 replyHandler:(id /* block */)a1;
- (void)_didTapWithSendDataHandler:(id /* block */)a0;
- (void)_finishSetupWithAction:(id)a0 replyHandler:(id /* block */)a1;
- (void)_legacyAuthenticateWithAction:(id)a0 attemptCount:(unsigned long long)a1 replyHandler:(id /* block */)a2;
- (void)_legacyAuthenticateWithUserAgent:(id)a0 deviceGUID:(id)a1 accountID:(id)a2 password:(id)a3 attemptCount:(unsigned long long)a4 completion:(id /* block */)a5;
- (BOOL)_sendAction:(id)a0 sendDataHandler:(id /* block */)a1 error:(id *)a2;
- (void)_setUpWithAction:(id)a0 replyHandler:(id /* block */)a1;
- (void)_setupDidFailWithError:(id)a0 replyHandler:(id /* block */)a1;
- (void)_startAuthenticationWithReceivedAction:(id)a0 replyHandler:(id /* block */)a1;
- (void)cancelPreparingForSetup;
- (void)cancelSetupForStateChange;
- (void)cancelSetupForTimeout;
- (BOOL)performSetupAndReturnError:(id *)a0;

@end
