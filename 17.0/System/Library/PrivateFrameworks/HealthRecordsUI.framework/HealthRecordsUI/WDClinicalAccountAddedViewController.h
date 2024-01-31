@interface WDClinicalAccountAddedViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ onboardingSession;
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ notificationsManager;
    void /* unknown type, empty encoding */ iconProvider;
    void /* unknown type, empty encoding */ primaryButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_brandView;
    void /* unknown type, empty encoding */ customConstraints;
    void /* unknown type, empty encoding */ $__lazy_storage_$_standardConstraints;
    void /* unknown type, empty encoding */ $__lazy_storage_$_accessibilityConstraints;
    void /* unknown type, empty encoding */ shouldPromptForDataCollection;
    void /* unknown type, empty encoding */ dismissHandler;
}

@property (nonatomic, copy) id /* block */ dismissHandler;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)hxui_primaryFooterButtonTapped;
- (id)initWithOnboardingSession:(id)a0 account:(id)a1;

@end
