@class NSString, NSArray, PXSettingsIndexer, PXInfoUpdater, UISearchBar, NSProgress, PXSettingsIndex, PTUISettingsController;

@interface PXSettingsSearchViewController : UITableViewController <UISearchBarDelegate, PXInfoProvider, PXInfoUpdaterObserver>

@property (readonly, nonatomic) UISearchBar *searchBar;
@property (retain, nonatomic) PXSettingsIndexer *indexer;
@property (retain, nonatomic) NSProgress *indexingProgress;
@property (retain, nonatomic) PXSettingsIndex *index;
@property (readonly, nonatomic) PXInfoUpdater *resultsInfoUpdater;
@property (copy, nonatomic) NSArray *searchResults;
@property (readonly, nonatomic) PTUISettingsController *settingsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchBarCancelButtonClicked:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)priorityForInfoRequestOfKind:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)infoUpdaterDidUpdate:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)requestInfoOfKind:(id)a0 withResultHandler:(id /* block */)a1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)_handleCancelItem:(id)a0;
- (void)_indexerDidComplete;
- (id)initWithSettingsController:(id)a0;

@end
