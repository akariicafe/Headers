@interface UIAccessibilityHUDLayoutManager : NSObject

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })labelFrameForHUD:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1;
- (unsigned long long)_actualNumberOfLinesForLabelInHUD:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1;
- (double)_imageCenterToTopForHUD:(id)a0 preferredSizeForLabel:(struct CGSize { double x0; double x1; })a1;
- (id)containerViewForHUD:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })imageInsetsForHUD:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageViewFrameForHUD:(id)a0 preferredSizeForLabel:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })imageViewSizeForHUD:(id)a0 preferredSizeForLabel:(struct CGSize { double x0; double x1; })a1;
- (id)itemContainerViewForHUD:(id)a0;
- (id)labelFontForHUD:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutBoundsForHUD:(id)a0;
- (void)layoutSubviewsOfHUD:(id)a0;
- (struct CGSize { double x0; double x1; })minimumUnscaledSizeForHUD:(id)a0 preferredLabelSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })preferredSizeForLabelInHUD:(id)a0 maximumWidth:(double)a1;
- (struct CGSize { double x0; double x1; })unscaledSizeForHUD:(id)a0 containingSize:(struct CGSize { double x0; double x1; })a1;

@end
