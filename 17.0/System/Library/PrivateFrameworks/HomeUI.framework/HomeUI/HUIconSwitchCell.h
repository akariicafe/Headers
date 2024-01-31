@class UISwitch;
@protocol HUIconSwitchCellDelegate;

@interface HUIconSwitchCell : HUTitleDescriptionCell

@property (retain, nonatomic) UISwitch *switchView;
@property (nonatomic, getter=isOn) BOOL on;
@property (weak, nonatomic) id<HUIconSwitchCellDelegate> delegate;

- (void)setHighlighted:(BOOL)a0;
- (void)prepareForReuse;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0;
- (void)_toggleOn:(id)a0;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
