@class UIWindow, UIResponder, NSMutableArray, UIView;

@interface UITransitionView : UIView <NSCoding> {
    UIView *_fromView;
    UIView *_toView;
    NSMutableArray *_frozenSubviews;
    UIResponder *_firstResponderToRemember;
    id _delegate;
    UIWindow *_originalWindow;
    struct { unsigned char animationInProgress : 1; unsigned char ignoresInteractionEvents : 1; unsigned char shouldNotifyDidCompleteImmediately : 1; unsigned char useViewControllerAppearanceCallbacks : 1; unsigned char shouldRestoreFromViewAlpha : 1; unsigned char shouldRestoreGroupOpacity : 1; unsigned char groupOpacityToRestoreForFromView : 1; unsigned char groupOpacityToRestoreForToView : 1; unsigned char shouldRasterize : 1; unsigned char enableRotationAfterTransition : 1; unsigned char removeFromView : 1; } _transitionViewFlags;
    double _curlUpRevealedHeight;
    int _textEffectsVisibilityLevel;
}

@property (readonly, nonatomic) double _curlUpRevealedHeight;
@property (nonatomic) BOOL shouldNotifyDidCompleteImmediately;
@property (nonatomic) long long animationTimingCurve;
@property (nonatomic) BOOL ignoreDirectTouchEvents;

+ (double)defaultDurationForTransition:(int)a0;

- (void)willMoveToSuperview:(id)a0;
- (void)setRasterizesOnTransition:(BOOL)a0;
- (BOOL)transition:(int)a0 fromView:(id)a1 toView:(id)a2 removeFromView:(BOOL)a3;
- (id)delegate;
- (void)traitCollectionDidChange:(id)a0;
- (id)_traitCollectionForChildEnvironment:(id)a0;
- (void)notifyDidCompleteTransition:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_didStartTransition;
- (BOOL)_shouldDisableGroupOpacityOnAlphaTransitions;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (BOOL)transition:(int)a0 toView:(id)a1;
- (double)durationForTransition:(int)a0;
- (BOOL)isTransitioning;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_transitionDidStopFinished:(BOOL)a0;
- (BOOL)_isTransitioningFromFromView:(id)a0;
- (id)toView;
- (BOOL)transition:(int)a0 fromView:(id)a1 toView:(id)a2;
- (BOOL)rasterizesOnTransition;
- (void)_viewDidMoveFromScreen:(id)a0 toScreen:(id)a1;
- (void)_startTransition:(int)a0 withDuration:(double)a1;
- (void)setIgnoresInteractionEvents:(BOOL)a0;
- (int)textEffectsVisibilityLevel;
- (void).cxx_destruct;
- (void)_didCompleteTransition:(BOOL)a0;
- (void)safeAreaInsetsDidChange;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setDelegate:(id)a0;
- (void)layoutSubviews;
- (BOOL)ignoresInteractionEvents;
- (id)initWithCoder:(id)a0;
- (id)fromView;

@end
