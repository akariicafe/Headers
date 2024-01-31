@class NSString, UIPickerView;

@interface VSPSPickerTableViewCell : PSTableCell <UIPickerViewDataSource, UIPickerViewDelegate>

@property (class, readonly, nonatomic) double preferredHeight;

@property (readonly, nonatomic) UIPickerView *pickerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)targetAsDelegate;

@end
