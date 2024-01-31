@class UILabel, _UIPrototypingValue, UIStackView;

@interface _UIPrototypingMenuCell : UITableViewCell

@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) _UIPrototypingValue *prototypingSetting;

+ (long long)_layoutAxis;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_prototypingSettingDidChange;

@end
