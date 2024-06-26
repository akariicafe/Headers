@class WBSFormAutoFillParsecFeedbackProcessor, CNContact, NSString, WBSFormAutoFillCorrectionManager, WBSGeneratedPassword, WBSCreditCardData;

@interface WBUFormDataController : WBSFormDataController <MCProfileConnectionObserver, WBSFormAutoFillCorrectionManagerDelegate, WBSFormFieldClassificationCorrectorDelegate> {
    BOOL _savePending;
    WBSFormAutoFillCorrectionManager *_autoFillCorrectionManager;
    WBSFormAutoFillParsecFeedbackProcessor *_autoFillFeedbackProcessor;
    int _cachedAutoFillRestrictionValue;
}

@property (nonatomic) BOOL shouldAutoFillFromCreditCardData;
@property (nonatomic) BOOL shouldAutoFillPasswords;
@property (nonatomic) BOOL shouldAutoFillFromAddressBook;
@property (readonly, nonatomic) CNContact *me;
@property (retain, nonatomic) WBSCreditCardData *lastFilledCreditCardData;
@property (retain, nonatomic) WBSGeneratedPassword *generatedPassword;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_meCard;
+ (BOOL)contactIsMe:(id)a0;
+ (BOOL)keychainSyncEnabled;
+ (id)localizedLowercaseContactProperty:(id)a0;
+ (id)valueStringForMatch:(id)a0;
+ (id)_stringForCNContactObject:(id)a0 contactObjectComponent:(id)a1;
+ (BOOL)contactStoreHasMeCard:(id)a0;

- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)a0 userInfo:(id)a1;
- (void)_applicationWillEnterForeground:(id)a0;
- (void)dealloc;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void).cxx_destruct;
- (void)didFillFormWithGeneratedPassword:(id)a0 inWebView:(id)a1 frame:(id)a2 context:(id)a3;
- (void)gatherAutoFillDisplayDataWithTextField:(id)a0 displayedInQuickType:(BOOL)a1 prefix:(id)a2 contact:(id)a3 completionHandler:(id /* block */)a4;
- (void)gatherValuesForForm:(id)a0 focusedTextFieldMetadata:(id)a1 inFrame:(id)a2 multiRoundAutoFillManager:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithAggressiveKeychainCaching:(BOOL)a0;
- (BOOL)mayFillCreditCardDataInFrame:(id)a0;
- (BOOL)mayPreFillInFrame:(id)a0;
- (void)performWhenReady:(id /* block */)a0;
- (void)saveUnsubmittedGeneratedPasswordInFrame:(id)a0 form:(id)a1 context:(id)a2 closingWebView:(BOOL)a3;
- (BOOL)shouldAllowPasswordAutoFillOnURL:(id)a0 allowExternalCredentials:(BOOL)a1;
- (BOOL)shouldAutoGeneratePasswordsForURL:(id)a0 inWebView:(id)a1;
- (void)textDidChangeInForm:(id)a0 inWebView:(id)a1 frame:(id)a2 context:(id)a3;
- (BOOL)webView:(id)a0 frame:(id)a1 willNavigateFromForm:(id)a2 inContext:(id)a3 bySubmitting:(BOOL)a4 processMetadataCorrections:(BOOL)a5 uniqueIDsOfControlsThatWereAutoFilled:(id)a6 submissionHandler:(id /* block */)a7;
- (BOOL)whiteListAllowsURL:(id)a0;
- (id)addressBookMatchesForProperty:(id)a0 key:(id)a1 label:(id)a2;
- (id)addressBookMatchesForProperty:(id)a0 key:(id)a1 label:(id)a2 partialString:(id)a3 contact:(id)a4 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)a5;
- (BOOL)autoFillCorrectionManagerShouldProcessFeedback:(id)a0;
- (id)completionDBPath;
- (id)feedbackProcessorForAutoFillCorrectionManager:(id)a0;
- (id)formAutoFillCorrectionManagerForFormFieldClassificationCorrector:(id)a0;
- (id)formFieldClassificationCorrector:(id)a0 bestAddressBookLabelForControlValue:(id)a1;
- (BOOL)formFieldClassificationCorrector:(id)a0 hasAddressBookDataForAddressBookLabel:(id)a1;
- (void)saveCompletionDBSoon;
- (BOOL)shouldAutoFillFromPreviousData;
- (id)uniqueIDOfContact:(id)a0;
- (id)_credentialMatchesEligibleForUpdateForURL:(id)a0 username:(id)a1 oldPassword:(id)a2;
- (id)_detailTextForPromptToSaveCard:(id)a0;
- (id)_addressBookMatchesForFamilyNameForContact:(id)a0;
- (id)_addressBookMatchesForFullNameForContact:(id)a0;
- (id)_addressBookMatchesForGivenNameForContact:(id)a0;
- (id)_addressBookMatchesForMiddleNameForContact:(id)a0;
- (id)_autoFillCorrectionManager;
- (void)_processCorrectionsForFormWithDomain:(id)a0 formMetadata:(id)a1 uniqueIDsOfControlsThatWereAutoFilled:(id)a2;
- (void)_promptToUpdateRelatedCredentials:(id)a0 urlHost:(id)a1 relatedCredentialsHighLevelDomain:(id)a2 webView:(id)a3 completionHandler:(id /* block */)a4;
- (id)_relatedCredentialMatchesToUpdateForUser:(id)a0 protectionSpace:(id)a1 oldSavedAccount:(id *)a2 matchesForCurrentHost:(id *)a3 matchesForAssociatedDomains:(id *)a4;
- (id)_relatedCredentialMatchesToUpdateForUser:(id)a0 protectionSpace:(id)a1 oldSavedAccount:(id *)a2 matchesForCurrentHost:(id *)a3 matchesForAssociatedDomains:(id *)a4 haveExistingCredentialWithSameUsernameAndDifferentPassword:(BOOL *)a5;
- (BOOL)_saveUser:(id)a0 password:(id)a1 isGeneratedPassword:(BOOL)a2 forURL:(id)a3 inContext:(id)a4 formType:(unsigned long long)a5 promptingPolicy:(long long)a6 webView:(id)a7 completionHandler:(id /* block */)a8;
- (BOOL)_shouldSaveCreditCardDataInWebView:(id)a0 frame:(id)a1;
- (BOOL)_shouldSaveUsernamesAndPasswordsForURL:(id)a0 inWebView:(id)a1;
- (BOOL)_shouldTryToSaveCredentialsFromLastForm:(id)a0 currentFormMetadata:(id)a1 frame:(id)a2;
- (void)_showCreditCardPromptForWebView:(id)a0 creditCard:(id)a1 completionHandler:(id /* block */)a2;
- (void)_showPasswordPromptForWebView:(id)a0 formType:(unsigned long long)a1 username:(id)a2 host:(id)a3 hasCredentialForCurrentHost:(BOOL)a4 existingCredentialMatchesForCurrentHost:(id)a5 otherSubdomainCredentialMatches:(id)a6 haveExistingCredentialWithSameUsernameAndDifferentPassword:(BOOL)a7 completionHandler:(id /* block */)a8;
- (void)_showPromptToSaveCreditCardSecurityCodeForWebView:(id)a0 cardNumber:(id)a1 securityCode:(id)a2 completionHandler:(id /* block */)a3;
- (id)_titleTextForWarning:(id)a0;
- (BOOL)_updateCredentialsWithGeneratedPasswordForForm:(id)a0 inWebView:(id)a1 frame:(id)a2 context:(id)a3;
- (void)_warnAboutWeakPasswordIfNecessaryWithWebView:(id)a0 savedAccount:(id)a1 protectionSpace:(id)a2;
- (BOOL)_webView:(id)a0 formSubmission:(BOOL)a1 willSubmitNewAccountOrChangePasswordFormWithMetadata:(id)a2 shouldPreferAnnotatedCredentials:(BOOL)a3 fromFrame:(id)a4 inContext:(id)a5 submissionHandler:(id /* block */)a6;
- (BOOL)_webView:(id)a0 saveCredentialsForURL:(id)a1 formSubmission:(BOOL)a2 formWithMetadata:(id)a3 fromFrame:(id)a4 username:(id)a5 password:(id)a6 inContext:(id)a7 submissionHandler:(id /* block */)a8;
- (BOOL)_webView:(id)a0 saveUsernameAndPasswordForURL:(id)a1 formType:(unsigned long long)a2 inFrame:(id)a3 username:(id)a4 password:(id)a5 isGeneratedPassword:(BOOL)a6 confirmOverwritingCurrentPassword:(BOOL)a7 inContext:(id)a8 submissionHandler:(id /* block */)a9;
- (BOOL)_webView:(id)a0 saveUsernameAndPasswordFromForm:(id)a1 inFrame:(id)a2 context:(id)a3 confirmOverwritingCurrentPassword:(BOOL)a4 shouldPreferAnnotatedCredentials:(BOOL)a5 submissionHandler:(id /* block */)a6;
- (BOOL)_webView:(id)a0 willSubmitFormContainingCreditCardData:(id)a1 fromFrame:(id)a2 submissionHandler:(id /* block */)a3;
- (BOOL)_webView:(id)a0 willSubmitLoginFormWithMetadata:(id)a1 formSubmission:(BOOL)a2 fromFrame:(id)a3 inContext:(id)a4 submissionHandler:(id /* block */)a5;
- (BOOL)_webView:(id)a0 willSubmitStandardFormWithMetadata:(id)a1 fromFrame:(id)a2 submissionHandler:(id /* block */)a3;
- (id)addressBookMatchesForProperty:(id)a0 key:(id)a1 label:(id)a2 contact:(id)a3;
- (void)clearAllFormCredentials;
- (void)didFillFieldWithGeneratedPassword:(id)a0 inFrame:(id)a1 webView:(id)a2;
- (void)saveUser:(id)a0 password:(id)a1 forURL:(id)a2 inContext:(id)a3 andPromptToUpdateRelatedCredentialsWithWebView:(id)a4;
- (id)savedAccountFromMatches:(id)a0 completingPartialUserInLoginForm:(id)a1;
- (BOOL)shouldAutoFillFromCreditCardDataInFrame:(id)a0;

@end
