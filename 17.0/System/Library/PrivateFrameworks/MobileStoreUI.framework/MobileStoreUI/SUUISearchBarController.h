@class UISearchBar, SUUIClientContext, NSString, SUUISearchFieldController, SUUIFocusedTouchGestureRecognizer, SUUISearchBarViewElement, UIViewController;

@interface SUUISearchBarController : NSObject <SUUISearchFieldDelegate, UISearchBarDelegate> {
    SUUIFocusedTouchGestureRecognizer *_cancelTouchGestureRecognizer;
    UISearchBar *_searchBar;
    SUUISearchFieldController *_searchFieldController;
    BOOL _usesSearchFieldController;
}

@property (retain, nonatomic) SUUISearchBarViewElement *searchBarViewElement;
@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (nonatomic) BOOL displaysSearchBarInNavigationBar;
@property (nonatomic) BOOL showsResultsForEmptyField;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (readonly, nonatomic) UISearchBar *searchBar;
@property (readonly, nonatomic) BOOL canBecomeActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)becomeActive;
- (void)dealloc;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)resignActive:(BOOL)a0;
- (void)_cancelGestureAction:(id)a0;
- (void)_customizeSearchBar:(id)a0;
- (void)_customizeSearchFieldController:(id)a0;
- (void)_dispatchChangeEventWithText:(id)a0;
- (void)_dispatchSubmitEventWithText:(id)a0 URL:(id)a1 searchHintOriginalTerm:(id)a2 searchHintIndex:(id)a3;
- (id)_newSearchFieldController;
- (void)_removeCancelTouchGestureRecognizer;
- (id)_searchFieldController;
- (id)initWithSearchBarViewElement:(id)a0;
- (void)reloadAfterDocumentUpdate;
- (void)searchFieldController:(id)a0 requestSearch:(id)a1;
- (void)searchFieldController:(id)a0 searchBarDidChangeText:(id)a1;

@end
