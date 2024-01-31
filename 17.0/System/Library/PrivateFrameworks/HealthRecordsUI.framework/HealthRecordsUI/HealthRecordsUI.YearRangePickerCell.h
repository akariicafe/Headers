@interface HealthRecordsUI.YearRangePickerCell : UITableViewCell <UIPickerViewDelegate, UIPickerViewDataSource> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ baseAccessibilityIdentifier;
    void /* unknown type, empty encoding */ pickerView;
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;

@end
