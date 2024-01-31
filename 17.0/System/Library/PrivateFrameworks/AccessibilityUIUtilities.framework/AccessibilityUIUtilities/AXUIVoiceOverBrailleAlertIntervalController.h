@interface AXUIVoiceOverBrailleAlertIntervalController : AXUISettingsNumericalPickerViewController

- (id)localizedTitle;
- (double)minimumValue;
- (double)maximumValue;
- (id)localizedFooterText;
- (long long)keyboardTypeForSpecifier:(id)a0;
- (BOOL)infiniteTimeEnabled;
- (BOOL)numericalPreferenceEnabled;
- (double)numericalPreferenceValue;
- (void)setInfiniteTimeEnabled:(BOOL)a0;
- (void)setNumericalPreferenceEnabledFromUser:(BOOL)a0;
- (void)setNumericalPreferenceValueFromUser:(double)a0;
- (double)stepAmount;
- (BOOL)supportsInfiniteTime;
- (BOOL)userCanDisableNumericalPreference;

@end
