@class UIStackView, NSCalendar, UIVisualEffectView, UISwitch, NSDate, UILabel, UIColor;

@interface HUAlarmControlTableViewCell : UITableViewCell

@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSDate *baseDate;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) UILabel *nameAndDescriptionLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIStackView *labelsStackView;
@property (retain, nonatomic) UISwitch *enabledSwitch;
@property (nonatomic) BOOL enabled;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (retain, nonatomic) UIColor *overrideBackgroundColor;

+ (id)timeFormatter;

- (id)init;
- (void)_setupConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)willTransitionToState:(unsigned long long)a0;
- (void)_createSubviews;
- (void)_alarmActiveChanged:(id)a0;
- (id)_alarmBackgroundColor;
- (void)_setTimeLabelToHour:(long long)a0 minute:(long long)a1;
- (void)refreshUIWithHour:(unsigned long long)a0 minute:(unsigned long long)a1 repeatSchedule:(unsigned long long)a2 displayTitle:(id)a3 alarmEnabled:(BOOL)a4 roomName:(id)a5 animated:(BOOL)a6;
- (void)setAlarmEnabled:(BOOL)a0 forCell:(id)a1;

@end
