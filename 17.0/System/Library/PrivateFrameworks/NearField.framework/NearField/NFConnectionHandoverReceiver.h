@class NFConnectionHandoverSelect, NFHCESession, NSString, NFTimer, NSObject;
@protocol NFConnectionHandoverReceiverDelegate;

@interface NFConnectionHandoverReceiver : NFConnectionHandoverController <NFHCESessionDelegate, NFFieldDetectSessionDelegate>

@property (retain, nonatomic) NFHCESession *hceSession;
@property (nonatomic) BOOL hceAppSelected;
@property (retain, nonatomic) NFConnectionHandoverSelect *pendingCHSelect;
@property (retain, nonatomic) NFTimer *emuAssertTimer;
@property (copy, nonatomic) id /* block */ delaySendSelectCompletion;
@property (nonatomic) BOOL didConnect;
@property (weak, nonatomic) NSObject<NFConnectionHandoverReceiverDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)receiverWithDelegate:(id)a0;
+ (id)receiverWithDelegate:(id)a0 callbackQueue:(id)a1;

- (void)_start;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_stopWithError:(id)a0;
- (void)_processConnect;
- (BOOL)_processSelectCommand:(id)a0 response:(id)a1;
- (id)initWithDelegate:(id)a0 callbackQueue:(id)a1;
- (void)_emuAssertTimerExpired;
- (void)_processDisconnect;
- (void)_processRetryRequest:(id)a0;
- (void)_sendFailureAPDU;
- (void)hceSession:(id)a0 didReceiveAPDU:(id)a1;
- (void)hceSession:(id)a0 didReceiveField:(id)a1;
- (void)hceSessionDidConnect:(id)a0;
- (void)hceSessionDidDisconnect:(id)a0;
- (void)hceSessionDidEndUnexpectedly:(id)a0;
- (void)sendHandoverSelect:(id)a0 delay:(double)a1 completionHandler:(id /* block */)a2;
- (BOOL)sendHandoverSelect:(id)a0 error:(id *)a1;

@end
