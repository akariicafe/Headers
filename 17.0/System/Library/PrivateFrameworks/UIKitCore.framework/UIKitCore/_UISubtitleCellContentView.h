@class _UIContentViewEditingController, NSString, UIImageView, _UISubtitleCellContentViewConfiguration, UILabel, NSLayoutRect;

@interface _UISubtitleCellContentView : UIView <_UIContentViewComponentDescribing, _UIContentView> {
    _UISubtitleCellContentViewConfiguration *_animatingFromConfiguration;
    _UISubtitleCellContentViewConfiguration *_animatingToConfiguration;
    double _preferredMaxLayoutWidth;
    _UIContentViewEditingController *_editingController;
}

@property (copy, nonatomic) _UISubtitleCellContentViewConfiguration *configuration;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) NSLayoutRect *_primaryTextLayoutRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _primaryTextLayoutFrame;
@property (copy, nonatomic, setter=_setPrimaryTextFrameDidChangeHandler:) id /* block */ _primaryTextFrameDidChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL _preventFocus;

- (id)_encodableSubviews;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void)_setMultilineContextWidth:(double)a0;
- (double)_preferredMaxLayoutWidth;
- (void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_needsDoubleUpdateConstraintsPass;
- (double)_multilineContextWidth;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
