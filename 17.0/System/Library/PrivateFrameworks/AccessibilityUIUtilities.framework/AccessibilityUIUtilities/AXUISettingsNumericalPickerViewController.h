@class NSString;

@interface AXUISettingsNumericalPickerViewController : AXUISettingsSetupCapableListController <AXUISettingsEditableTableCellWithStepperDelegate> {
    double _cachedNumericalValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)localizedTitle;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)minimumValue;
- (void)viewDidLoad;
- (id)specifiers;
- (void)viewWillDisappear:(BOOL)a0;
- (double)maximumValue;
- (id)localizedFooterText;
- (double)valueForSpecifier:(id)a0;
- (double)maximumValueForSpecifier:(id)a0;
- (double)minimumValueForSpecifier:(id)a0;
- (void)specifier:(id)a0 setValue:(double)a1;
- (double)stepValueForSpecifier:(id)a0;
- (id)stringValueForSpecifier:(id)a0;
- (BOOL)shouldDisablePreferenceEntirely;
- (id)_delayPickerFooterSpecifier;
- (id)_delayPickerSpecifier;
- (void)_updateEnabledStateForDelay;
- (id)delayEnabled:(id)a0;
- (id)infiniteTime:(id)a0;
- (BOOL)infiniteTimeEnabled;
- (id)localizedPickerFooterText;
- (id)localizedTextForValue:(double)a0;
- (BOOL)numericalPreferenceEnabled;
- (double)numericalPreferenceValue;
- (void)setDelayEnabled:(id)a0 specifier:(id)a1;
- (void)setInfiniteTimeEnabled:(BOOL)a0;
- (void)setInfiniteTimeEnabled:(id)a0 specifier:(id)a1;
- (void)setNumericalPreferenceEnabledFromUser:(BOOL)a0;
- (void)setNumericalPreferenceValueFromUser:(double)a0;
- (BOOL)shouldSaveOnExit;
- (double)stepAmount;
- (BOOL)supportsInfiniteTime;
- (BOOL)userCanDisableNumericalPreference;

@end
