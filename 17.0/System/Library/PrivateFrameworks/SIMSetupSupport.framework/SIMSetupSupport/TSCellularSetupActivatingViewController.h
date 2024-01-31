@class UILabel, NSString, UIActivityIndicatorView;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularSetupActivatingViewController : TSOBTableWelcomeController <TSSetupFlowItem>

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_setUpLabel;
- (void)_setUpSpinner;
- (void)_spinnerStartAnimating;
- (void)_spinnerStopAnimating;

@end
