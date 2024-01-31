@class UIImageView, UIImageSymbolConfiguration, CAShapeLayer;

@interface AVTCameraItemView : UIView

@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageSymbolConfiguration *cameraConfiguration;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateCameraImage;

@end
