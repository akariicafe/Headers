@class _UIPlatterShadowView, UIBezierPath, UIView;

@interface _UIPlatterSoftShadowView : UIView

@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) _UIPlatterShadowView *diffuseShadowView;
@property (readonly, nonatomic) _UIPlatterShadowView *rimShadowView;
@property (copy, nonatomic) UIBezierPath *shadowPath;
@property (nonatomic) BOOL needsPunchOut;

- (void).cxx_destruct;
- (void)_updateForShadowPath;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shadowPath:(id)a1;

@end
