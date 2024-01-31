@class NSString, HXUIInlinePickerTableViewCell;
@protocol WDAddDataManualEntrySpinnerDataSource;

@interface WDAddDataManualEntrySpinner : WDAddDataManualEntryItem <UIPickerViewDataSource, UIPickerViewDelegate> {
    HXUIInlinePickerTableViewCell *_tableViewCell;
    long long _selectedPickerViewIndex;
    NSString *_displayName;
}

@property (nonatomic) long long _wd_deliveryReason;
@property (weak, nonatomic) id<WDAddDataManualEntrySpinnerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)setValue:(id)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (id)initWithDisplayName:(id)a0;
- (void)_updateTableViewCellValue;
- (id)generateValue;
- (id)tableViewCells;

@end
