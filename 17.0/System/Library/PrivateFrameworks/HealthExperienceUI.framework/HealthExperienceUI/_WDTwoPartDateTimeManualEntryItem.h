@class HXUIInlineDatePickerTableViewCell, NSDateFormatter, NSDate;

@interface _WDTwoPartDateTimeManualEntryItem : WDAddDataManualEntryItem {
    HXUIInlineDatePickerTableViewCell *_dateTableViewCell;
    HXUIInlineDatePickerTableViewCell *_timeTableViewCell;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
    NSDate *_maximumDate;
    NSDate *_chosenDate;
}

- (void).cxx_destruct;
- (void)setValue:(id)a0;
- (void)_datePickerDidChange:(id)a0;
- (void)_generateValue:(id /* block */)a0;
- (void)_saveDisambiguatedDate:(id)a0;
- (void)_setupTableViewCells;
- (void)_timePickerDidChange:(id)a0;
- (void)_updateCellLabels;
- (id)generateValue;
- (id)initWithMaximumDate:(id)a0;
- (id)tableViewCells;

@end
