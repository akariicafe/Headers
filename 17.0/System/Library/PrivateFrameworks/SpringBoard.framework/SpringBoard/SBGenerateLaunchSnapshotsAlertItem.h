@interface SBGenerateLaunchSnapshotsAlertItem : SBAlertItem

@property (copy, nonatomic) id /* block */ handler;

- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)behavesSuperModally;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)forcesModalAlertAppearance;
- (void)regenerateApplications:(id)a0;
- (BOOL)shouldShowInLockScreen;

@end
