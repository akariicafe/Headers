@class NSString, HXUIInlinePickerTableViewCell;

@interface _WDHeightPickerManualEntryItem : WDAddDataManualEntryItem <UIPickerViewDelegate, UIPickerViewDataSource> {
    HXUIInlinePickerTableViewCell *_tableViewCell;
    NSString *_displayName;
}

@property (retain, nonatomic) NSString *feetUnitString;
@property (retain, nonatomic) NSString *inchUnitString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (id)initWithDisplayName:(id)a0;
- (void)_updateTableViewCell;
- (id)generateValue;
- (id)tableViewCells;

@end
