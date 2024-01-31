@class UILabel;

@interface CNFRegSettingsTemporaryPhoneCell : PSTableCell

@property (retain, nonatomic) UILabel *phoneNumberLabel;
@property (retain, nonatomic) UILabel *expirationLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (unsigned long long)daysUntilExpiration:(id)a0;

@end
