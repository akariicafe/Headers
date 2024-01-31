@class SBFTouchPassThroughView, SBHPeopleWidgetPersonDetailInteractionSettings;

@interface SBHPeopleWidgetPersonDetailZoomAnimator : NSObject <SBHViewControllerTransitionAnimating>

@property (readonly, nonatomic) SBHPeopleWidgetPersonDetailInteractionSettings *settings;
@property (retain, nonatomic) SBFTouchPassThroughView *matchMoveView;
@property (retain, nonatomic) SBFTouchPassThroughView *sourceContainerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceContentFrameInMatchMoveViewSpace;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetContentFrameInMatchMoveViewSpace;
@property (nonatomic) long long currentEndpoint;

- (id)init;
- (void).cxx_destruct;
- (void)_configureForEndpoint:(long long)a0 context:(id)a1 inMode:(long long)a2 completion:(id /* block */)a3;
- (void)animateToEndpoint:(long long)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)finalizeAnimationAtEndpoint:(long long)a0 withContext:(id)a1;
- (void)prepareToAnimateFromEndpoint:(long long)a0 withContext:(id)a1;

@end
