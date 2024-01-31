@class NSString;

@interface SBPasscodeComplianceAlertItem : SBAlertItem {
    NSString *_title;
    NSString *_message;
    NSString *_continueButtonTitle;
    NSString *_cancelButtonTitle;
}

- (void).cxx_destruct;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (id)initWithTitle:(id)a0 message:(id)a1 continueButtonTitle:(id)a2 cancelButtonTitle:(id)a3;
- (BOOL)shouldShowInLockScreen;

@end
