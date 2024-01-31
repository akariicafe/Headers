@class UILabel, PKMerchantTokenIconView, UIStackView;

@interface PKMerchantTokenDetailHeaderCell : UITableViewCell {
    UIStackView *_stackView;
    PKMerchantTokenIconView *_iconView;
    UILabel *_nameLabel;
    UILabel *_secondaryLabel;
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setUpConstraints;
- (void)_setUpNameLabel;
- (void)_setUpStackView;
- (void)_setUpIconView;
- (void)_setUpIconViewConstraints;
- (void)_setUpSelf;
- (void)_setUpStackViewConstraints;
- (void)_setUpViews;
- (void)hideMerchantIcon;
- (void)updateCellWithMerchantToken:(id)a0;

@end
