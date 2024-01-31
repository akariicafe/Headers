@class UINavigationController, PKSearchResultsViewController;

@interface PKSearchResultsSearchController : UISearchController {
    UINavigationController *_navVC;
    PKSearchResultsViewController *_resultsVC;
    BOOL _searchBarWasFirstResponder;
    BOOL _showSearchBar;
}

- (void)viewWillLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)_updateSearchBarFrame;
- (id)initWithPaymentDataProvider:(id)a0 transactionSourceCollection:(id)a1 familyCollection:(id)a2;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)setSearchBarVisible:(BOOL)a0;

@end
