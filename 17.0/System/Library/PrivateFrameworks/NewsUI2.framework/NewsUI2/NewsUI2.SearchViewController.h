@interface NewsUI2.SearchViewController : TUViewController <UISearchBarDelegate, UISearchControllerDelegate, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ searchBar;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ sceneStateManager;
    void /* unknown type, empty encoding */ origination;
    void /* unknown type, empty encoding */ searchAction;
    void /* unknown type, empty encoding */ clearAction;
    void /* unknown type, empty encoding */ sharingActivityProviderFactory;
    void /* unknown type, empty encoding */ refreshQueryParam;
    void /* unknown type, empty encoding */ refreshRecentSearch;
}

- (void)searchBarCancelButtonClicked:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)didDismissSearchController:(id)a0;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
