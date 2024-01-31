@interface AMSUIInlineDialogView : AMSUICommonView

- (id)_contentView;
- (BOOL)_layoutHeightDependsOnWidth;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;

@end
