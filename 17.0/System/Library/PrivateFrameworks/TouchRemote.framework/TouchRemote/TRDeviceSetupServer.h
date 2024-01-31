@class NSObject, NSString, NSMutableDictionary, NSData, NSMutableArray, TRTransferServer;
@protocol TRDeviceSetupServerDelegate, OS_dispatch_semaphore;

@interface TRDeviceSetupServer : NSObject <TRTransferServerDelegate> {
    TRTransferServer *_transferServer;
    NSData *_dataToSend;
    NSObject<OS_dispatch_semaphore> *_dataToSendSemaphore;
    BOOL _cancelledSetupInProgress;
    int _notifyToken;
    BOOL _notifyTokenIsValid;
    BOOL _setupInProgress;
    BOOL _started;
}

@property (retain, nonatomic) NSMutableArray *accountsToAuthenticate;
@property (retain, nonatomic) NSMutableDictionary *cachedAuthInfo;
@property (weak, nonatomic) id<TRDeviceSetupServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)_finishWithAction:(id)a0 replyHandler:(id /* block */)a1;
- (void)_cancelWithAction:(id)a0 replyHandler:(id /* block */)a1;
- (void)_authenticateAccount:(unsigned long long)a0 withAuthInfo:(id)a1 completion:(id /* block */)a2;
- (void)_authenticateWithAction:(id)a0 replyHandler:(id /* block */)a1;
- (void)_cancelTransferConnection;
- (void)_connectWithAction:(id)a0 replyHandler:(id /* block */)a1;
- (void)_finishSetupWithError:(id)a0 replyHandler:(id /* block */)a1;
- (void)_requestAuthenticationForAccount:(unsigned long long)a0 replyHandler:(id /* block */)a1;
- (void)_requestAuthenticationForNextAccountWithReplyHandler:(id /* block */)a0;
- (void)_requestAuthenticationFromPeripheralForAccount:(unsigned long long)a0 lastAttemptAction:(id)a1 lastAttemptError:(id)a2 replyHandler:(id /* block */)a3;
- (void)_requestGeneralSetupWithReplyHandler:(id /* block */)a0;
- (BOOL)_sendAction:(id)a0 sendDataHandler:(id /* block */)a1 shouldSendNilOnFailure:(BOOL)a2 error:(id *)a3;
- (void)_setUpWithAction:(id)a0 replyHandler:(id /* block */)a1;
- (void)cancelActiveSetup;
- (void)server:(id)a0 didFailToReceiveData:(id)a1;
- (void)server:(id)a0 didReceiveData:(id)a1 replyHandler:(id /* block */)a2;
- (void)serverWillReceiveData:(id)a0;

@end
