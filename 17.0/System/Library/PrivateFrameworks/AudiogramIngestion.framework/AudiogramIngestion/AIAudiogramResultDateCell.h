@class UIStackView, NSArray, NSDate, UILabel, UIDatePicker, NSLayoutConstraint;
@protocol AIAudiogramResultDateCellDelegate;

@interface AIAudiogramResultDateCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) UIDatePicker *datePicker;
@property (retain, nonatomic) NSLayoutConstraint *collapsedConstraint;
@property (retain, nonatomic) NSArray *expandedConstraints;
@property (weak, nonatomic) id<AIAudiogramResultDateCellDelegate> delegate;
@property (retain, nonatomic) NSDate *date;

+ (id)reuseIdentifier;

- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_datePickerValueChanged:(id)a0;
- (void)configureLayout;
- (void)showActive:(BOOL)a0;

@end
