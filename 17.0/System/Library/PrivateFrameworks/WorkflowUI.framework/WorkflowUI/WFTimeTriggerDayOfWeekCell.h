@class NSArray, NSSet, UIStackView;
@protocol WFTimeTriggerDayOfWeekCellDelegate;

@interface WFTimeTriggerDayOfWeekCell : UITableViewCell

@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) UIStackView *stackView;
@property (weak, nonatomic) id<WFTimeTriggerDayOfWeekCellDelegate> delegate;
@property (retain, nonatomic) NSSet *selectedRecurrences;

- (void)tintColorDidChange;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)toggleWeekdayButton:(id)a0;
- (void)updateSelectedDays;

@end
