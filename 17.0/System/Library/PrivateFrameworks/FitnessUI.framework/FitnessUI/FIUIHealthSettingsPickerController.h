@class NSString, UIPickerView;

@interface FIUIHealthSettingsPickerController : NSObject <UIPickerViewDelegate, UIPickerViewDataSource, FIUIHealthSettingsForceUpdatable>

@property (retain, nonatomic) UIPickerView *pickerView;
@property (nonatomic) BOOL isMetricLocale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)forceUpdate;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;

@end
