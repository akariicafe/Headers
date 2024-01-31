@class UIColor, NSString;

@interface SBLightPasscodeNumberPadButton : TPNumberPadLightStyleButton <SBUIPasscodeNumberPadButton>

@property (retain, nonatomic) UIColor *reduceTransparencyButtonColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (double)_numberPadButtonOuterCircleDiameter;
+ (BOOL)_shouldUseAlternativeCirlceViewAlphas;
+ (double)highlightedCircleViewAlpha;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })paddingOutsideRing;
+ (double)unhighlightedCircleViewAlpha;
+ (BOOL)usesTelephonyGlyphsWhereAvailable;

- (void).cxx_destruct;
- (id)stringCharacter;
- (int)characterType;
- (void)conformsToSBUIPasscodeNumberPadButton;
- (id)initForCharacter:(long long)a0;

@end
