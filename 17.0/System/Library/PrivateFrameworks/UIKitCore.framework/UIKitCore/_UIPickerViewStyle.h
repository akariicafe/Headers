@interface _UIPickerViewStyle : NSObject

@property (readonly, nonatomic) double columnHighlightCornerRadius;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 forTraitCollection:(id)a1;
- (double)verticalPaddingForCenterHighlightView;
- (double)defaultRowHeightForSize:(struct CGSize { double x0; double x1; })a0;
- (double)paddingAroundWheels;
- (struct CGSize { double x0; double x1; })defaultSizeForTraitCollection:(id)a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })perspectiveTransform;
- (double)paddingBetweenWheels;
- (BOOL)sizeIsValid:(struct CGSize { double x0; double x1; })a0;
- (double)horizontalPaddingForCenterHighlightView;
- (void)configureMaskGradientLayer:(id)a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transformForCellAtY:(double)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rowHeight:(double)a2 selectionBarRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)createCenterHighlightView;
- (double)horizontalPaddingForContents;
- (void)_resetFontCacheForLegitbilityWeightIfNeeded:(long long)a0;
- (void)applyCustomizationsToColumn:(id)a0;
- (id)centerCellDigitFontWithTraitCollection:(id)a0;
- (id)centerCellFontWithTraitCollection:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })columnContentEdgeInsets;
- (id)nonCenterCellDigitFontWithTraitCollection:(id)a0;
- (id)nonCenterCellFontWithTraitCollection:(id)a0;
- (id)selectionFeedbackGeneratorConfiguration;

@end
