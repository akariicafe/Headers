@interface WidgetRenderer.ZStackContainerViewController : UIViewController

@property (nonatomic, readonly) BOOL shouldAutomaticallyForwardAppearanceMethods;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;

- (id)init;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (id)_childViewControllersForAlwaysOnTimelines;
- (id)initWithCoder:(id)a0;

@end
