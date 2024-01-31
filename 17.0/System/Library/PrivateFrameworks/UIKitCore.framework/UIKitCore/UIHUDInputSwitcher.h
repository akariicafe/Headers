@class UIInputSwitcherView;

@interface UIHUDInputSwitcher : UIInputSwitcher {
    UIInputSwitcherView *m_switcherView;
}

- (id)init;
- (void).cxx_destruct;
- (void)_showSwitcherViewAsHUD;
- (id)availableInputModes;
- (void)dismissSwitcher:(BOOL)a0;
- (void)dismissSwitcherWithDelay:(double)a0;
- (BOOL)handleSwitchCommand:(BOOL)a0 withHUD:(BOOL)a1 withDelay:(BOOL)a2;
- (BOOL)isVisibleOrHiding;
- (id)nextInputMode;
- (id)previousInputMode;
- (void)reloadInputModes;
- (id)selectedInputMode;
- (void)setSelectedInputMode:(id)a0;
- (void)setShowingCapsLockSwitcher:(BOOL)a0;
- (BOOL)switchMode:(id)a0 withHUD:(BOOL)a1 withDelay:(BOOL)a2;

@end
