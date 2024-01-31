@class RTIDocumentState, UIViewController, RTIDocumentTraits;
@protocol AFUIModalUIDelegate;

@interface AFUIAutoFillCreditCardController : NSObject <AFUIAutoFillContentController>

@property (retain, nonatomic) RTIDocumentState *documentState;
@property (retain, nonatomic) RTIDocumentTraits *documentTraits;
@property (copy, nonatomic) id /* block */ performTextOperations;
@property (nonatomic) BOOL hasSuggestions;
@property (retain) UIViewController *presentingViewController;
@property (weak, nonatomic) id<AFUIModalUIDelegate> modalUIDelegate;

- (void).cxx_destruct;
- (void)_openSettings;
- (void)_generateSuggestions:(id /* block */)a0;
- (double)_maximumSuggestionsForReturnedSuggestions:(double)a0;
- (id)_menuIElementsForSuggestions:(id)a0;
- (void)_performTextOperationsWithSuggestion:(id)a0;
- (id)dateStringTextContentType:(id)a0 date:(id)a1 placeholderHint:(id)a2;
- (void)generateInitialMenu:(id /* block */)a0 menuChanged:(id /* block */)a1;
- (id)initWithDocumentTraits:(id)a0 documentState:(id)a1 presentingViewController:(id)a2 textOperationsHandler:(id /* block */)a3;

@end
