@interface SBDataPlanActivationAlertItem : SBDataPlanAccountAlertItem {
    BOOL _promptToDisable;
}

@property (nonatomic, getter=isNewAccount) BOOL newAccount;

- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (id)initWithAccountURL:(id)a0 newAccount:(BOOL)a1 promptToDisable:(BOOL)a2;
- (void)notNow;

@end
