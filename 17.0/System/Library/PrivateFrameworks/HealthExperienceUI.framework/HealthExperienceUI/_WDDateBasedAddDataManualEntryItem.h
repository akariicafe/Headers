@class NSDateFormatter, NSString, HXUIInlineDatePickerTableViewCell, NSDate;

@interface _WDDateBasedAddDataManualEntryItem : WDAddDataManualEntryItem {
    HXUIInlineDatePickerTableViewCell *_tableViewCell;
    NSString *_displayName;
    NSDate *_maximumDate;
    NSDate *_chosenDate;
    BOOL _highlightWhenEditing;
}

@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (nonatomic) long long datePickerMode;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)setValue:(id)a0;
- (void)_datePickerDidChange:(id)a0;
- (void)_generateValue:(id /* block */)a0;
- (void)_saveDisambiguatedDate:(id)a0;
- (id)generateValue;
- (id)initWithMaximumDate:(id)a0 highlightWhenEditing:(BOOL)a1 datePickerMode:(long long)a2 displayName:(id)a3;
- (id)tableViewCells;

@end
