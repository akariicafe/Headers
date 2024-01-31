@interface MenstrualCyclesAppPlugin.ManualEntryItem : NSObject <UIPickerViewDelegate, UIPickerViewDataSource> {
    void /* unknown type, empty encoding */ dataSource;
}

- (id)init;
- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;

@end
