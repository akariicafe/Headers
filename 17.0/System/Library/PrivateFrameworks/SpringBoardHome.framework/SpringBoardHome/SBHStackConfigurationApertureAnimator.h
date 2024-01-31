@class NSSet, SBHWidgetSettings;

@interface SBHStackConfigurationApertureAnimator : NSObject <SBHViewControllerTransitionAnimating>

@property (readonly, nonatomic) SBHWidgetSettings *widgetSettings;
@property (nonatomic, getter=isAlreadyAnimating) BOOL alreadyAnimating;
@property (copy, nonatomic) NSSet *innerWidgetBackgroundViews;

- (id)init;
- (void).cxx_destruct;
- (void)_configureApertureBackgroundViewsForEndpoint:(long long)a0 withCoordinator:(id)a1;
- (void)_configureForEndpoint:(long long)a0 scroll:(BOOL)a1 withCoordinator:(id)a2;
- (void)_configureInnerWidgetBackgroundViewsForEndpoint:(long long)a0 withCoordinator:(id)a1;
- (void)_configureWidgetStackMatchingBackgroundViewForEndpoint:(long long)a0 withCoordinator:(id)a1;
- (void)_removeMatchMoveAnimationFromTargetView:(id)a0;
- (void)_setupMatchMoveAnimationWithSourceView:(id)a0 targetView:(id)a1;
- (BOOL)_shouldUseCenterZoomTransitionForCoordinator:(id)a0;
- (void)animateToEndpoint:(long long)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)finalizeAnimationAtEndpoint:(long long)a0 withContext:(id)a1;
- (void)prepareToAnimateFromEndpoint:(long long)a0 withContext:(id)a1;

@end
