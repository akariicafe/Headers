@class UIActivityIndicatorView, PKDynamicProvisioningFieldsPageContent, UIBarButtonItem;

@interface PKDynamicProvisioningFieldsPageViewController : PKPaymentSetupFieldsViewController {
    UIBarButtonItem *_cancelButton;
    BOOL _backHidden;
    UIBarButtonItem *_spinningNavBarItem;
    UIBarButtonItem *_hiddenRightBarButtonItem;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property (readonly, nonatomic) PKDynamicProvisioningFieldsPageContent *fieldsPage;
@property (readonly, nonatomic) BOOL isLoading;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_setNavigationBarEnabled:(BOOL)a0;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)handleCancelTapped;
- (void)handleNextButtonTapped:(id)a0;
- (id)initWithWebService:(id)a0 context:(long long)a1 setupDelegate:(id)a2 fieldsPage:(id)a3;
- (void)showSpinner:(BOOL)a0;

@end
