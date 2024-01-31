@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol PSSpotlightSearchResultsControllerDelegate;

@interface PSSpotlightSearchResultsController : UITableViewController <PSKeyboardNavigationSearchResultsController> {
    NSMutableDictionary *_iconViewMap;
    NSMutableArray *_reusableIconViews;
    long long _deviceOrientation;
    double originalInset;
}

@property (retain, nonatomic) NSMutableArray *tableData;
@property (retain, nonatomic) NSArray *results;
@property (weak, nonatomic) id<PSSpotlightSearchResultsControllerDelegate> delegate;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)showSelectedSearchResult;
- (void)viewDidLoad;
- (void)searchQueryCompleted;
- (void)selectPreviousSearchResult;
- (void)searchQueryFoundItems:(id)a0;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)searchQueryStarted;
- (double)iconWidth;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)tableViewDidFinishReload:(id)a0;
- (void)selectNextSearchResult;
- (void)scrollViewDidScroll:(id)a0;
- (id)_itemForIndexPath:(id)a0;
- (void)_removeIconViewForSection:(id)a0;
- (void)_selectIndexPath:(id)a0;
- (void)_updateIconViews:(BOOL)a0;

@end
