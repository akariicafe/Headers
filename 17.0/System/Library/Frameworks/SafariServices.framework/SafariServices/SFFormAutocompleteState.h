@class SFCreditCardFillingViewController, WBSFormMetadata, NSDictionary, _SFFormDataController, _ASCredentialAuthenticationViewController, WBSFormAutoFillMetadataCorrector, _SFFormAutoFillController, WBSHideMyEmailRecord, UIView, NSString, _SFFormAutoFillInputSession, NSArray, WBSAuthenticationServicesAgentProxy, SFFormAutoFillFrameHandle, WBSFormControlMetadata, WBSMultiRoundAutoFillManager;

@interface SFFormAutocompleteState : NSObject <CNContactPickerDelegate, SFContactAutoFillViewControllerFiller, _SFCreditCardCaptureViewControllerDelegate, SFAppAutoFillOneTimeCodeProviderObserver, _ASCredentialListViewControllerDelegate, _ASCredentialAuthenticationViewControllerDelegate> {
    _SFFormAutoFillController *_autoFillController;
    _SFFormDataController *_dataController;
    UIView *_emptyInputView;
    WBSFormMetadata *_formMetadata;
    unsigned long long _formType;
    NSDictionary *_formValues;
    BOOL _gatheringFormValues;
    BOOL _hasNotedThatTextDidChangeInPasswordField;
    NSString *_prefixForSuggestions;
    NSArray *_cachedCredentialMatches;
    NSArray *_cachedRelatedCredentialMatches;
    id /* block */ _credentialMatchesCompletionHandler;
    BOOL _fetchingLoginCredentialSuggestions;
    BOOL _invalidated;
    BOOL _hasDeterminedIfURLIsAllowedByWhiteList;
    BOOL _URLIsAllowedByWhiteList;
    id /* block */ _displayOtherContactsCompletionHandler;
    id /* block */ _customAutoFillContactCompletionHandler;
    id /* block */ _creditCardCaptureCompletionHandler;
    WBSFormAutoFillMetadataCorrector *_metadataCorrector;
    NSArray *_cachedExternalCredentialIdentities;
    _ASCredentialAuthenticationViewController *_externalCredentialViewController;
    id /* block */ _externalCredentialListCompletionHandler;
    BOOL _submitExternalCredential;
    BOOL _performingPageLevelAutoFill;
    WBSHideMyEmailRecord *_hideMyEmailRecord;
    SFCreditCardFillingViewController *_creditCardViewController;
    WBSAuthenticationServicesAgentProxy *_authenticationServicesAgentProxy;
    long long _quickTypeBarTrailingButtonPurpose;
}

@property (nonatomic) long long action;
@property (readonly, nonatomic) _SFFormAutoFillInputSession *inputSession;
@property (readonly, nonatomic) BOOL shouldOfferToAutoFillCreditCardData;
@property (readonly, nonatomic) WBSMultiRoundAutoFillManager *multiRoundAutoFillManager;
@property (readonly, nonatomic) BOOL currentTextFieldLooksLikeCardSecurityCodeFieldButNotCardNumberOrCardholderField;
@property (readonly, nonatomic) SFFormAutoFillFrameHandle *frame;
@property (readonly, nonatomic) WBSFormControlMetadata *textFieldMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_getMatchesFromFormProtectionSpace:(id)a0 matchesFromOtherProtectionSpaces:(id)a1 withFormURL:(id)a2 credentialMatches:(id)a3 lastGeneratedPassword:(id)a4 currentUser:(id)a5 currentPassword:(id)a6 forUserNamesOnly:(BOOL)a7;
+ (BOOL)_shouldSaveCredentialsInProtectionSpace:(id)a0 savedAccountContext:(id)a1;

