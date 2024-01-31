@class OBBoldTrayButton, OBLinkTrayButton, UISearchController, UIActivityIndicatorView, UIBarButtonItem, NSString, UITapGestureRecognizer;

@interface DSTableWelcomeController : OBTableWelcomeController <UISearchBarDelegate, UISearchResultsUpdating, UISearchControllerDelegate, UITableViewDelegate, UITableViewDataSource>

@property (nonatomic) BOOL isSpinnerActive;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) OBBoldTrayButton *boldButton;
@property (retain, nonatomic) OBLinkTrayButton *linkButton;
@property (retain, nonatomic) UISearchController *searchController;
@property (nonatomic) BOOL shouldShowSearchBar;
@property (nonatomic) BOOL isFiltering;
@property (nonatomic) BOOL isModelEmpty;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) UIBarButtonItem *quickExitButton;
@property (nonatomic) BOOL isShowingNoSharingView;
@property (nonatomic) BOOL isShowingNoResultsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)willDismissSearchController:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)hideKeyboard;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void).cxx_destruct;
- (void)willPresentSearchController:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)tableView:(id)a0 didHighlightRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)setupSearchBar;
- (void)setupTableView;
- (void)hideNoResultsView;
- (void)addBorderedIcon:(id)a0;
- (void)hideButtonsIfSearching;
- (void)hideNoSharingView;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 shouldShowSearchBar:(BOOL)a3;
- (BOOL)isKeyboardActive;
- (BOOL)isSearchBarEmpty;
- (void)presentErrorAlertController:(id)a0;
- (void)presentErrorAlertController:(id)a0 okHandler:(id /* block */)a1;
- (void)presentErrorAlertWithTitle:(id)a0 message:(id)a1 continueHandler:(id /* block */)a2 tryAgainHandler:(id /* block */)a3;
- (void)showNoResultsViewWithSearchText:(id)a0;
- (void)showNoSharingViewWithText:(id)a0 image:(id)a1;
- (void)startContentSpinner;
- (void)stopContentSpinner;

@end
