@class UIImageView;

@interface PKPhoneHeroImageView : UIView {
    UIImageView *_phoneView;
}

- (void)setContentMode:(long long)a0;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
