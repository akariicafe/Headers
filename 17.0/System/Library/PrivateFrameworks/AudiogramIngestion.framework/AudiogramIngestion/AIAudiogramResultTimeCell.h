@class UIStackView, UILabel, UIDatePicker, NSDate;
@protocol AIAudiogramResultTimeCellDelegate;

@interface AIAudiogramResultTimeCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) UIDatePicker *timePicker;
@property (weak, nonatomic) id<AIAudiogramResultTimeCellDelegate> delegate;
@property (retain, nonatomic) NSDate *date;

+ (id)reuseIdentifier;

- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_datePickerValueChanged:(id)a0;
- (void)configureLayout;

@end
