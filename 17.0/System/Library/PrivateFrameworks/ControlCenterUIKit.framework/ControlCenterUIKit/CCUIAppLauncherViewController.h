@class NSString, SCUIAssetProvider, UIViewPropertyAnimator, NSArray, NSObject, CCUIAppLauncherModule;
@protocol OS_dispatch_queue;

@interface CCUIAppLauncherViewController : CCUIMenuModuleViewController <CCUIContentModuleContentViewControllerInternal> {
    SCUIAssetProvider *_assetProvider;
    NSObject<OS_dispatch_queue> *_menuItemsFetchQueue;
    NSArray *_fetchedMenuItems;
}

@property (weak, nonatomic) CCUIAppLauncherModule *module;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willResignActive;
- (void)_queue_setFetchedMenuItems:(id)a0;
- (void)_updateApplicationShortcutsActionsIfNecessary;
- (void)buttonTouchDown:(id)a0 forEvent:(id)a1;
- (void)viewDidLoad;
- (void)_updateWithFetchedMenuItemsIfNecessary;
- (void)requestAuthenticationForTransitionToExpandedContentModuleWithCompletionHandler:(id /* block */)a0;
- (void)_queue_updateApplicationShortcutsActions;
- (BOOL)_canShowWhileLocked;
- (void)_activateApplicationForShortcutItem:(id)a0;
- (id)_menuItemForShortcutItem:(id)a0;
- (void).cxx_destruct;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)didTransitionToExpandedContentMode:(BOOL)a0;
- (id)leadingImageForMenuItem:(id)a0;
- (BOOL)shouldRequestAuthenticationForTransitionToExpandedContent;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (id)_assetProvider;

@end
