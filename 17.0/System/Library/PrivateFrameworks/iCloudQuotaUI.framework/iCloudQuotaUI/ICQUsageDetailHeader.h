@class UIStackView, UIImageView, UILabel, NSLayoutConstraint;

@interface ICQUsageDetailHeader : UIView {
    UILabel *_nameLabel;
    UILabel *_versionLabel;
    UILabel *_sizeLabel;
    UIImageView *_appIcon;
    UIStackView *_horizontalStack;
    UIStackView *_verticalStack;
    NSLayoutConstraint *_leadingMargin;
}

+ (double)usageDetailHeaderHeight;

- (void)setName:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setLabelTextAndIconWithSpecifier:(id)a0;

@end
