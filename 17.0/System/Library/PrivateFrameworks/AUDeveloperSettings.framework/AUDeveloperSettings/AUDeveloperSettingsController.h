@class PSSpecifier, CBUserController, OBTextWelcomeController, NSObject;
@protocol OS_os_log;

@interface AUDeveloperSettingsController : PSEditableListController {
    NSObject<OS_os_log> *_log;
    PSSpecifier *_logCollectionSpecifier;
    PSSpecifier *_customerOverrideCollectionSpecifier;
    CBUserController *_loggingController;
    OBTextWelcomeController *_legalConsentController;
    OBTextWelcomeController *_privacyConsentController;
    PSSpecifier *_currentAccessorySpecifier;
    BOOL _btQueried;
    BOOL _isLoggingEnabled;
}

- (id)init;
- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (void)registerForNotifications;
- (void)_agreeToLegalConsent;
- (void)setSeedParticipation:(id)a0 specifier:(id)a1;
- (void)_agreePrivacyConsent;
- (void)_notNowToLegalConsent;
- (void)_notNowToPrivacyConsent;
- (id)createCustomerSpecifiers;
- (id)getOverrideLocation:(id)a0;
- (void)handleBTUserSettingsChangedNotification:(int)a0;
- (void)handleLogCollectionToggle:(id)a0 specifier:(id)a1;
- (id)isSeedParticipationEnabled:(id)a0;
- (id)islogCollectionEnabled:(id)a0;
- (BOOL)needLegalConsent;
- (void)removedSpecifier:(id)a0;
- (void)setlogCollection:(id)a0 specifier:(id)a1;
- (void)showLegalConsent:(id)a0;
- (void)showLegalConsentLearnMoreLink:(id)a0;
- (void)showParticipateInSeedOffAlert:(id)a0;

@end
