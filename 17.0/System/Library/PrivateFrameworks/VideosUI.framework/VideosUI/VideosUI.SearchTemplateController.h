@interface VideosUI.SearchTemplateController : VideosUI.VUIViewController <VideosUI.VUIDeeplinkURLHandlingInterceptor, UISearchControllerDelegate, UISearchBarDelegate, UISearchBarDelegate_Private> {
    void /* unknown type, empty encoding */ internalCustomSearchFieldWidth;
    void /* unknown type, empty encoding */ maxSearchFieldWidth;
    void /* unknown type, empty encoding */ searchController;
    void /* unknown type, empty encoding */ searchTopResultsServiceRequest;
    void /* unknown type, empty encoding */ recentlySearchedDataManager;
    void /* unknown type, empty encoding */ document;
    void /* unknown type, empty encoding */ searchHintsServiceRequest;
    void /* unknown type, empty encoding */ currentSearchTextInputSource;
    void /* unknown type, empty encoding */ resultsServiceRequest;
    void /* unknown type, empty encoding */ resultsViewController;
    void /* unknown type, empty encoding */ landingPageViewController;
    void /* unknown type, empty encoding */ activeSearchState;
    void /* unknown type, empty encoding */ pageMetrics;
    void /* unknown type, empty encoding */ pagePerformanceProvider;
    void /* unknown type, empty encoding */ collectionImpressioner;
    void /* unknown type, empty encoding */ loadingConfiguration;
}

- (void)searchBarCancelButtonClicked:(id)a0;
- (void)willDismissSearchController:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)willPresentSearchController:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_searchBar:(id)a0 proposedSearchFieldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)deeplinkURLWasHandled:(id)a0;
- (void)handleWithKeyboardShowNotification:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)vui_viewDidLoad;
- (void)vui_didMoveToParentViewController:(id)a0;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewDidDisappear:(BOOL)a0;
- (void)vui_viewWillAppear:(BOOL)a0;
- (void)vui_viewWillDisappear:(BOOL)a0;

@end
