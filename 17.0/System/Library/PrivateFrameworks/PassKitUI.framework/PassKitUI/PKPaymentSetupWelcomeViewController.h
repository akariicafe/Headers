@class PKPaymentSetupProductModel, NSString, PKPaymentSetupAppExtensionsSectionController, PKPaymentSetupCategoriesSectionController;
@protocol PKPaymentSetupWelcomeViewControllerFlowDelegate;

@interface PKPaymentSetupWelcomeViewController : PKPaymentSetupOptionsViewController <PKLoadingUIProviding, PKPaymentSetupCategoriesSectionControllerDelegate, PKPaymentSetupAppExtensionsSectionControllerDelegate, PKPaymentSetupActivitySpinnerProtocol, PKViewControllerPreflightable, PKPaymentProvisioningControllerDelegate> {
    PKPaymentSetupCategoriesSectionController *_categoriesSectionController;
    PKPaymentSetupAppExtensionsSectionController *_appExtensionSectionController;
    NSString *_loadingIdentifier;
    PKPaymentSetupProductModel *_filteredPaymentSetupProductModel;
    unsigned long long _currentConfiguredRequirements;
    BOOL _isDisplayingError;
    BOOL _didPreflight;
}

@property (weak, nonatomic) id<PKPaymentSetupWelcomeViewControllerFlowDelegate> flowDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)preflightRequirementsUpdated:(unsigned long long)a0 displayableError:(id)a1;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)provisioningControllerUpdatedAccounts:(id)a0;
- (void)provisioningControllerUpdatedProducts:(id)a0;
- (BOOL)_didSelectItemWithIdentifier:(id)a0 title:(id)a1 category:(id)a2 productIdentifiers:(id)a3 completion:(id /* block */)a4;
- (void)_updateFilteredPaymentSetupProductModelForRequirements:(unsigned long long)a0 provisoningController:(id)a1 forceReload:(BOOL)a2;
- (void)_updateHeaderContentsWithProvisoningController:(id)a0;
- (BOOL)didSelectAppExtensionWithIdentifier:(id)a0 title:(id)a1 completion:(id /* block */)a2;
- (BOOL)didSelectCategory:(id)a0 completion:(id /* block */)a1;
- (BOOL)didSelectYourCardsWithCompletion:(id /* block */)a0;
- (void)didTapFooterLink:(id)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 delegate:(id)a2;
- (void)reloadRequiredForSectionIdentifier:(id)a0 animated:(BOOL)a1;
- (void)reloadSectionsForRequirements:(unsigned long long)a0 animated:(BOOL)a1 forceReload:(BOOL)a2;
- (void)showLoadingUI:(BOOL)a0 animated:(BOOL)a1;

@end
