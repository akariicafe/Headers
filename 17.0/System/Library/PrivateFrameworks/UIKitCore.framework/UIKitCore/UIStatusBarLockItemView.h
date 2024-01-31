@class NSString, _UIExpandingGlyphsView, UIView, _UIStatusBarLockItemPadlockView;

@interface UIStatusBarLockItemView : UIStatusBarItemView <CAAnimationDelegate>

@property (retain, nonatomic) _UIStatusBarLockItemPadlockView *padlockView;
@property (retain, nonatomic) UIView *textClippingView;
@property (retain, nonatomic) _UIExpandingGlyphsView *textView;
@property (nonatomic) double padlockViewCenterOffsetFromForegroundViewCenter;
@property (retain, nonatomic) UIView *timeItemSnapshot;
@property (nonatomic) double timeItemSnapshotCenterOffsetFromForegroundViewCenter;
@property (nonatomic) double widthNeededDuringAnimation;
@property (nonatomic) double widthNeededForFinalState;
@property (nonatomic) int animationCount;
@property (copy, nonatomic) id /* block */ animationCompletionBlock;
@property (weak, nonatomic) UIView *viewToAnimateAlongside;
@property (nonatomic) BOOL alongsideViewIsBecomingVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)lockSlideAnimationDuration;

- (id)accessibilityHUDRepresentation;
- (BOOL)_isAnimating;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (void)_beginAnimation;
- (BOOL)isExclusive;
- (void)_endAnimation;
- (void)animateUnlockForegroundView:(id)a0 timeItemSnapshot:(id)a1 completionBlock:(id /* block */)a2;
- (void)jiggleCompletionBlock:(id /* block */)a0;
- (void)setVisible:(BOOL)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 duration:(double)a2;
- (double)updateContentsAndWidth;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;

@end
