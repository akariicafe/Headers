@class UILabel, UIButton, NSLayoutConstraint;

@interface WDDataProviderTableViewCell : UITableViewCell {
    UILabel *_inactiveLabel;
    UIButton *_checkmarkButton;
    NSLayoutConstraint *_iconImageWidth;
}

@property (retain, nonatomic) NSLayoutConstraint *checkmarkLeadingConstraint;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } iconSize;
@property (nonatomic, getter=isActive) BOOL active;

- (void)setIconImage:(id)a0;
- (void)prepareForReuse;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)setDisplayName:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setupUI;

@end
