@class UILabel;

@interface HKEmergencyCardSOSHeaderCell : UITableViewCell

@property (retain, nonatomic) UILabel *headerLabel;

- (void)tintColorDidChange;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupSubviews;
- (void)_updateTextColor;

@end
