@class UIViewController, NSString, RTIDocumentTraits, AFUIPasswordsController;
@protocol AFUIModalUIDelegate;

@interface AFUIAutoFillPasswordController : NSObject <AFUIPasswordPickerDelegate, AFUIAutoFillContentController> {
    id /* block */ _textOperationsHandler;
    id /* block */ _menuChanged;
    RTIDocumentTraits *_documentTraits;
    BOOL _hasAccountSuggestions;
    BOOL _hasOneTimeCodeSuggestions;
    AFUIPasswordsController *_passwordsController;
    UIViewController *_presentingViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AFUIModalUIDelegate> modalUIDelegate;

- (BOOL)hasSuggestions;
- (void).cxx_destruct;
- (id)_keyboardDictionaryWithCredential:(id)a0;
- (void)_loadAccountSuggestions:(id /* block */)a0;
- (void)_loadOneTimeCodeSuggestions:(id /* block */)a0;
- (id)_menuItemImageForOneTimeCodeSuggestion:(id)a0;
- (void)_performTextOperationsWithAccountSuggestion:(id)a0;
- (void)_performTextOperationsWithCredential:(id)a0;
- (void)_performTextOperationsWithOneTimeCodeSuggestion:(id)a0;
- (void)_performTextOperationsWithStringValue:(id)a0;
- (void)_reloadOneTimeCodeSuggestions;
- (void)_showAllPasswordsView;
- (void)generateInitialMenu:(id /* block */)a0 menuChanged:(id /* block */)a1;
- (id)initWithDocumentTraits:(id)a0 presentingViewController:(id)a1 textOperationsHandler:(id /* block */)a2;
- (void)passwordsController:(id)a0 fillPassword:(id)a1;
- (void)passwordsController:(id)a0 fillUsername:(id)a1;
- (void)passwordsController:(id)a0 fillVerificationCode:(id)a1;
- (void)passwordsController:(id)a0 selectedCredential:(id)a1;

@end
