@class NSString, _SFSettingsAlertButton;

@interface _SFSettingsAlertStepper : _SFSettingsAlertControl <_SFSettingsAlertStepperConfiguration> {
    _SFSettingsAlertButton *_incrementButton;
    _SFSettingsAlertButton *_decrementButton;
    _SFSettingsAlertButton *_resetButton;
}

@property (readonly, nonatomic) long long value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_button:(long long)a0;
- (void)_decrementTapped:(id)a0;
- (void)_incrementTapped:(id)a0;
- (void)_resetTapped:(id)a0;
- (id)initUsingResetButton:(BOOL)a0 usingTopSeparator:(BOOL)a1;
- (void)setEnabled:(BOOL)a0 forButton:(long long)a1;
- (void)setImage:(id)a0 forButton:(long long)a1;
- (void)setText:(id)a0 forButton:(long long)a1;

@end
