@class SBUIButton;

@interface SBUIPasscodeLockViewInstallTonightWithKeyboard : SBUIPasscodeLockViewWithKeyboard {
    SBUIButton *_actionButton;
}

- (void)setShowsCancelButton:(BOOL)a0;
- (void).cxx_destruct;
- (void)_actionButtonHit;
- (void)_configureActionButton;
- (void)_layoutActionButton;
- (void)_layoutStatusView;
- (id)initWithLightStyle:(BOOL)a0;
- (void)setShowsEmergencyCallButton:(BOOL)a0;

@end
