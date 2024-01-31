@interface TPNumberPadLightStyleButton : TPNumberPadButton

+ (double)highlightedCircleViewAlpha;
+ (double)unhighlightedCircleViewAlpha;
+ (BOOL)usesTelephonyGlyphsWhereAvailable;
+ (id)imageForCharacter:(long long)a0;
+ (id)imageForCharacter:(long long)a0 highlighted:(BOOL)a1;

- (id)buttonColor;
- (id)defaultColor;

@end
