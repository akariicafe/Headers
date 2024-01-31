@interface SBApplicationLaunchNotifyAirplaneModeAlertItem : SBApplicationLaunchNotifyAlertItem {
    BOOL _usesCellNetwork;
}

- (id)initWithApplication:(id)a0;
- (id)_createSystemApertureElement;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;

@end
