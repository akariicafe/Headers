@interface HealthExperienceUI.BrowseViewController : UIViewController {
    void /* unknown type, empty encoding */ activeSearchController;
    void /* unknown type, empty encoding */ preservedSearchText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_browseCategoriesViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_browseSearchViewController;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ experienceStore;
    void /* unknown type, empty encoding */ $__lazy_storage_$_profileBarButton;
    void /* unknown type, empty encoding */ sidebarEmptySearchState;
    void /* unknown type, empty encoding */ categoriesEmptySearchState;
}

- (void)restoreUserActivityState:(id)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewIsAppearing:(BOOL)a0;
- (void)updateStateForTraitCollection;

@end
