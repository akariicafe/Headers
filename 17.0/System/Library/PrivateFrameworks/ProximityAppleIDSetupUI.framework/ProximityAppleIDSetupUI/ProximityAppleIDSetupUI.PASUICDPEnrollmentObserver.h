@interface ProximityAppleIDSetupUI.PASUICDPEnrollmentObserver : NSObject <CDPUIDelegate> {
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ lastStatus;
}

- (void)uiController:(id)a0 didPresentRootViewController:(id)a1;
- (void)uiController:(id)a0 prepareAlertContext:(id /* block */)a1;
- (void)uiController:(id)a0 preparePresentationContext:(id /* block */)a1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
