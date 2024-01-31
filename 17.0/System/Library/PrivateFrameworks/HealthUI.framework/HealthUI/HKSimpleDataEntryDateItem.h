@class UIDatePicker, NSString, NSDateFormatter, NSDate, HKSimpleDataEntryPlainTextCell, HKValueRange;

@interface HKSimpleDataEntryDateItem : HKSimpleDataEntryItem {
    HKSimpleDataEntryPlainTextCell *_cell;
    NSString *_title;
    NSString *_registrantModelKey;
    NSDate *_date;
    NSDate *_defaultDate;
    HKValueRange *_dateRange;
    UIDatePicker *_datePicker;
    NSDateFormatter *_exportFormatter;
}

+ (id)_dateFormatter;
+ (id)gregorianGMTCalendar;

- (void)localeDidChange:(id)a0;
- (void)beginEditing;
- (void).cxx_destruct;
- (id)cell;
- (void)_setTextForInputTextField:(id)a0;
- (void)datePickerValueChanged:(id)a0;
- (id)formattedKeyAndValue;
- (id)initWithTitle:(id)a0 registrantModelKey:(id)a1 date:(id)a2 defaultDate:(id)a3 dateRange:(id)a4 exportFormatter:(id)a5;
- (void)updateCellDisplay;

@end
