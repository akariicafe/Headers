@class UIDatePicker;

@interface PKDatePickerCellAccessory : UIView {
    UIDatePicker *_datePicker;
}

+ (id)accessoryWithDatePicker:(id)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_initWithDatePicker:(id)a0;

@end
