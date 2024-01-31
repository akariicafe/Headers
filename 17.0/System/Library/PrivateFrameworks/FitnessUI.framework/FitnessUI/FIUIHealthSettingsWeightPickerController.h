@class NSString;

@interface FIUIHealthSettingsWeightPickerController : FIUIHealthSettingsPickerController <UIPickerViewDelegate, UIPickerViewDataSource> {
    long long numberOfComponents;
    long long numberOfRows;
}

@property (copy, nonatomic) id /* block */ weightUpdateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)forceUpdate;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (id)pickerView:(id)a0 attributedTitleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (void)setWeightQuantity:(id)a0;
- (void)_setDefaultValuesOnWeightPickerIfRequiredWithWeight:(id)a0;
- (void)_updateWithWeightQuantity:(id)a0;
- (id)_weightDisplayStringForRow:(long long)a0;
- (double)_weightInLocaleUnitForRow:(long long)a0;
- (id)_weightQuantityForRow:(long long)a0;

@end
