@class NSString;

@interface SBCarDoNotDisturbExitConfirmationAlertItem : SBAlertItem <SiriUICarDNDDelegate>

@property (copy, nonatomic) id /* block */ notDrivingActionHandler;
@property (nonatomic) BOOL showSiriHeaderViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (void)controllerDidProvideContext:(id)a0;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)reappearsAfterUnlock;
- (BOOL)shouldShowInLockScreen;

@end
