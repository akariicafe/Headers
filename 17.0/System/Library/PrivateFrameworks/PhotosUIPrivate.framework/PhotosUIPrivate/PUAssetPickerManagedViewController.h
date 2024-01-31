@class UISplitViewController, UINavigationController, PUSidebarViewController, PUAssetPickerContainerController, UIView, PUPickerConfiguration, NSString;

@interface PUAssetPickerManagedViewController : UIViewController <PUAssetPickerOnboardingViewDelegate, UINavigationControllerDelegate, UISplitViewControllerDelegate, PXChangeObserver>

@property (readonly, nonatomic) UISplitViewController *splitViewController;
@property (readonly, nonatomic) UINavigationController *contentNavigationController;
@property (readonly, nonatomic) UINavigationController *sidebarNavigationController;
@property (readonly, nonatomic) PUSidebarViewController *sidebarViewController;
@property (retain, nonatomic) UIView *onboardingOverlayView;
@property (readonly, nonatomic) PUPickerConfiguration *configuration;
@property (readonly, nonatomic) PUAssetPickerContainerController *contentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateBackgroundColor;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)viewDidLoad;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)_updatePreferredContentSize;
- (void)splitViewControllerDidCollapse:(id)a0;
- (void)splitViewController:(id)a0 willChangeToDisplayMode:(long long)a1;
- (void)splitViewControllerDidExpand:(id)a0;
- (void)_splitViewControllerDidChangeTraitPresentationSemanticContext:(id)a0;
- (void)_updateOnboardingOverlayBadgeContainer;
- (void)_updateOnboardingOverlayView;
- (void)_updatePreferredDisplayMode;
- (void)assetPickerOnboardingViewDidDismissBadge:(id)a0;
- (void)assetPickerOnboardingViewDidTransitionToBadge:(id)a0;
- (void)assetPickerOnboardingViewWantsToLearnMoreAboutDataAccess:(id)a0;
- (id)initWithConfiguration:(id)a0 contentViewController:(id)a1;
- (void)presentDataAccessEducationViewController:(id)a0;

@end
