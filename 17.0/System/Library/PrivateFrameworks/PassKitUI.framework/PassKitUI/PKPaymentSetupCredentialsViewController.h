@class NSString, PKPaymentSetupProduct, LAContext, PKPaymentSetupCredentialsSectionController;
@protocol PKPaymentSetupCredentialsViewControllerFlowDelegate;

@interface PKPaymentSetupCredentialsViewController : PKPaymentSetupOptionsViewController <PKPaymentSetupCredentialsSectionControllerDelegate, PKDynamicListDataChangeDelegate, PKLoadingUIProviding, PKPaymentSetupPresentationProtocol> {
    PKPaymentSetupCredentialsSectionController *_sectionController;
    BOOL _isDockViewConfigured;
    PKPaymentSetupProduct *_product;
    LAContext *_localAuthenticationContext;
    BOOL _didBeginWalletProvisioningSubject;
}

@property (weak, nonatomic) id<PKPaymentSetupCredentialsViewControllerFlowDelegate> flowDelegate;
@property (nonatomic) unsigned long long showPrivacyDisclosure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_beginReportingIfNecessary;
- (void)presentRefundFlowForCredential:(id)a0;
- (void)reloadAnimated:(BOOL)a0;
- (id)_analyticsPageTag;
- (void)_configureAndUpdateDockView;
- (void)_continueButtonPressed;
- (void)_endReportingIfNecessary;
- (void)_presentCredentialDoubleCheckAlert:(id)a0 continueHandler:(id /* block */)a1 setupLaterHandler:(id /* block */)a2;
- (void)_presentManualAddController;
- (void)_presentProvisioningFlowForCredentials:(id)a0;
- (BOOL)_readerModeIsSupported;
- (void)_requestAuthAndStartProvisioningForCredentials:(id)a0;
- (void)_requestExternalizedAuthIfNeededWithCompletion:(id /* block */)a0;
- (void)_setUserInteractionEnabled:(BOOL)a0;
- (void)_setupLaterTapped;
- (void)_terminateSetupFlow;
- (void)_toggleEdit;
- (void)_transferExistingCardTapped;
- (void)_updateEditButtonVisibility;
- (void)credentialSelectionDidChange;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 credentials:(id)a2 product:(id)a3 allowsManualEntry:(BOOL)a4;
- (void)presentUnavailableDetailsForCredential:(id)a0;
- (void)setShowNoResultsView:(BOOL)a0;
- (void)showCredentialDeletionError;
- (void)showDeleteConfirmationWithCompletion:(id /* block */)a0;
- (void)showLoadingUI:(BOOL)a0 animated:(BOOL)a1;
- (void)showMaxSelectionAlertForCredential:(id)a0;
- (void)showUnableToDeleteCredentialError;
- (void)showUnableToDeleteSafariCredentialError;

@end
