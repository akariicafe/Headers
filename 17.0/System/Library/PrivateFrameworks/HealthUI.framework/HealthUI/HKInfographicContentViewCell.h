@class UILabel, NSLayoutConstraint;

@interface HKInfographicContentViewCell : UITableViewCell

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;

- (id)_titleFont;
- (id)_descriptionFont;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)_labelWithFont:(id)a0;

@end
