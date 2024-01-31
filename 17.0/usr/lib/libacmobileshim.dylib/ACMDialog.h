@class NSString;

@interface ACMDialog : UIViewController

@property (readonly) long long statusBarStyle;
@property long long savedStatusBarStyle;
@property (readonly) NSString *backgroundImageName;

+ (id)dialog;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)applicationWillEnterForeground;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)applicationDidEnterBackground;
- (void)viewDidAppear:(BOOL)a0;
- (long long)modalTransitionStyle;
- (void)viewDidDisappear:(BOOL)a0;
- (void)disableControls:(BOOL)a0;
- (void)hideWithParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)shouldManuallyChangeStatusBarStyle;
- (void)showWithParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
