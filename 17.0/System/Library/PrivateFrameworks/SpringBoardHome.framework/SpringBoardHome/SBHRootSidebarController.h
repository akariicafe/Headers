@class _UILegibilitySettings, NSString, SBHSidebarVisualConfiguration, NSMutableArray, UIViewController;
@protocol SBHSidebarProviderDelegate;

@interface SBHRootSidebarController : UIViewController <UIGestureRecognizerDelegate, SBHSidebarProvider>

@property (retain, nonatomic) NSMutableArray *widgetViewControllerConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property (nonatomic) unsigned long long layoutInsetsIgnoredEdges;
@property (weak, nonatomic) id<SBHSidebarProviderDelegate> delegate;
@property (retain, nonatomic) UIViewController *avocadoViewController;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (void)setEditingIcons:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)_setupConstraintsForViewController:(id)a0;
- (void)_configureAvocadoViewController;
- (void)_configureLayoutMargins;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
