@class UIView, NSString, VUIImageView, NSShadow, VUILabel, UIVisualEffectView, UIPointerInteraction, UIColor;

@interface VUIButton : UIControl <UIPointerInteractionDelegate, VUILabelBaselineProtocol, VUIViewScrollPercentageUpdateProtocol>

@property (nonatomic) BOOL isTintColorAndBackgroundColorSaturated;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction;
@property (retain, nonatomic) VUIImageView *imagesViewDefaultState;
@property (retain, nonatomic) VUIImageView *imagesViewHighlightedState;
@property (retain, nonatomic) VUIImageView *backgroundImagesViewDefaultState;
@property (retain, nonatomic) VUIImageView *backgroundImagesViewHighlightedState;
@property (retain, nonatomic) UIView *backgroundImageView;
@property (retain, nonatomic) UIVisualEffectView *backdropView;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) BOOL usesSymbolPointerInteraction;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) BOOL hasDisclaimerText;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) unsigned long long buttonType;
@property (nonatomic) unsigned long long uberButtonType;
@property (nonatomic) unsigned long long buttonShape;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (retain, nonatomic) UIColor *buttonBackgroundColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double minWidth;
@property (nonatomic) double minHeight;
@property (nonatomic) double maxWidth;
@property (nonatomic) double maxHeight;
@property (retain, nonatomic) NSShadow *shadow;
@property (retain, nonatomic) VUILabel *textContentView;
@property (retain, nonatomic) VUILabel *subtitleContentView;
@property (retain, nonatomic) VUIImageView *imageView;
@property (nonatomic) double imageMaxWidth;
@property (nonatomic) double imageMaxHeight;
@property (retain, nonatomic) UIColor *imageTintColor;
@property (retain, nonatomic) UIColor *imageHighlightColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imageMargin;
@property (nonatomic) BOOL imageTrailsTextContent;
@property (copy, nonatomic) id /* block */ selectActionHandler;
@property (retain, nonatomic) UIColor *adjustmentModeNormalTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double vuiBaselineHeight;

- (void)_configure;
- (BOOL)_hasImage;
- (BOOL)_hasTitle;
- (BOOL)_hasSubtitle;
- (void)_updateLayout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (void)tintColorDidChange;
- (void)setTintColor:(id)a0;
- (id)largeContentImage;
- (id)largeContentTitle;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (BOOL)scalesLargeContentImage;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_buttonTapped:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_hasBackgroundImage;
- (void)setVuiBackgroundColor:(id)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_prepareForReuse;
- (void)revertTintColor;
- (double)bottomMarginWithBaselineMargin:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_barButtonPointerShapeRect;
- (struct CGSize { double x0; double x1; })_calculateContentSizeForImageThatFit:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_calculateContentSizeForPrimaryButtonThatFit:(struct CGSize { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_centerWithViewSize:(struct CGSize { double x0; double x1; })a0 withParentSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })_computeSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_imageSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setPointerInteractionEnabled:(BOOL)a0;
- (void)_setupBarButtonItem;
- (void)_setupBlurEffectBackdropView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_symbolButtonPointerShapeRect;
- (void)_updateBorder;
- (void)configureWithLayoutProperties;
- (id)initWithType:(unsigned long long)a0 interfaceStyle:(unsigned long long)a1;
- (void)saturateTintColorAndBackgroundColor;
- (void)setBackgroundImage:(id)a0 forHighlightedState:(BOOL)a1;
- (void)setImageView:(id)a0 forHighlightedState:(BOOL)a1;
- (void)setScrolledNonUberPercentage:(double)a0;
- (double)topMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (double)topMarginWithBaselineMargin:(double)a0;
- (double)vui_baselineOffsetFromBottom;

@end
