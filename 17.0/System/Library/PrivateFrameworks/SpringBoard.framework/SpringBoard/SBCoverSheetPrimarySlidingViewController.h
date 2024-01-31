@class SBGrabberTongue, NSString, SBCoverSheetParallaxContainerView, SBCoverSheetPanelBackgroundContainerView, SBFTouchPassThroughView, SBWallpaperEffectView, SBCoverSheetBlurView, UIGestureRecognizer;
@protocol PBUIWallpaperAnimatedInvalidating, SBCoverSheetGrabberDelegate;

@interface SBCoverSheetPrimarySlidingViewController : SBCoverSheetSlidingViewController <SBGrabberTongueDelegate, SBReachabilityObserver>

@property (retain, nonatomic) SBFTouchPassThroughView *unlockedContentOverlayView;
@property (retain, nonatomic) SBCoverSheetPanelBackgroundContainerView *panelBackgroundContainerView;
@property (retain, nonatomic) SBFTouchPassThroughView *parallaxClippingView;
@property (retain, nonatomic) SBCoverSheetParallaxContainerView *parallaxContainerView;
@property (retain, nonatomic) SBGrabberTongue *grabberTongue;
@property (retain, nonatomic) SBCoverSheetBlurView *behindCoverSheetBlurView;
@property (retain, nonatomic) SBCoverSheetBlurView *panelCoverSheetBlurView;
@property (retain, nonatomic) SBWallpaperEffectView *panelWallpaperEffectView;
@property (retain, nonatomic) SBWallpaperEffectView *panelFadeOutWallpaperEffectView;
@property (retain, nonatomic) id<PBUIWallpaperAnimatedInvalidating> homescreenWallpaperScaleAssertion;
@property (retain, nonatomic) id<PBUIWallpaperAnimatedInvalidating> lockscreenWallpaperScaleAssertion;
@property (nonatomic) double defaultPresentGestureEdgeRegionSize;
@property (nonatomic) double presentationProgressAtCommit;
@property (nonatomic) BOOL hasCommittedCurrentTransition;
@property (weak, nonatomic) id<SBCoverSheetGrabberDelegate> grabberDelegate;
@property (readonly, nonatomic) UIGestureRecognizer *edgePullGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_maglevActive;
- (void)_beginTransitionFromAppeared:(BOOL)a0;
- (void)_transitionToViewControllerAppearState:(int)a0 ifNeeded:(BOOL)a1 forUserGesture:(BOOL)a2;
- (BOOL)shouldAutorotate;
- (void)_setupPanelPartsIfNecessary;
- (void)dealloc;
- (unsigned long long)_panelOptions;
- (void)getRotationContentSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; double x5; int x6; } *)a0 forWindow:(id)a1;
- (id)customGestureRecognizerForGrabberTongue:(id)a0;
- (void)_updateWallpaperScaled:(BOOL)a0 animated:(BOOL)a1;
- (void)viewDidLayoutSubviews;
- (void)handleWillBeginReachabilityAnimation;
- (void)handleReachabilityModeDeactivated;
- (void)grabberTongueWillPresent:(id)a0;
- (BOOL)_shouldShowGrabberOnFirstSwipe;
- (void)_commitTransitionToAppeared:(BOOL)a0 animated:(BOOL)a1;
- (void)setTransitionSettings:(id)a0;
- (void)_updateWindowVisibility;
- (void)grabberTongueDidDismiss:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_animationTickedWithProgress:(double)a0 velocity:(double)a1 forPresentationValue:(BOOL)a2;
- (void)loadView;
- (void)_createPanelWallpaperEffectViewIfNeeded;
- (BOOL)grabberTongueOrPullEnabled:(id)a0 forGestureRecognizer:(id)a1;
- (void)_updateBackgroundIfNecessary;
- (void)handleReachabilityModeActivated;
- (BOOL)_canShowWhileLocked;
- (void)_createFadeOutWallpaperEffectViewIfNeeded;
- (void)_updatePanelWallpaperEffectView;
- (void).cxx_destruct;
- (void)_endTransitionToAppeared:(BOOL)a0;
- (void)grabberTongueBeganPulling:(id)a0 withDistance:(double)a1 andVelocity:(double)a2 andGesture:(id)a3;
- (void)_positionSubviewsForContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPresentationValue:(BOOL)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_childViewControllerForAlwaysOnTimelines;
- (BOOL)grabberTongue:(id)a0 shouldShowTongueOnFirstSwipeWithEdgeLocation:(double)a1;
- (void)_controlCenterWindowSceneDidConnect:(id)a0;
- (void)grabberTongueEndedPulling:(id)a0 withDistance:(double)a1 andVelocity:(double)a2 andGesture:(id)a3;
- (void)grabberTongueCanceledPulling:(id)a0 withDistance:(double)a1 andVelocity:(double)a2 andGesture:(id)a3;
- (void)_updateFadeOutWallpaperEffectView;
- (void)grabberTongueUpdatedPulling:(id)a0 withDistance:(double)a1 andVelocity:(double)a2 andGesture:(id)a3;
- (void)handleDidEndReachabilityAnimation;

@end
