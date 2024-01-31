@interface TPNumberPadDynamicButton : TPNumberPadButton

@property (class, readonly, nonatomic) long long currentStyle;

+ (double)highlightedCircleViewAlpha;
+ (double)unhighlightedCircleViewAlpha;
+ (BOOL)usesTelephonyGlyphsWhereAvailable;
+ (id)imageForCharacter:(long long)a0;
+ (id)imageForCharacter:(long long)a0 highlighted:(BOOL)a1;

- (void)traitCollectionDidChange:(id)a0;
- (id)buttonColor;
- (id)initForCharacter:(long long)a0 style:(long long)a1;
- (void)updateCurrentStyleIfNecessaryFromStyle:(long long)a0;

@end
