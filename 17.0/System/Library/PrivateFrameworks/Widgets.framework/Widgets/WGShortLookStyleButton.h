@class NSString, UILabel, BSUIFontProvider, MTMaterialView;

@interface WGShortLookStyleButton : UIControl <MTMaterialGrouping> {
    MTMaterialView *_backgroundView;
    UILabel *_titleLabel;
    BSUIFontProvider *_fontProvider;
    struct CGSize { double width; double height; } _size;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred;
@property (copy, nonatomic) NSString *materialGroupNameBase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_fontProvider;
- (void)_configureBackgroundViewIfNecessary;
- (double)_backgroundViewCornerRadius;
- (struct CGSize { double x0; double x1; })_size;
- (void)_updateHighlight;
- (void)_configureTitleLabelIfNecessary;
- (void)_layoutTitleLabel;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_updateTitleLabelFont;
- (void)_setBackgroundViewCornerRadius:(double)a0;
- (void).cxx_destruct;
- (void)_configureMaskIfNecessary;
- (id)fontForTitle:(id)a0;
- (void)_updateTouchInsetsIfNecessary;
- (void)layoutSubviews;
- (void)invalidateCachedGeometry;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
