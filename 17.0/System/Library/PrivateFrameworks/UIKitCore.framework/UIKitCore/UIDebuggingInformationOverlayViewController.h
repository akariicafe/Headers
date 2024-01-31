@class UINavigationController, UIDebuggingInformationContainerView, UIDebuggingInformationRootTableViewController, UIView;

@interface UIDebuggingInformationOverlayViewController : UIViewController <UISplitViewControllerDelegate> {
    UIDebuggingInformationContainerView *_shadowContainer;
    UINavigationController *_navController;
}

@property struct CGPoint { double x; double y; } offset;
@property (readonly, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIDebuggingInformationRootTableViewController *rootTableViewController;
@property (nonatomic) BOOL isFullscreen;

- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)didReceiveGesture:(id)a0;
- (void)toggleFullscreen;

@end
