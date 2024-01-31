@class UIViewController;
@protocol SiriUIModalContainerViewControllerDelegate;

@interface SiriUIModalContainerViewController : UIViewController

@property (readonly, nonatomic) UIViewController *contentViewController;
@property (weak, nonatomic) id<SiriUIModalContainerViewControllerDelegate> delegate;

- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)initWithContentViewController:(id)a0;

@end
