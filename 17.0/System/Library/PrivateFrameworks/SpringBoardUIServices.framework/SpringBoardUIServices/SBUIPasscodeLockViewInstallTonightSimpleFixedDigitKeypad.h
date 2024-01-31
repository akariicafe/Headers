@class SBUIButton;

@interface SBUIPasscodeLockViewInstallTonightSimpleFixedDigitKeypad : SBUIPasscodeLockViewSimpleFixedDigitKeypad {
    SBUIButton *_actionButton;
}

- (void)setShowsCancelButton:(BOOL)a0;
- (void).cxx_destruct;
- (void)_actionButtonHit;
- (void)_configureActionButton;
- (void)_layoutActionButton;
- (void)_layoutStatusView;
- (void)_setShowsCancelButton:(BOOL)a0 fromEmergencyCallButton:(BOOL)a1;
- (void)_setShowsEmergencyCallButton:(BOOL)a0 fromCancelButton:(BOOL)a1;
- (void)_sizeLabel:(id)a0;
- (id)initWithLightStyle:(BOOL)a0 numberOfDigits:(unsigned long long)a1;
- (void)passcodeEntryFieldTextDidChange:(id)a0;
- (void)setShowsEmergencyCallButton:(BOOL)a0;

@end
