@class UISlidingBarStateRequest, _UIPanelAnimationState, UISlidingBarConfiguration, UIViewController;
@protocol UIPanelControllerDelegate;

@interface _UIPanelInternalState : NSObject <NSCopying>

@property (retain, nonatomic) UIViewController *mainViewController;
@property (retain, nonatomic) UIViewController *leadingViewController;
@property (retain, nonatomic) UIViewController *supplementaryViewController;
@property (retain, nonatomic) UIViewController *trailingViewController;
@property (retain, nonatomic) UIViewController *collapsedViewController;
@property (retain, nonatomic) UIViewController *preservedDetailController;
@property (weak, nonatomic) id<UIPanelControllerDelegate> delegate;
@property (copy, nonatomic) UISlidingBarConfiguration *configuration;
@property (copy, nonatomic) UISlidingBarStateRequest *stateRequest;
@property (copy, nonatomic) UISlidingBarStateRequest *externallyAnimatingStateRequest;
@property (nonatomic) long long externallyAnimatingAffectedSides;
@property (retain, nonatomic) _UIPanelAnimationState *animationState;
@property (copy, nonatomic) UISlidingBarStateRequest *interactiveStateRequest;
@property (nonatomic) long long collapsedState;
@property (nonatomic) double keyboardAdjustment;

- (id)computePossibleStatesGivenParentView:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 forceOverlay:(BOOL)a2;
- (id)_allowedWidthsForViewController:(id)a0 parentWidth:(double)a1;
- (id)computePossibleStatesGivenParentView:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (id)_stateForInteractiveRequest:(id)a0 withAffectedSides:(long long)a1 inPossibleStates:(id)a2;
- (id)description;
- (double)_defaultWidthForViewController:(id)a0 parentWidth:(double)a1;
- (void).cxx_destruct;
- (id)_allowedTrailingWidthsForParentWidth:(double)a0;
- (id)_allowedLeadingWidthsForParentWidth:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_allowedSupplementaryWidthsForParentWidth:(double)a0;

@end
