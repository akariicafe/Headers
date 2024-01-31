@class UIPreviewParameters, _UITextHighlightBackgroundView, UIVisualEffectView, CAShapeLayer, UIView;

@interface UITextHighlightView : UIView {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _padding;
    BOOL _contentViewValid;
    _UITextHighlightBackgroundView *_backgroundView;
    UIVisualEffectView *_contentClippingEffectView;
    CAShapeLayer *_contentClippingMaskLayer;
    UIView *_contentView;
}

@property (readonly, copy, nonatomic) id /* block */ previewProvider;
@property (retain, nonatomic) UIPreviewParameters *overriddenPreviewParameters;

+ (id)preferredPreviewParametersForTextLineRects:(id)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateWithPreviewParameters:(id)a0;
- (void)animateWithCompletion:(id /* block */)a0;
- (void)fadeAwayWithCompletion:(id /* block */)a0;
- (id)initWithPreviewProvider:(id /* block */)a0;
- (void)invalidateContentView;

@end
