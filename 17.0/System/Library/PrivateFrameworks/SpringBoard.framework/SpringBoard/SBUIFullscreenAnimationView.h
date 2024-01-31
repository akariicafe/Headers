@protocol SBUIFullscreenAnimationViewDelegate;

@interface SBUIFullscreenAnimationView : UIView

@property (weak, nonatomic) id<SBUIFullscreenAnimationViewDelegate> delegate;
@property (readonly, nonatomic) BOOL animating;

- (void)setFromView:(id)a0;
- (void)beginTransition;
- (void).cxx_destruct;
- (void)_animationEnded;
- (void)endTransition;
- (void)setToView:(id)a0;
- (void)_animationBegan;
- (void)_notifyDelegateAnimationBeganWithDuration:(double)a0 delay:(double)a1;
- (void)_notifyDelegateThatAnimationIsDone;

@end
