@class UIBezierPath;

@interface _UIDiffuseShadowView : UIView

@property (nonatomic) double intensity;
@property (nonatomic) double radius;
@property (nonatomic) struct CGSize { double x0; double x1; } offset;
@property (copy, nonatomic) UIBezierPath *path;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateForCurrentTraits;

@end
