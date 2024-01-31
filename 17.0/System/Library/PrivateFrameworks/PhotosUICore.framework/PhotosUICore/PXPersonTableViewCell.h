@class UIImage;

@interface PXPersonTableViewCell : UITableViewCell

@property (class, readonly, nonatomic) double avatarHeight;

@property (retain, nonatomic) UIImage *personIcon;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateUI;

@end
