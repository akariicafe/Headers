@class UIDatePicker, NSString, UIImageView, UILabel, NSDate, UIView, SUUIGiftConfiguration;
@protocol SUUIGiftDateTableViewCellDelegate;

@interface SUUIGiftDateTableViewCell : UITableViewCell {
    UIView *_bottomBorderView;
    UIImageView *_checkmarkView;
    UIDatePicker *_datePicker;
    UILabel *_labelLabel;
    UILabel *_placeholderLabel;
    UIView *_topBorderView;
}

@property (nonatomic) BOOL leftToRight;
@property (nonatomic, getter=isChecked) BOOL checked;
@property (retain, nonatomic) NSDate *date;
@property (weak, nonatomic) id<SUUIGiftDateTableViewCellDelegate> delegate;
@property (retain, nonatomic) SUUIGiftConfiguration *giftConfiguration;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *placeholder;

- (id)_newLabel;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (id)_labelColor;
- (void)_datePickerDateDidChange;
- (void)_datePickerEditingDidBegin;
- (id)_labelForDate:(id)a0;

@end
