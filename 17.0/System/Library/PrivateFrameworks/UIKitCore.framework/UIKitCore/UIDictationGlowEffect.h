@class UIColor, TUIGlowEffect, UIView;

@interface UIDictationGlowEffect : NSObject {
    UIView *_glowEffectView;
    TUIGlowEffect *_glowEffect;
    BOOL _cachedDarkMode;
    UIColor *_cachedTintColor;
}

@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double blurRadius;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)setTintColor:(id)a0 animated:(BOOL)a1 duration:(double)a2 autoreverses:(BOOL)a3 repeatCount:(double)a4;
- (void)updateColorWithUserInterfaceStyleChange;

@end
