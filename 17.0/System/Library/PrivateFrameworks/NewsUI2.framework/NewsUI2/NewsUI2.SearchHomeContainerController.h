@interface NewsUI2.SearchHomeContainerController : TUViewController <UISearchControllerDelegate, UISearchBarDelegate> {
    void /* unknown type, empty encoding */ searchBar;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ searchHomeViewController;
    void /* unknown type, empty encoding */ searchResultsViewController;
    void /* unknown type, empty encoding */ toolbarManager;
    void /* unknown type, empty encoding */ currentSearchTerm;
}

- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)didDismissSearchController:(id)a0;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)contentScrollView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
