@class TSSIMSetupFlow, NSString, UIActivityIndicatorView, PSListController;

@interface PSUIGenerateTransferQRCodeSpecifier : PSSpecifier

@property (weak, nonatomic) PSListController *hostController;
@property (nonatomic) BOOL popViewControllerOnPlanDeletion;
@property (retain) TSSIMSetupFlow *flow;
@property (readonly, nonatomic) NSString *iccid;
@property (readonly, nonatomic) NSString *carrierName;
@property (retain) UIActivityIndicatorView *spinner;

- (id)getLogger;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)showSpinner:(BOOL)a0;
- (void)generateTransferQRCodeCellPressed:(id)a0;
- (id)initWithHostController:(id)a0 iccid:(id)a1 carrierName:(id)a2;
- (void)simSetupFlowCompleted:(unsigned long long)a0;

@end
