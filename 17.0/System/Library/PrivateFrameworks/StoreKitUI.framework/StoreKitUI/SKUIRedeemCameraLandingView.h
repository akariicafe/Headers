@class UIImageView, UIImage, UILabel, UIButton;

@interface SKUIRedeemCameraLandingView : UIView {
    UILabel *_bodyLabel;
    UILabel *_headerLabel;
    UIImageView *_imageView;
}

@property (readonly, nonatomic) UIButton *button;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long spacingStyle;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithClientContext:(id)a0;

@end
