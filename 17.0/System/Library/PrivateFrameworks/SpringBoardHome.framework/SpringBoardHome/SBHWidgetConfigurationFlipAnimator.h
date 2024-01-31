@class SBHWidgetSettings, NSString, SBFTouchPassThroughView, UIView, UIViewFloatAnimatableProperty, SBHWidgetConfigurationTransformView;

@interface SBHWidgetConfigurationFlipAnimator : NSObject <SBIconViewObserver, SBHViewControllerTransitionAnimating>

@property (readonly, nonatomic) SBHWidgetSettings *widgetSettings;
@property (retain, nonatomic) SBFTouchPassThroughView *matchMoveView;
@property (retain, nonatomic) SBHWidgetConfigurationTransformView *sourceContainerView;
@property (retain, nonatomic) UIView *targetSuperview;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceContentFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetContentFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } homeScreenContentFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceContentFrameInMatchMoveViewSpace;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetContentFrameInMatchMoveViewSpace;
@property (nonatomic) long long currentEndpoint;
@property (nonatomic) double startingFlipFraction;
@property (nonatomic) double endingFlipFraction;
@property (nonatomic) double startingRotationAngle;
@property (nonatomic) double endingRotationAngle;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *flipAnimatableProperty;
@property (nonatomic) BOOL hasPerformedAnyTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iconViewDidBecomeWindowless:(id)a0;
- (id)init;
- (void)dealloc;
- (void)iconViewWasDiscarded:(id)a0;
- (void)iconViewWasRecycled:(id)a0;
- (void).cxx_destruct;
- (void)_configureForEndpoint:(long long)a0 context:(id)a1 inMode:(long long)a2 completion:(id /* block */)a3;
- (void)animateToEndpoint:(long long)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)finalizeAnimationAtEndpoint:(long long)a0 withContext:(id)a1;
- (void)prepareToAnimateFromEndpoint:(long long)a0 withContext:(id)a1;

@end
