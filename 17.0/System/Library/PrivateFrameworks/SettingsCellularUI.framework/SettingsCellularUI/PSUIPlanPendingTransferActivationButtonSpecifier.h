@class CTCellularPlanPendingTransfer, NSString, PSListController, UINavigationController, TSSIMSetupFlow, UIViewController, UIActivityIndicatorView, CTCellularPlanManager;

@interface PSUIPlanPendingTransferActivationButtonSpecifier : PSSpecifier <TSSIMSetupDelegate> {
    id _originAccessoryView;
    UINavigationController *_navigationController;
}

@property (retain, nonatomic) CTCellularPlanPendingTransfer *plan;
@property (weak, nonatomic) PSListController *hostController;
@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager;
@property (retain) TSSIMSetupFlow *flow;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (weak, nonatomic) UIViewController *topViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLogger;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)showSpinner:(BOOL)a0;
- (void)activatePlanPendingTransfer:(id)a0;
- (id)initWithListController:(id)a0 planPendingTransfer:(id)a1;
- (void)setSpecifierProperties;
- (void)simSetupFlowCompleted:(unsigned long long)a0;

@end
