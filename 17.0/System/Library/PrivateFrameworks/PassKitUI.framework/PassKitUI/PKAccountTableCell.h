@class UILabel, UIImageView;

@interface PKAccountTableCell : PSTableCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_iconImageView;
}

+ (id)subtitleFont;
+ (id)titleFont;
+ (double)estimatedHeightForCell;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_configureCellForAccount:(id)a0;
- (id)_subtitleColorForAccountState:(unsigned long long)a0;
- (id)_subtitleForAccount:(id)a0;
- (id)_titleForAccount:(id)a0;

@end
