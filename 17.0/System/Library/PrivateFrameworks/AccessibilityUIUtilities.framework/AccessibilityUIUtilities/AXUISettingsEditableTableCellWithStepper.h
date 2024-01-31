@class UILabel, UIStepper;
@protocol AXUISettingsEditableTableCellWithStepperDelegate;

@interface AXUISettingsEditableTableCellWithStepper : AXUISettingsEditableTextCell

@property (retain, nonatomic) UIStepper *stepper;
@property (retain, nonatomic) UILabel *secondsLabel;
@property (weak, nonatomic) id<AXUISettingsEditableTableCellWithStepperDelegate> delegate;
@property (readonly, nonatomic) BOOL shouldResizeTextFieldOnUpdate;
@property (nonatomic) BOOL testingUseNoPreferencesDelegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)didMoveToSuperview;
- (void)textFieldDidEndEditing:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_textFieldChanged:(id)a0;
- (double)_axStepperValue;
- (void)_updateSecondsLabelForDelegate:(id)a0;
- (long long)_axStepperKeyboardType;
- (double)_axStepperMaximumValue;
- (double)_axStepperMinimumValue;
- (void)_axStepperSetValue:(double)a0;
- (double)_axStepperStepValue;
- (id)_axStepperStringValue;
- (id)_axStepperUnitString;
- (void)_stepperChanged:(id)a0;
- (id)_stepperValueFormatString;
- (void)_updateAccessibilityLabelForTextField;
- (void)_updateSecondsLabel;
- (void)initializeView;
- (void)updateWithValue:(double)a0 shouldUpdateTextField:(BOOL)a1;

@end
