@class UIImageView;

@interface ETColorGradientView : UIView {
    UIImageView *_imageView;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)revealColorWheelWithCompletion:(id /* block */)a0;
- (void)hideColorWheelWithRotation:(double)a0 completion:(id /* block */)a1;
- (void)prepareToAnimateColorWheelWithRotation:(double)a0;

@end
