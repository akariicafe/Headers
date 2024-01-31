@class TSSIMSetupFlow, NSString, UIActivityIndicatorView, CTCellularPlanManager, PSListController, UIViewController;

@interface PSUIAddCellularPlanSpecifier : PSSpecifier <TSSIMSetupDelegate> {
    CTCellularPlanManager *_planManager;
    id _originAccessoryView;
    UIActivityIndicatorView *_spinner;
}

@property (weak, nonatomic) PSListController *hostController;
@property (weak) UIViewController *firstViewController;
@property (retain) TSSIMSetupFlow *flow;
@property BOOL isRequestingFirstViewController;
@property BOOL isEmbeddedInCarrierList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLogger;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)showSpinner:(BOOL)a0;
- (void)setUpeSIMNeeded;
- (void)_showWifiAlert;
- (void)addCellularPlanCellPressed:(id)a0;
- (void)cellularPlanChanged;
- (id)initWithHostController:(id)a0 isEmbeddedInCarrierList:(BOOL)a1;
- (id)initWithHostController:(id)a0 isEmbeddedInCarrierList:(BOOL)a1 planManager:(id)a2;
- (void)simSetupFlowCompleted:(unsigned long long)a0;
- (long long)userConsentResponse;

@end
