@class UIViewController, AFUIContactsController, RTIDocumentTraits;
@protocol AFUIModalUIDelegate;

@interface AFUIAutofillContactsController : NSObject <AFUIContactPropertyPickerDelegate, AFUIAutoFillContentController>

@property (retain, nonatomic) RTIDocumentTraits *documentTraits;
@property (copy, nonatomic) id /* block */ performTextOperations;
@property (retain, nonatomic) AFUIContactsController *contactsController;
@property BOOL hasSuggestions;
@property (retain) UIViewController *presentingViewController;
@property (weak, nonatomic) id<AFUIModalUIDelegate> modalUIDelegate;

- (void).cxx_destruct;
- (BOOL)isSingleLineDocument;
- (void)_addCustomInfoActions:(id)a0;
- (id)_chooseOtherMenu;
- (void)_generateSuggestions:(id /* block */)a0;
- (double)_maximumSuggestionsForReturnedSuggestions:(double)a0;
- (id)_meActiom;
- (void)_performCustomInfoTextOperations:(id)a0;
- (void)_presentContactPicker;
- (void)_presentCustomizeUI;
- (void)contactPickerDidCancel;
- (void)generateInitialMenu:(id /* block */)a0 menuChanged:(id /* block */)a1;
- (id)initWithDocumentTraits:(id)a0 presentingViewController:(id)a1 textOperationsHandler:(id /* block */)a2;
- (void)userSelectedContactProperties:(id)a0;

@end
