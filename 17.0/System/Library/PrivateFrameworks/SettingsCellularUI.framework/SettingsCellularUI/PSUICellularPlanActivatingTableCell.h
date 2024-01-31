@class UILabel, PSUIBadgeView, UIActivityIndicatorView;

@interface PSUICellularPlanActivatingTableCell : PSTableCell

@property (retain, nonatomic) PSUIBadgeView *badgeView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) PSUIBadgeView *centeredBadgeView;
@property (retain, nonatomic) UILabel *centeredTitleLabel;
@property (retain, nonatomic) UILabel *badgelessCenteredTitleLabel;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;

+ (long long)cellStyle;

- (id)textLabel;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)canReload;
- (id)detailTextLabel;
- (BOOL)canBeChecked;
- (void)_setBadge:(id)a0 andTitle:(id)a1 andSubtitle:(id)a2 andStatus:(id)a3;
- (void)_setBadgelessCenteredTitle:(id)a0 andStatus:(id)a1;
- (void)_setBadgelessTitle:(id)a0 andSubtitle:(id)a1 andStatus:(id)a2;
- (void)_setCenteredBadge:(id)a0 andCenteredTitle:(id)a1 andStatus:(id)a2;

@end
