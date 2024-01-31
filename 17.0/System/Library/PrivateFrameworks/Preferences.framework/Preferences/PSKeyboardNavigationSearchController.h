@class UIViewController, PSKeyboardNavigationSearchBar;
@protocol PSKeyboardNavigationSearchResultsController;

@interface PSKeyboardNavigationSearchController : UISearchController

@property (retain, nonatomic) PSKeyboardNavigationSearchBar *searchBar;
@property (retain, nonatomic) UIViewController<PSKeyboardNavigationSearchResultsController> *searchResultsController;

- (void)_escapeKeyPressed;
- (void)_downArrowKeyPressed;
- (void)_upArrowKeyPressed;
- (void).cxx_destruct;
- (id)initWithSearchResultsController:(id)a0;

@end
