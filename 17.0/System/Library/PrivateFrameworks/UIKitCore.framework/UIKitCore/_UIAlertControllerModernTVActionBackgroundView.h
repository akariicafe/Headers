@class UIVisualEffectView, NSMutableDictionary;

@interface _UIAlertControllerModernTVActionBackgroundView : _UIAlertControllerTVBackgroundView {
    NSMutableDictionary *_vibrancies;
}

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (nonatomic) BOOL shouldUseTintColorAsHighlightColor;

+ (struct CGSize { double x0; double x1; })backgroundInsetAmount;

- (struct CGSize { double x0; double x1; })_shadowOffset;
- (void)_updateBackgroundColor;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (double)_shadowRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_shadowOpacity;
- (void).cxx_destruct;
- (void)setVibrantCompositing:(BOOL)a0 forState:(unsigned long long)a1;
- (void)updateCompositingForHighlighted:(BOOL)a0;
- (BOOL)vibrantCompositing:(unsigned long long)a0;

@end
