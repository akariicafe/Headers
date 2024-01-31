@class PKPaymentSetupProductsSectionController, NSString, NSArray, PKPaymentSetupProduct, PKPaymentSetupProductCategory;
@protocol PKPaymentSetupProductsViewControllerFlowDelegate;

@interface PKPaymentSetupProductsViewController : PKPaymentSetupOptionsViewController <PKPaymentSetupProductsSectionControllerDelegate, PKPaymentSetupActivitySpinnerProtocol, PKPaymentProvisioningControllerDelegate, PKLoadingUIProviding, PKPaymentSetupPresentationProtocol> {
    PKPaymentSetupProductCategory *_category;
    NSArray *_paymentSetupProducts;
    PKPaymentSetupProductsSectionController *_primaryProductSectionController;
    PKPaymentSetupProduct *_currentlyLoadingProduct;
}

@property (weak, nonatomic) id<PKPaymentSetupProductsViewControllerFlowDelegate> flowDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)reloadData;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)provisioningControllerUpdatedProducts:(id)a0;
- (void)_didSelectAddADifferentCard;
- (void)_didSelectAddADifferentCardWithCompletion:(id /* block */)a0;
- (BOOL)didSelectManualEntryWithCompletion:(id /* block */)a0;
- (BOOL)didSelectProduct:(id)a0 completion:(id /* block */)a1;
- (void)displayNoResultsViewWithSubtitle:(id)a0 needsManualEntryButton:(BOOL)a1;
- (void)hideNoResultsView;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 delegate:(id)a2 category:(id)a3 paymentSetupProducts:(id)a4;
- (unsigned long long)paymentSetupMarker;
- (void)reloadSectionIdentifier:(id)a0 animated:(BOOL)a1;
- (void)reloadSectionsRequired;
- (void)searchBarCancelButtonClicked;
- (void)searchTextDidChangeTo:(id)a0;
- (void)showLoadingUI:(BOOL)a0 animated:(BOOL)a1;

@end
