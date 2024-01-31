@interface UIAccessibilityLabelOnlyHUDLayoutManager : UIAccessibilityHUDLayoutManager

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })labelFrameForHUD:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)labelContainsSingleCharacter:(id)a0;
- (id)labelFontForHUD:(id)a0;
- (struct CGSize { double x0; double x1; })minimumUnscaledSizeForHUD:(id)a0 preferredLabelSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })unscaledSizeForHUD:(id)a0 containingSize:(struct CGSize { double x0; double x1; })a1;

@end
