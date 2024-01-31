@class NSString, RTIDocumentState, RTIDocumentTraits, AFUIContactsController, AFUIPasswordsController;
@protocol AFUIModalUIDelegate;

@interface AFUIExplicitAutoFillController : NSObject <AFUIContactPropertyPickerDelegate, AFUIPasswordPickerDelegate> {
    RTIDocumentTraits *_documentTraits;
    RTIDocumentState *_documentState;
    id /* block */ _textOperationsHandler;
    id /* block */ _keyboardOutputHandler;
    AFUIContactsController *_contactsController;
    AFUIPasswordsController *_passwordsController;
}

@property (weak, nonatomic) id<AFUIModalUIDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isExplicitAutoFillInvocationWithDocumentTraits:(id)a0;

- (void).cxx_destruct;
- (BOOL)isSingleLineDocument;
- (void)presentFromViewController:(id)a0;
- (void)_finishWithSelectedCredential:(id)a0;
- (void)_finishWithStringValue:(id)a0;
- (void)_showContactsPanelFromViewController:(id)a0;
- (void)_showCreditCardsPanelFromViewController:(id)a0;
- (void)_showPasswordsPanelFromViewController:(id)a0;
- (void)_yieldToClientApplicationIfNeeded;
- (void)authenticationDidEndWithCompletion:(id /* block */)a0;
- (void)authenticationWillBeginWithCompletion:(id /* block */)a0;
- (void)contactPickerDidCancel;
- (id)initWithDocumentTraits:(id)a0 documentState:(id)a1 keyboardOutputHandler:(id /* block */)a2;
- (id)initWithDocumentTraits:(id)a0 documentState:(id)a1 textOperationsHandler:(id /* block */)a2;
- (void)passwordsController:(id)a0 fillPassword:(id)a1;
- (void)passwordsController:(id)a0 fillUsername:(id)a1;
- (void)passwordsController:(id)a0 fillVerificationCode:(id)a1;
- (void)passwordsController:(id)a0 selectedCredential:(id)a1;
- (void)userSelectedContactProperties:(id)a0;

@end
