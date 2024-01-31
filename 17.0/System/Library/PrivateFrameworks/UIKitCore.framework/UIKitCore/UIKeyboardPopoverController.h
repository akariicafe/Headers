@class UIView;

@interface UIKeyboardPopoverController : UIViewController

@property (retain, nonatomic) UIView *contentView;

- (id)init;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;
- (BOOL)isPresented;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_setupContentView;
- (void)configurePopoverPresentationController:(id)a0;
- (BOOL)handleHardwareKeyboardEvent:(id)a0;
- (BOOL)wantsDimmingView;

@end
