@class UILabel, UIDatePicker;

@interface PSDateTimePickerCell : PSTableCell {
    UIDatePicker *_datePicker;
    UILabel *_titleLabel;
}

+ (double)preferredHeight;

- (void)dealloc;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)datePicker;
- (void)timeZoneChanged:(id)a0;

@end
