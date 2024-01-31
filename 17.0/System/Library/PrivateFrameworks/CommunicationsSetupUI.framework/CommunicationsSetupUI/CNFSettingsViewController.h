@class CNFPendingDeepLinkRepresentation, UIViewController;
@protocol PSController;

@interface CNFSettingsViewController : PSViewController

@property (retain, nonatomic) UIViewController<PSController> *_currentChildViewController;
@property (retain, nonatomic) CNFPendingDeepLinkRepresentation *pendingDeepLinkRepresentation;

- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)settingsClassName;
- (void)applicationDidResume;
- (void).cxx_destruct;
- (id)name;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (long long)serviceType;
- (BOOL)_hasPendingDeepLink;
- (void)_invokePendingDeepLink;
- (void)_loadChildViewController;
- (void)containerViewControllerShouldUpdate:(id)a0;
- (id)specifierTitle;

@end
