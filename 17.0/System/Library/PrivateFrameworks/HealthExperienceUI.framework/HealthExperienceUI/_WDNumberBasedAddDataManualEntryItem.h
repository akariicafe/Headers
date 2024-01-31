@class NSNumberFormatter, WDManualDataEntryTableViewCell;

@interface _WDNumberBasedAddDataManualEntryItem : WDAddDataManualEntryItem <WDManualDataEntryTableViewCellDelegate> {
    WDManualDataEntryTableViewCell *_tableViewCell;
}

@property (nonatomic) unsigned long long manualEntryType;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;

- (void)beginEditing;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)setValue:(id)a0;
- (id)generateValue;
- (void)manualDataEntryTableViewCell:(id)a0 valueDidChangeToValue:(id)a1;
- (id)tableViewCells;

@end
