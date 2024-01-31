@interface PXPhotosSearchController : NSObject <UISearchBarDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ searchViewModel;
    void /* unknown type, empty encoding */ searchBar;
    void /* unknown type, empty encoding */ searchResultsViewController;
    void /* unknown type, empty encoding */ searchQueryController;
}

- (void)searchBarCancelButtonClicked:(id)a0;
- (id)init;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)a0;

@end
