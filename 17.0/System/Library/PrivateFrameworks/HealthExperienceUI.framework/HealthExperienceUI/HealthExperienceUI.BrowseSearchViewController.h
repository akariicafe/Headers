@interface HealthExperienceUI.BrowseSearchViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <UISearchControllerDelegate, UISearchResultsUpdating, NSFetchedResultsControllerDelegate> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ healthExperienceStore;
    void /* unknown type, empty encoding */ predicateProvider;
    void /* unknown type, empty encoding */ directSearchResultProvider;
    void /* unknown type, empty encoding */ searchResultObserver;
    void /* unknown type, empty encoding */ pluginResultObserver;
    void /* unknown type, empty encoding */ searchNoResultsObserver;
    void /* unknown type, empty encoding */ resultsBeforeHealthRecordsDataSource;
    void /* unknown type, empty encoding */ healthRecordsResultsDataSource;
    void /* unknown type, empty encoding */ resultsAfterHealthRecordsDataSource;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_searchController;
}

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)willDismissSearchController:(id)a0;
- (void)viewDidLoad;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void).cxx_destruct;
- (void)willPresentSearchController:(id)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)didPresentSearchController:(id)a0;

@end
