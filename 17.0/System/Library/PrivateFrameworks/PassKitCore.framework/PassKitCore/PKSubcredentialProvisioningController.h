@class PKSubcredentialProvisioningOperation, NSString, PKSubcredentialProvisioningOperationContext, PKSubcredentialProvisioningTransitionTable, PKAppletSubcredential, NSObject, PKAssertion, PKPaymentPass, PKSubcredentialProvisioningConfiguration;
@protocol OS_dispatch_queue, PKSubcredentialProvisioningControllerDelegate;

@interface PKSubcredentialProvisioningController : NSObject <PKSubcredentialProvisioningOperationDelegate, PKAppletSubcredentialPairingSessionDelegate> {
    PKSubcredentialProvisioningConfiguration *_configuration;
    PKSubcredentialProvisioningOperationContext *_context;
    PKSubcredentialProvisioningTransitionTable *_transitionTable;
    NSObject<OS_dispatch_queue> *_operationSerialQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BOOL _hasStarted;
    BOOL _hasBeenCanceled;
    PKAssertion *_userNotificationAssertion;
    PKAssertion *_fieldDetectSuppressionAssertion;
    PKAssertion *_contactlessInterfaceSuppressionAssertion;
    PKSubcredentialProvisioningOperation *_currentOperation;
    long long _currentState;
    PKPaymentPass *_provisionedPass;
    PKAppletSubcredential *_addedCredential;
    id /* block */ _cancelCompletion;
}

@property (weak, nonatomic) id<PKSubcredentialProvisioningControllerDelegate> delegate;
@property (readonly, nonatomic) PKAppletSubcredential *addedCredential;
@property (readonly, nonatomic) PKPaymentPass *provisionedPass;
@property (readonly, nonatomic) long long currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)appletSubcredentialPairingSession:(id)a0 didFinishProbingTerminalWithError:(id)a1 brandCode:(unsigned long long)a2;
- (void)appletSubcredentialPairingSession:(id)a0 didEndPairingWithError:(id)a1;
- (void)appletSubcredentialPairingSessionDidFirstTransaction:(id)a0 withError:(id)a1;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;
- (void)appletSubcredentialPairingSessionDidBeginPairing:(id)a0;
- (void).cxx_destruct;
- (void)appletSubcredentialPairingSession:(id)a0 didEndPairingWithSubcredential:(id)a1 registrationData:(id)a2;
- (void)appletSubcredentialPairingSession:(id)a0 didFinishPreWarmWithResult:(id)a1;
- (void)_canBeginProvisioning:(id /* block */)a0;
- (void)acquireProvisioningAssertionsWithCompletion:(id /* block */)a0;
- (void)cancelProvisioningWithCompletion:(id /* block */)a0;
- (void)cleanUpProvisioningAfterError:(BOOL)a0;
- (void)declineRelatedInvitationsIfNecessary;
- (void)finishProvisioningWithError:(id)a0 state:(long long)a1;
- (void)operation:(id)a0 addedCredential:(id)a1;
- (void)operation:(id)a0 addedPass:(id)a1;
- (void)operation:(id)a0 advanceToState:(long long)a1;
- (void)operation:(id)a0 failWithError:(id)a1;
- (void)operationWasCanceled:(id)a0;
- (void)releaseProvisioningAssertions;
- (void)startProvisioningWithConfiguration:(id)a0;
- (void)transitionToState:(long long)a0 withOperation:(id)a1 error:(id)a2;
- (id)webServiceFromConfiguration:(id)a0;

@end
