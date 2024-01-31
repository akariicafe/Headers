@class SBApplication;

@interface SBApplicationSignatureVersionRepairAlertItem : SBAlertItem {
    SBApplication *_application;
}

- (id)initWithApplication:(id)a0;
- (void).cxx_destruct;
- (BOOL)dismissOnLock;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)shouldShowInLockScreen;

@end
