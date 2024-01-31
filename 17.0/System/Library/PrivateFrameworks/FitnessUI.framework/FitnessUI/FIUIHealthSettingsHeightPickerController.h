@class NSLengthFormatter;

@interface FIUIHealthSettingsHeightPickerController : FIUIHealthSettingsPickerController {
    NSLengthFormatter *_heightFormatter;
}

@property (copy, nonatomic) id /* block */ heightUpdateHandler;

- (void).cxx_destruct;
- (void)forceUpdate;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (id)pickerView:(id)a0 attributedTitleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (void)setHeightQuantity:(id)a0;
- (void)_heightPickerUpdated;
- (id)_pickerDisplayStringForHeightForRow:(long long)a0 forComponent:(long long)a1;

@end
