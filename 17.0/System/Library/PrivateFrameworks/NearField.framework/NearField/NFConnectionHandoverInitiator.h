@class NFConnectionHandoverRequest, NSObject, NSString, NFTimer, NFTag, NFReaderSession;
@protocol NFConnectionHandoverInitiatorDelegate;

@interface NFConnectionHandoverInitiator : NFConnectionHandoverController <NFReaderSessionDelegate>

@property (retain, nonatomic) NFReaderSession *readerSession;
@property (retain, nonatomic) NFTag *connectedTag;
@property (retain, nonatomic) NFConnectionHandoverRequest *delayRequest;
@property (copy, nonatomic) id /* block */ delayRequestCompletion;
@property (retain, nonatomic) NFTimer *delayRequestTimer;
@property (retain, nonatomic) NFTimer *tagConnectionTimer;
@property (weak, nonatomic) NSObject<NFConnectionHandoverInitiatorDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initiatorWithDelegate:(id)a0;
+ (id)initiatorWithDelegate:(id)a0 callbackQueue:(id)a1;

- (void)_start;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)readerSession:(id)a0 didDetectTags:(id)a1;
- (void)readerSession:(id)a0 externalReaderFieldNotification:(id)a1;
- (void)readerSessionDidEndUnexpectedly:(id)a0;
- (void)readerSessionDidEndUnexpectedly:(id)a0 reason:(id)a1;
- (void)_stopWithError:(id)a0;
- (id)initWithDelegate:(id)a0 callbackQueue:(id)a1;
- (void)_delayRequestDidExpire;
- (BOOL)_processSelectResponse:(id)a0;
- (void)_processSelectRetry:(id)a0 originalRequest:(id)a1 responseHandler:(id /* block */)a2;
- (void)_tagConnectionDidExpire;
- (void)_triggerDelayRequestCompletionWithSelect:(id)a0 error:(id)a1;
- (void)send:(id)a0 responseHandler:(id /* block */)a1;
- (void)sendHandoverRequest:(id)a0 responseHandler:(id /* block */)a1;

@end
