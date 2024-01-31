@class NSString, _UIShapeView, UIDictationGlowEffect, CABasicAnimation;

@interface _UITextCursorTrailingGlowView : UIView <CAAnimationDelegate> {
    _UIShapeView *_shapeView;
    UIDictationGlowEffect *_dictationGlowEffect;
    CABasicAnimation *_animation;
    double _animationStartTime;
    BOOL _needsToUpdateAnimation;
}

@property (copy, nonatomic) id /* block */ transitionBlock;
@property (nonatomic, getter=isTrailingAnimationEnabled) BOOL trailingAnimationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setTintColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;
- (void)_animate;
- (void)_updateShapeAndAnimate;
- (void)cursorDidMoveToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromPreviousFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isNewLine:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })estimatedCurrentFrame;
- (struct CGPath { } *)pathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