- (void)updateSuggestions;
- (void)dealloc;
- (void)invalidate;
- (void)autoFill;
- (void).cxx_destruct;
- (void)performPageLevelAutoFill;
- (void)oneTimeCodeProviderReceivedCode:(id)a0;
- (void)autoFillTextSuggestion:(id)a0;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)_clearCachedCredentials;
- (id)_actionForPresentingPasswordManagerExtension:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateCreditCardAutoFillAction;
- (void)_textDidChangeInForm:(id)a0 textField:(id)a1;
- (long long)_actionForLoginForm;
- (id)_addHideMyEmailSuggestionsIfNecessary:(id)a0 hideMyEmailRecord:(id)a1;
- (void)_addPasswordsAutoFillSuggestionToSuggestions:(id)a0 forPurpose:(long long)a1;
- (void)_autoFillDisplayData:(id)a0 setAutoFilled:(BOOL)a1;
- (void)_autoFillFormWithUsername:(id)a0;
- (void)_autoFillHideMyEmailRecord:(id)a0;
- (void)_autoFillSingleCreditCardData:(long long)a0;
- (void)_autoFillWithSet:(id)a0;
- (id)_bestTextFieldMetadataForMetadata:(id)a0;
- (id)_cachedPotentialCredentialMatches;
- (BOOL)_canAutoFillCreditCardData;
- (void)_clearAutoFilledCreditCardFieldsAndShowAllCreditCards;
- (void)_completePasskeyAssertionWithCredential:(id)a0 completionHandler:(id /* block */)a1;
- (id)_correctedFormMetadata:(id)a0;
- (id)_createCreditCardHeaderViewControllerForEscapeHatchAlertControllerForCard:(id)a0;
- (void)_fetchPotentialCredentialMatchesWithCompletion:(id /* block */)a0;
- (void)_fillASPasswordCredential:(id)a0 needsAuthentication:(BOOL)a1 setAutoFilled:(BOOL)a2 submitForm:(BOOL)a3;
- (void)_fillCredential:(id)a0 setAutoFilled:(BOOL)a1 setAsDefaultCredential:(BOOL)a2 focusFieldAfterFilling:(BOOL)a3 submitForm:(BOOL)a4;
- (void)_fillCredentialAfterAuthenticationIfNeeded:(id)a0 setAsDefaultCredential:(BOOL)a1 submitForm:(BOOL)a2;
- (void)_fillCredentialIdentity:(id)a0 submitForm:(BOOL)a1;
- (void)_fillCreditCardData:(id)a0;
- (void)_fillCreditCardDataAfterAuthenticationIfNeeded:(id)a0;
- (void)_fillOneTimeCodeAfterAuthenticationIfNeeded:(id)a0 inFrame:(id)a1 shouldSubmit:(BOOL)a2;
- (void)_fillSavedAccount:(id)a0 setAutoFilled:(BOOL)a1 setAsDefaultCredential:(BOOL)a2 focusFieldAfterFilling:(BOOL)a3 submitForm:(BOOL)a4;
- (void)_fillSavedAccountMatchAfterAuthenticationIfNeeded:(id)a0 setAsDefaultCredential:(BOOL)a1 submitForm:(BOOL)a2;
- (void)_fillSingleCreditCardDataValue:(id)a0 creditCardDataType:(long long)a1;
- (void)_finishPageLevelAutoFillWithResult:(long long)a0;
- (void)_gatherAndShowAddressBookAutoFillSuggestions;
- (void)_gatherAndShowAddressBookAutoFillSuggestionsWithCorrections;
- (void)_gatherFormValues;
- (void)_gatherFormValuesWithCompletionHandler:(id /* block */)a0;
- (void)_generateAndSuggestPasswordWithCompletionHandler:(id /* block */)a0;
- (void)_getLoginFormUser:(id *)a0 password:(id *)a1 userIsAutoFilled:(BOOL *)a2 passwordIsAutoFilled:(BOOL *)a3;
- (void)_getMatchingKeychainCredentialsIncludingCredentialsWithEmptyUsernames:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_getShouldOfferForgetPassword:(BOOL *)a0 savePassword:(BOOL *)a1;
- (BOOL)_hasMatchWithUser:(id)a0 password:(id)a1;
- (id)_hideMyEmailCreationSuggestion;
- (id)_hideMyEmailSuggestionForRecord:(id)a0;
- (id)_messageForPageLevelAutoFillNotAvailableAlertForResult:(long long)a0;
- (void)_offerToAutoFillContact;
- (void)_offerToAutoFillFromAvailableOneTimeCodes;
- (void)_offerToAutoFillFromPotentialCredentialMatches;
- (void)_offerToForgetSavedAccount:(id)a0 completionHandler:(id /* block */)a1;
- (long long)_passwordGenerationAssistanceAction;
- (BOOL)_passwordGenerationAssistanceAutoFillButtonEnabled;
- (void)_performAutoFill;
- (void)_performPageLevelContactAutoFill;
- (void)_performPageLevelCredentialAutoFill;
- (void)_presentContactsAccessSettingsAlert;
- (void)_presentCredentialListForExtension:(id)a0 completionHandler:(id /* block */)a1;
- (void)_presentViewController:(id)a0 presentingViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)_provisionHideMyEmailRecord;
- (void)_setShowingKeyboardInputView:(BOOL)a0;
- (void)_setUpMultiRoundAutoFillManagerIfNecessary;
- (void)_setUserAndPasswordFieldsAutoFilled:(BOOL)a0 clearPasswordField:(BOOL)a1;
- (BOOL)_shouldAllowExternalPasswordAutoFillOnURL:(id)a0;
- (BOOL)_shouldAllowGeneratedPassword;
- (BOOL)_shouldOfferCreditCardDataAfterUserHasFilledCreditCardData:(id)a0;
- (BOOL)_shouldShowPasswordOptions;
- (BOOL)_shouldUsePasswordGenerationAssistanceForTextField;
- (void)_showCreditCardDataSuggestionsAfterUserHasFilledCreditCardData;
- (void)_showOtherContactOptions;
- (void)_showPageLevelAutoFillNotAvailableAlertForResult:(long long)a0;
- (id)_sortedSingleCreditCardDataArray:(id)a0;
- (void)_startHideMyEmailRecordUpdate;
- (void)_suggestLoginCredentialsShowingQuickTypeKey:(BOOL)a0;
- (void)_suggestPasswordForNewAccountOrChangePasswordForm;
- (BOOL)_suggestUsernamesForRegistrationIfPossible:(unsigned long long)a0;
- (id)_suggestionsForAutoFillDisplayData:(id)a0;
- (void)_switchToCustomInputViewWithMatches:(id)a0 contact:(id)a1;
- (BOOL)_textFieldIsEmptyPasswordField;
- (id)_textSuggestionForCredentialDisplayData:(id)a0 submitForm:(BOOL)a1;
- (id)_textSuggestionForExternalCredentialIdentity:(id)a0 submitForm:(BOOL)a1;
- (id)_titleForPageLevelAutoFillNotAvailableAlertForResult:(long long)a0;
- (void)_updateAutoFillActionToCaptureCreditCardAndFill;
- (void)_updateSuggestions:(unsigned long long)a0;
- (id)_viewControllerToPresentFrom;
- (void)captureCreditCardDataWithCameraAndFill;
- (void)credentialAuthenticationViewController:(id)a0 didFinishWithCredential:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)credentialAuthenticationViewController:(id)a0 didFinishWithPasskeyAssertionCredential:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)credentialAuthenticationViewController:(id)a0 didFinishWithPasskeyRegistrationCredential:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)credentialListViewController:(id)a0 didFinishWithCredential:(id)a1 completion:(id /* block */)a2;
- (void)credentialListViewController:(id)a0 didFinishWithPasskeyAssertionCredential:(id)a1 completion:(id /* block */)a2;
- (void)creditCardCaptureViewController:(id)a0 didCaptureCreditCard:(id)a1;
- (void)creditCardCaptureViewControllerDidCancel:(id)a0;
- (void)dismissCustomAutoFill;
- (id)externalCredentialIdentities;
- (void)getTextSuggestionForStreamlinedAutoFillWithCredentialIdentity:(id)a0 completion:(id /* block */)a1;
- (id)initWithFrame:(id)a0 form:(id)a1 textField:(id)a2 inputSession:(id)a3 autoFillController:(id)a4;
- (void)newAutoFillablePasskeysAvailable:(id)a0;
- (void)performAutoFillWithMatchSelections:(id)a0 doNotFill:(id)a1 contact:(id)a2;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)a0;
- (void)presentUnavailableVirtualCardAlert;
- (void)showAllPasswordsButtonTapped;
- (void)textDidChangeInFrame:(id)a0 form:(id)a1 textField:(id)a2;
- (void)updateAutoFillButton;
- (void)updateCachedFormMetadataAfterFilling:(id)a0;

@end
