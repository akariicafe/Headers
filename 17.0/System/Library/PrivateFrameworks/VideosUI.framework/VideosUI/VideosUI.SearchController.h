@class UISearchBar;

@interface VideosUI.SearchController : UISearchController {
    void /* unknown type, empty encoding */ customSearchBar;
}

@property (nonatomic, readonly) UISearchBar *searchBar;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSearchResultsController:(id)a0;

@end
