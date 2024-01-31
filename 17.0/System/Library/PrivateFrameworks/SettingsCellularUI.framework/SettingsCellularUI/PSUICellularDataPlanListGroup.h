@class TSSIMSetupFlow, PSSpecifier, UIActivityIndicatorView, NSString, PSListController, UIViewController;

@interface PSUICellularDataPlanListGroup : NSObject <TSSIMSetupDelegate, PSSpecifierGroup> {
    id _originAccessoryView;
}

@property (weak, nonatomic) PSListController *listController;
@property (weak, nonatomic) UIViewController *firstViewController;
@property (retain) TSSIMSetupFlow *flow;
@property (retain, nonatomic) PSSpecifier *addNewPlanSpecifier;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)key;
+ (id)groupWithListController:(id)a0 groupSpecifier:(id)a1;

- (id)getLogger;
- (id)specifiers;
- (void).cxx_destruct;
- (void)_showSpinner:(BOOL)a0;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (void)_showWifiAlert;
- (void)addNewPlanPressed:(id)a0;
- (void)listController:(id)a0 didSelectSpecifier:(id)a1;
- (void)selectPlanWithSpecifier:(id)a0;
- (void)setUpPendingTransferPlanSpecifiers:(id)a0;
- (void)simSetupFlowCompleted:(unsigned long long)a0;
- (void)turnOnLocationServicesPressed:(id)a0;

@end
