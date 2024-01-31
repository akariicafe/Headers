@class UIVisualEffectView, PXGBlurEffectViewConfiguration, UIView;

@interface PXGBlurEffectView : UIView <PXGReusableView> {
    UIVisualEffectView *_effectView;
}

@property (readonly, nonatomic) UIView *contentView;
@property (copy, nonatomic) PXGBlurEffectViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void)prepareForReuse;
- (void)becomeReusable;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)addHostedLayer:(id)a0;
- (void)addHostedView:(id)a0;
- (struct CGPoint { double x0; double x1; })convertHostedChildCenter:(struct CGPoint { double x0; double x1; })a0 fromGlobalLayer:(id)a1;

@end
