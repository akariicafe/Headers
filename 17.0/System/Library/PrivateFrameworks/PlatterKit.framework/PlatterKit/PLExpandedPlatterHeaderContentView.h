@interface PLExpandedPlatterHeaderContentView : PLPlatterHeaderContentView

- (void)setDateAllDay:(BOOL)a0;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setDate:(id)a0;
- (void)setDateFormatStyle:(long long)a0;
- (void)_configureDateLabel;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_configureIconButton:(id)a0 withIcon:(id)a1;
- (void)_configureUtilityButton;
- (id)_ellipsisHighlightedBackgroundImage;
- (double)_headerHeightForWidth:(double)a0;
- (double)_iconDimension;
- (double)_iconLeadingPadding;
- (double)_iconTrailingPadding;
- (double)_largeTextLabelBaselineOffsetFromBottom;
- (double)_largeTextTitleLabelBaselineOffset;
- (void)_layoutDateLabelWithScale:(double)a0;
- (void)_layoutTitleLabelWithScale:(double)a0;
- (void)_layoutUtilityButtonWithScale:(double)a0;
- (id)_newIconButton;
- (double)_titleFirstLineCenterY;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_titleLabelBoundsForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateStylingForTitleLabel:(id)a0;
- (void)_updateUtilityButtonFont;
- (void)_updateUtilityButtonVibrantStyling;

@end
