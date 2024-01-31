@class PKFieldDetector, NSString, NSDictionary, NSObject, PKPass;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NPKFakePaymentSession : NPKQuickPaymentSession <PKFieldDetectorObserver>

@property (retain, nonatomic) PKPass *ourCurrentPass;
@property (retain, nonatomic) NSDictionary *ourVasPasses;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ourCallbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ourInternalQueue;
@property (nonatomic) BOOL ourConfirmed;
@property (nonatomic) BOOL ourInServiceMode;
@property (nonatomic) BOOL ourPerformedFirstActivation;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;
@property (retain, nonatomic) PKFieldDetector *fieldDetector;
@property (nonatomic) BOOL invalidated;
@property (nonatomic) unsigned long long changeCardToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)startSession;
- (void)setCredential:(id)a0;
- (void)fieldDetectorDidEnterField:(id)a0 withProperties:(id)a1;
- (BOOL)sessionStarted;
- (id)vasPasses;
- (void)setCurrentPass:(id)a0;
- (void)_handleSessionHasCredentialIfNecessaryWithCurrentPass:(id)a0;
- (void)_handleTimeoutTimer;
- (void)_handleTransactionCompleteDarwinNotification;
- (void)_scheduleDidActivateEventForPass:(id)a0;
- (void)_sendTransactionCompleteToDelegate;
- (void)_setTimeoutTimer;
- (void)confirmSessionExpectingCredential:(BOOL)a0;
- (id)currentPass;
- (void)deactivateSessionWithCompletion:(id /* block */)a0;
- (BOOL)deferAuthorization;
- (BOOL)inServiceMode;
- (void)setDeferAuthorization:(BOOL)a0;
- (void)setInServiceMode:(BOOL)a0;
- (void)setVasPasses:(id)a0;

@end
