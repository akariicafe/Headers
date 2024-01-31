@interface _TtCV8VideosUI17HostedUISearchBar11Coordinator : NSObject <UISearchBarDelegate, UITextFieldDelegate> {
    void /* unknown type, empty encoding */ _text;
    void /* unknown type, empty encoding */ _isSearching;
    void /* unknown type, empty encoding */ _searchButtonClicked;
    void /* unknown type, empty encoding */ recordMetricsForSubmit;
}

- (void)searchBarCancelButtonClicked:(id)a0;
- (id)init;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)a0;

@end
