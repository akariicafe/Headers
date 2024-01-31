@class NSString, SBSystemAnimationSettings, SPUIRemoteSearchViewController, UIView, SBSearchBackdropView;
@protocol SBUISpotlightInitiating, SBViewControllerContextTransitioning;

@interface SBSpotlightTransitionAnimator : NSObject <PTSettingsKeyObserver, SBViewControllerInteractiveAnimatedTransitioning> {
    SBSystemAnimationSettings *_settings;
    id<SBViewControllerContextTransitioning> _transitionContext;
    double _percentComplete;
    double _transitionDuration;
    unsigned long long _transitionToken;
    unsigned long long _operation;
    UIView *_touchSwallowingView;
    UIView *_containerView;
    UIView *_searchView;
    SBSearchBackdropView *_backdropView;
    BOOL _ownsBackdropView;
    struct { struct { double value; BOOL inclusive; } start; struct { double value; BOOL inclusive; } end; } _pulldownInterval;
    id<SBUISpotlightInitiating> _initiatingViewController;
    SPUIRemoteSearchViewController *_spotlightViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)percentComplete;
- (id)init;
- (double)transitionDuration:(id)a0;
- (void)finishInteractiveTransition:(id)a0 withCompletionSpeed:(double)a1 completionCurve:(long long)a2;
- (void)updateTransition:(id)a0 withPercentComplete:(double)a1;
- (void)animateTransition:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)supportsRestarting;
- (void)cancelTransition:(id)a0 withCompletionSpeed:(double)a1 completionCurve:(long long)a2;
- (void)_animateInteractiveTransition:(id)a0;
- (void)_animateIntoSearch:(BOOL)a0;
- (void)_cancelInteractiveTransition:(id)a0 withCompletionSpeed:(double)a1 completionCurve:(long long)a2;
- (void)_cleanupAfterAnimating:(BOOL)a0;
- (void)_finishInteractiveTransition:(id)a0 withCompletionSpeed:(double)a1 completionCurve:(long long)a2;
- (double)_percentVisibleForPercentComplete:(double)a0;
- (void)_prepareToAnimate;
- (void)_prototypeSettingsChanged;
- (void)_restoreSpotlightHeaderToInitiatingViewController;
- (void)_restoreSpotlightHeaderToInitiatingViewControllerForCancellation:(BOOL)a0;
- (void)_updateTransitionIntoSearch:(BOOL)a0 percentComplete:(double)a1;
- (BOOL)shouldMoveIntoSearch;
- (BOOL)shouldMoveIntoSearchOnCancel;

@end
