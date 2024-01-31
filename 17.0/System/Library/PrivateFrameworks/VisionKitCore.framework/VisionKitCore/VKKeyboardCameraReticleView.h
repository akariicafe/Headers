@class CEKSubjectIndicatorView, UIView;

@interface VKKeyboardCameraReticleView : UIView {
    CEKSubjectIndicatorView *_reticleView;
    UIView *_spotlightView;
    BOOL _hasSetReticleRect;
}

@property (nonatomic) double spotlightBlurRadius;
@property (nonatomic) double invertedShadowAlpha;
@property (nonatomic) double reticleAlpha;

+ (void)animate:(id /* block */)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)collapseReticleRect;
- (void)setReticleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 angle:(double)a1;

@end
