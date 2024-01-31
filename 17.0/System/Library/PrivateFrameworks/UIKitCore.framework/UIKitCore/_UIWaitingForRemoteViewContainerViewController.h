@class UIActivityIndicatorView;

@interface _UIWaitingForRemoteViewContainerViewController : UIViewController

@property (retain, nonatomic) UIActivityIndicatorView *loadingSpinner;

- (void)viewWillLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)stopSpinner;

@end
