@class UILabel, UIView;

@interface MCProfileTitlePageWarningCell : UITableViewCell

@property (retain, nonatomic) UIView *separatorLine;
@property (readonly, nonatomic) UILabel *label;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_updateConstraintsWithLabel:(id)a0;

@end
