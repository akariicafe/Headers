@interface MenstrualCyclesAppPlugin.MenstrualCyclesOnboardingPickerViewController : OBWelcomeController <UIPickerViewDataSource, UIPickerViewDelegate> {
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ pickerType;
    void /* unknown type, empty encoding */ descriptionText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dayPickerRange;
    void /* unknown type, empty encoding */ $__lazy_storage_$_datePicker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dayPicker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dateComponentsFormatter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pickerDetailLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_descriptionLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nextButton;
}

- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)cancelButtonTapped:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)skipButtonTapped:(id)a0;
- (void)nextButtonTapped:(id)a0;

@end
