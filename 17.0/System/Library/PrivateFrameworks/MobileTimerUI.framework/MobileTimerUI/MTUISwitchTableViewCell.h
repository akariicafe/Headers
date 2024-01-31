@class UISwitch;
@protocol MTUISwitchTableViewCellDelegate;

@interface MTUISwitchTableViewCell : MTUIBaseTableViewCell

@property (retain, nonatomic) UISwitch *enabledSwitch;
@property (weak, nonatomic) id<MTUISwitchTableViewCellDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)switchAction:(id)a0;
- (void)setSwitchStateEnabled:(BOOL)a0;

@end
