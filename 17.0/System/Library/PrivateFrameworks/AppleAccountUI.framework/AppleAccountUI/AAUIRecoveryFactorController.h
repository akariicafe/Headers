@class AAUICDPHelper, NSString, CDPStateController, AAUICustodianSetupFlowController, AIDAAccountManager, CDPWalrusStateController, UIViewController;
@protocol AAUIRecoveryFactorControllerDelegate;

@interface AAUIRecoveryFactorController : AARecoveryFactorController <AAUICustodianSetupFlowControllerDelegate> {
    AAUICustodianSetupFlowController *_custodianFlowController;
    AAUICDPHelper *_cdpHelper;
    CDPStateController *_stateController;
    CDPWalrusStateController *_walrusStateController;
}

@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (weak, nonatomic) id<AAUIRecoveryFactorControllerDelegate> delegate;
@property (nonatomic) BOOL forceInlinePresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)authenticateAndGenerateNewRecoveryKeyWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_stateController;
- (id)_cdpHelper;
- (id)_custodianFlowController;
- (void)_custodianFlowControllerWithCompletion:(id /* block */)a0;
- (void)_handleRecoveryKeyOperationResultWithSuccess:(BOOL)a0 error:(id)a1 operationDescription:(id)a2 completion:(id /* block */)a3;
- (id)_walrusStateController;
- (void)authenticateAndDeleteRecoveryKeyFromAllSystemsWithCompletion:(id /* block */)a0;
- (void)custodianSetupFlowControllerDidFinish:(id)a0;
- (void)custodianSetupFlowControllerRecoveryContactInviteSent;
- (void)deleteRecoveryKeyFromAllSystems:(id /* block */)a0;
- (id)followUpUniqueIdentifier;
- (void)generateRecoveryKeyWithCompletion:(id /* block */)a0;
- (id)initWithAccountManager:(id)a0 presentingViewController:(id)a1;
- (void)startAddingDataRecoveryService;
- (void)startAddingRecoveryContact;
- (void)validateRecoveryKeyWithCompletion:(id /* block */)a0;

@end
