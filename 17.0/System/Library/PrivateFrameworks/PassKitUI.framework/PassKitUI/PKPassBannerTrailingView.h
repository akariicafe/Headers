@class UIColor, NSString, UIImageView, UIImage, PKPassBannerTrailingViewConfiguration;

@interface PKPassBannerTrailingView : UIView <SBUISystemApertureAccessoryView> {
    long long _style;
    PKPassBannerTrailingViewConfiguration *_configuration;
    UIImage *_image;
    UIColor *_imageColor;
    UIImageView *_imageView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
