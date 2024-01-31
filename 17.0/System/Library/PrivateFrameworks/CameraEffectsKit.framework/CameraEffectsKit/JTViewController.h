@class NSMutableDictionary, JTView, NSMutableArray, UIViewController;

@interface JTViewController : UIViewController

@property (retain, nonatomic) JTView *view;
@property (retain, nonatomic) NSMutableDictionary *suspendedChildViewControllerRequests;
@property (retain, nonatomic) NSMutableArray *suspendInteractionTags;
@property BOOL debuggingUIEnabled;
@property (retain, nonatomic) UIViewController *viewControllerDrivingStatusAppearance;

- (void)viewDidLoad;
- (BOOL)prefersStatusBarHidden;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)logSuspendedChildViewControllersToString:(id)a0 indentLevel:(int)a1;
- (void)logSuspendedViewControllers;
- (void)resumeInteractionForChildViewControllersWithTag:(id)a0;
- (void)resumeInteractionWithTag:(id)a0;
- (void)setChildViewControllerInteractionEnabledWithRequest:(id)a0 enabled:(BOOL)a1;
- (void)suspendChildViewControllersInteractionWithTag:(id)a0 timeout:(double)a1 excluding:(id)a2;
- (void)suspendInteractionWithTag:(id)a0;
- (void)timeoutInteractionSuspended:(id)a0;

@end
