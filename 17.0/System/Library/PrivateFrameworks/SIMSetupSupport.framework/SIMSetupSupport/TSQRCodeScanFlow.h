@class NSString, NSError, UIBarButtonItem;

@interface TSQRCodeScanFlow : TSSIMSetupFlow <TSCellularPlanManagerCacheDelegate, TSSIMSetupFlowDelegate>

@property (retain) UIBarButtonItem *cancelButton;
@property BOOL withBackButton;
@property BOOL confirmationCodeRequired;
@property BOOL isPreinstallingViewControllerActive;
@property unsigned long long userConsentType;
@property long long signupUserConsentResponse;
@property (retain) NSString *name;
@property (retain) NSError *planInstallError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)handleError:(id)a0;
- (void).cxx_destruct;
- (id)firstViewController;
- (void)viewControllerDidComplete:(id)a0;
- (void)firstViewController:(id /* block */)a0;
- (void)planItemsUpdated:(id)a0 planListError:(id)a1;
- (id)initWithBackButton:(BOOL)a0;
- (id)nextViewControllerFrom:(id)a0;
- (void)setDefaultNavigationItems:(id)a0;

@end
