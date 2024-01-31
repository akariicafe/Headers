@class PSRegion, NSArray, PSLocaleSelector, NSString, UIView, UISearchBar, UITableView;

@interface PSLocaleController : PSViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate> {
    UITableView *_tableView;
    UIView *_contentView;
    UISearchBar *_searchBar;
    BOOL _searchMode;
    BOOL _hideKeyboardInSearchMode;
}

@property (retain, nonatomic) NSArray *filteredListContent;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSArray *regionsList;
@property (retain, nonatomic) PSRegion *currentRegion;
@property (retain, nonatomic) PSLocaleSelector *localeSelector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)loadView;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)_mainContentView;
- (id)filteredRegionsForRegionList:(id)a0 searchString:(id)a1;
- (void)loadRegions;
- (void)reloadDataAndScrollToCheckedRegionAnimated:(BOOL)a0;
- (void)reloadSections;
- (void)updateChecked:(id)a0;

@end
