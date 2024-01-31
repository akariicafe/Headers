@class SUUIColorScheme, NSString, UIImageView, UIImage, UILabel;

@interface SUUIProductPageFeatureView : UIView {
    UIImageView *_iconView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) SUUIColorScheme *colorScheme;
@property (copy, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;

- (void)setBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
