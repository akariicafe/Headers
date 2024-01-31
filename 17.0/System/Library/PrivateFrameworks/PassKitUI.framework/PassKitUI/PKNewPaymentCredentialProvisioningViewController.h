@class PKPaymentCredentialMetadataTableController, NSString, PKPaymentProvisioningController, UIImage, PKPaymentCredential, PKPaymentSetupProduct;
@protocol PKPaymentCredentialProvisioningViewControllerCoordinator;

@interface PKNewPaymentCredentialProvisioningViewController : PKPaymentSetupProvisioningFieldsViewController <PKProvisioningFieldsUIRenderer, PKLoadingUIProviding, PKPaymentProvisioningControllerDelegate> {
    unsigned long long _credentialProvisioningType;
    unsigned long long _displayType;
    unsigned long long _category;
    BOOL _shouldAutoProvision;
    PKPaymentProvisioningController *_provisioningController;
    UIImage *_passSnapshotPlaceHolder;
    PKPaymentCredentialMetadataTableController *_metadataController;
    PKPaymentCredential *_paymentCredential;
    PKPaymentSetupProduct *_setupProduct;
    BOOL _allowsManualEntry;
    BOOL _previouslyAcceptedTerms;
    UIImage *_passSnapshot;
    BOOL _passSnapshotNeedsCorners;
    struct CGSize { double width; double height; } _passSnapshotOverrideSize;
}

@property (nonatomic) BOOL hasRemainingCredentialsToProvision;
@property (nonatomic) BOOL showSkipButton;
@property (retain, nonatomic) id<PKPaymentCredentialProvisioningViewControllerCoordinator> coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isComplete;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)paymentPassUpdatedOnCredential:(id)a0;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)_createPassSnapshotFromPaymentPass:(id)a0 completion:(id /* block */)a1;
- (id)_defaultHeaderViewSubTitleForLocalCredential;
- (id)_defaultHeaderViewSubTitleForLocalCredentialTransfer;
- (id)_remoteExistingCredentialDefaultHeaderViewSubTitle;
- (void)_skipCard;
- (void)_updatePassSnapshotHeader;
- (void)addDifferentCard:(id)a0;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)didTransitionTo:(long long)a0 loading:(BOOL)a1;
- (void)didUpdateFieldModel;
- (void)handleNextButtonTapped:(id)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 paymentCredential:(id)a2 setupProduct:(id)a3 allowsManualEntry:(BOOL)a4;
- (id)readonlyFieldIdentifiers;
- (void)setPassSnapshot:(id)a0 needsCorners:(BOOL)a1;
- (void)showLoadingUI:(BOOL)a0 animated:(BOOL)a1;
- (void)showWithProvisioningError:(id)a0;
- (id)visibleFieldIdentifiers;

@end
