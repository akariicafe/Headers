@interface _HPSUIBetaEnrollmentViewController : HomePlatformSettingsUI.BaseExtensionViewController <HomePlatformSettingsUI.BetaEnrollmentClientInterface, HomePlatformSettingsUI.BetaEnrollmentXPCClientInterface> {
    void /* unknown type, empty encoding */ homeID;
}

+ (void)shouldShowBetaEnrollmentButtonForHomeID:(id)a0 withCompletion:(id /* block */)a1;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)willMoveToParentViewController:(id)a0;
- (id)initWithHomeID:(id)a0;

@end
