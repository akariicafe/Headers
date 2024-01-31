@class GKColorPalette;

@interface GKViewController : UIViewController

@property (retain, nonatomic) GKColorPalette *colorPalette;
@property (nonatomic) BOOL shouldUpdateContentOnlyWhenAuthenticated;
@property (retain, nonatomic) GKViewController *rootViewController;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)popToRootViewControllerAnimated:(BOOL)a0;
- (BOOL)displayUsingSplitNavigationBar;

@end
