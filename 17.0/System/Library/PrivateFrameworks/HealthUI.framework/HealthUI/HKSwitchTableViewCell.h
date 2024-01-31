@class NSString, UILabel, UISwitch;
@protocol HKSwitchTableViewCellDelegate;

@interface HKSwitchTableViewCell : UITableViewCell {
    UILabel *_countLabel;
    UISwitch *_switch;
}

@property (weak, nonatomic) id<HKSwitchTableViewCellDelegate> delegate;
@property (nonatomic) BOOL shouldHideSwitch;
@property (nonatomic, getter=isOn) BOOL on;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) BOOL centersIcon;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } iconSize;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (copy, nonatomic) NSString *displayText;

+ (id)reuseIdentifier;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)setIconImage:(id)a0;
- (void)_updateFont;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)setCountText:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)switchValueChanged:(id)a0;
- (void)_setupUI;
- (void)_contextSizeCategoryChanged;
- (id)_displayLabelFont;
- (void)updateAutomationIdentifiersIfNeeded;
- (void)updateAutomationIdentifiersWithBaseIdentifier:(id)a0;

@end
