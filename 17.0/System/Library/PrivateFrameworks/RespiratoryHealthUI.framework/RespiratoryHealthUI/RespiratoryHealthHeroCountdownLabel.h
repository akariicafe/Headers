@interface RespiratoryHealthHeroCountdownLabel : UILabel

- (void)setScaleFactor:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_makeUnitLabelFontWithSize:(double)a0;
- (id)_makeValueLabelFontWithSize:(double)a0;
- (id)countdownStringForScaleFactor:(double)a0;

@end
