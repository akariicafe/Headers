@class UIImageView, UIVisualEffectView, UIView;

@interface SFCloseButton : UIButton {
    UIImageView *_imageView;
    UIVisualEffectView *_blurEffectView;
    UIVisualEffectView *_vibrantEffectView;
    UIImageView *_opaqueImageView;
    UIView *_opaqueBackgroundView;
    long long _style;
}

@property (readonly, nonatomic) UIImageView *imageView;
@property (nonatomic) double opaqueBackgroundVisibility;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_makeXmarkImageView;
- (id)initWithStyle:(long long)a0 primaryAction:(id)a1;

@end
