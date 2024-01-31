@class SBApplication;

@interface SBAppProfileNotTrustedAlertItem : SBAlertItem {
    SBApplication *_app;
}

- (void).cxx_destruct;
- (BOOL)dismissOnLock;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)forcesModalAlertAppearance;
- (id)initWithApp:(id)a0;
- (BOOL)shouldShowInLockScreen;

@end
