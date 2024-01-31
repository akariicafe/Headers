@class UIButton, UIView;

@interface _UIColorWelliOSVisualStyle : _UIColorWellVisualStyle {
    UIButton *_button;
    UIView *_gradientView;
    UIView *_borderView;
    BOOL _isSelected;
}

- (struct CGSize { double x0; double x1; })intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setSelectedColor:(id)a0;
- (void).cxx_destruct;
- (void)touchUp:(id)a0;
- (void)layoutSubviews;
- (void)touchDown:(id)a0;
- (void)_invokeColorPicker:(id)a0;
- (double)_widthForTraitCollection:(id)a0;
- (id)dragPreviewParameters;
- (id)initWithColorWell:(id)a0;

@end
