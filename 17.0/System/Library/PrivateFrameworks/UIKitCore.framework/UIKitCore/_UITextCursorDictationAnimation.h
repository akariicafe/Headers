@class UIColor, NSString, UIDictationGlowEffect, _UITextCursorView, _UIShapeView, CABasicAnimation, UIView;

@interface _UITextCursorDictationAnimation : NSObject <CAAnimationDelegate, _UITextCursorAnimation> {
    BOOL _pulseAnimationEnabled;
    BOOL _needsInitialDictationAnimation;
    CABasicAnimation *_pulseAnimation;
    CABasicAnimation *_glowAnimation;
    struct CGPath { } *_originPath;
    UIView *_glowContainerView;
    _UIShapeView *_glowShapeView;
    UIDictationGlowEffect *_glowEffect;
}

@property (weak, nonatomic) _UITextCursorView *cursorView;
@property (retain, nonatomic) UIColor *tintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) _UIShapeView *cursorShapeView;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;
- (void)_setPulseAnimationEnabled:(BOOL)a0;
- (void)cursorShapeDidChange;
- (id)initWithCursorShapeView:(id)a0;
- (void)setNeedsInitialDictationAnimation;

@end
