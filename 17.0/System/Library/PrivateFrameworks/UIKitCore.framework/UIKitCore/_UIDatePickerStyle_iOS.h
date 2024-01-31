@interface _UIDatePickerStyle_iOS : _UIDatePickerStyle

- (void)addSubview:(id)a0 toOverlayBackgroundView:(id)a1;
- (double)compactDateLabelPlatterHorizontalPadding;
- (double)compactDateLabelPlatterVerticalPadding;
- (double)compactLabelCornerRadius;
- (id)createOverlayBackgroundView;
- (long long)datePickerModalPresentationStyle;
- (struct CGSize { double x0; double x1; })idealLayoutFittingSizeForDatePickerMode:(long long)a0;
- (double)inlineDatePickerMaximumWidth;
- (double)inlineDatePickerMinimumMargin;
- (double)inlineDateViewMinimumWidth;
- (double)inlineTimeAndDateSpacing;
- (double)inlineTimeViewMinimumWidth;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })maximumWidthOverhangForProposedLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (double)overlayPlatterCornerRadius;
- (double)overlayPlatterDefaultMargin;
- (double)overlayPlatterDefaultSpacing;
- (double)overlayPlatterInitialHeight;
- (double)overlayPlatterInitialScale;
- (BOOL)overlayPlatterWantsShadowView;

@end
