@class _UIPreviewPresentationEffectView, UIView;

@interface _UIPreviewPresentationContainerView : UIView

@property (retain, nonatomic) _UIPreviewPresentationEffectView *platterClippingView;
@property (retain, nonatomic) UIView *platterShadowView;
@property (retain, nonatomic) UIView *contentTransformView;
@property (retain, nonatomic) _UIPreviewPresentationEffectView *platterView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (nonatomic) double blurRadius;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL shouldRasterizeForTransition;
@property (nonatomic) BOOL shouldLayoutForCommitPhase;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)blurRadius;
- (void).cxx_destruct;
- (void)setBlurRadius:(double)a0;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_preferredPlatterRectForContainerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldEnclosedScrollViewFlashIndicators:(id)a0;
- (struct CGSize { double x0; double x1; })_standardPreferredContentSize;
- (void)initPlatterViewsIfNeeded;
- (void)setShouldRasterizeForTransition:(BOOL)a0;
- (BOOL)shouldRasterizeForTransition;

@end
