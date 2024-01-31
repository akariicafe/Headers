@class _UIListContentImageView, UILayoutGuide, NSString, UILabel, NSLayoutRect, UIListContentConfiguration;

@interface UIListContentView : UIView <_UIContentViewComponentDescribing, UIContentView> {
    UIListContentConfiguration *_animatingFromConfiguration;
    UIListContentConfiguration *_animatingToConfiguration;
    double _preferredMaxLayoutWidth;
    struct { unsigned char imageViewFrameInvalid : 1; unsigned char textLabelFrameInvalid : 1; unsigned char secondaryTextLabelFrameInvalid : 1; } _contentViewFlags;
    _UIListContentImageView *_imageView;
    UILabel *_textLabel;
    UILabel *_secondaryTextLabel;
}

@property (copy, nonatomic) UIListContentConfiguration *configuration;
@property (readonly, nonatomic) UILayoutGuide *textLayoutGuide;
@property (readonly, nonatomic) UILayoutGuide *secondaryTextLayoutGuide;
@property (readonly, nonatomic) UILayoutGuide *imageLayoutGuide;
@property (readonly, nonatomic) NSLayoutRect *_primaryTextLayoutRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _primaryTextLayoutFrame;
@property (copy, nonatomic, setter=_setPrimaryTextFrameDidChangeHandler:) id /* block */ _primaryTextFrameDidChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_encodableSubviews;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void)_setMultilineContextWidth:(double)a0;
- (double)_preferredMaxLayoutWidth;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_needsDoubleUpdateConstraintsPass;
- (double)_multilineContextWidth;
- (BOOL)supportsConfiguration:(id)a0;
- (void)layoutSubviews;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
