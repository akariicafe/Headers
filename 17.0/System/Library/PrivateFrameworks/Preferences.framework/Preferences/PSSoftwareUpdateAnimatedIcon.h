@class UIImageView;

@interface PSSoftwareUpdateAnimatedIcon : UIView {
    UIImageView *_innerGearView;
    UIImageView *_outerGearShadowView;
    UIImageView *_outerGearView;
    BOOL _animating;
}

@property (readonly, nonatomic) UIImageView *innerGearView;
@property (readonly, nonatomic) UIImageView *outerGearShadowView;
@property (readonly, nonatomic) UIImageView *outerGearView;

- (void)setAnimating:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)createConstraints;

@end
