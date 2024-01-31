@class UISwitch;
@protocol AAUISwitchTableViewCellDelegate;

@interface AAUISwitchTableViewCell : UITableViewCell

@property (readonly, nonatomic) UISwitch *control;
@property (weak, nonatomic) id<AAUISwitchTableViewCellDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_controlValueChanged:(id)a0;
- (void)_delegate_switchTableViewCellDidUpdateValue;

@end
