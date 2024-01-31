@interface _UIPickerViewStyle_iOS : _UIPickerViewStyle

- (double)_zForUnitY:(double)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rowHeight:(double)a2;
- (double)_rotationForCellCenterY:(double)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rowHeight:(double)a2;
- (double)_yRangingFromZeroTo:(double)a0 forUnitY:(double)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 forTraitCollection:(id)a1;
- (double)_distanceToCenterForY:(double)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)verticalPaddingForCenterHighlightView;
- (double)defaultRowHeightForSize:(struct CGSize { double x0; double x1; })a0;
- (double)_unitYForViewY:(double)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)paddingAroundWheels;
- (struct CGSize { double x0; double x1; })defaultSizeForTraitCollection:(id)a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })perspectiveTransform;
- (double)paddingBetweenWheels;
- (double)_yForY:(double)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rowHeight:(double)a2;
- (BOOL)sizeIsValid:(struct CGSize { double x0; double x1; })a0;
- (double)_viewYForUnitY:(double)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)horizontalPaddingForCenterHighlightView;
- (void)configureMaskGradientLayer:(id)a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transformForCellAtY:(double)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rowHeight:(double)a2 selectionBarRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)createCenterHighlightView;
- (double)_zCoordinateForYCoordinate:(double)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)horizontalPaddingForContents;

@end
