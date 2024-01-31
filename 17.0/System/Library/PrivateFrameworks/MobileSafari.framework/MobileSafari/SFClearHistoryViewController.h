@class SFTableViewDiffableDataSource, NSString, NSArray, NSIndexPath;
@protocol SFClearHistoryViewControllerDelegate;

@interface SFClearHistoryViewController : UITableViewController <SFTableViewDiffableDataSourceDelegate> {
    NSIndexPath *_currentlySelectedTimeframeIndex;
    NSIndexPath *_currentlySelectedProfileIndex;
    unsigned long long _numberOfProfileRows;
    BOOL _closeAllTabsToggleEnabled;
    SFTableViewDiffableDataSource *_dataSource;
    NSArray *_profiles;
}

@property (weak, nonatomic) id<SFClearHistoryViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_cellForActionItemIdentifier:(id)a0 indexPath:(id)a1;
- (id)_cellForAdditionalOptionsItemIdentifier:(id)a0 indexPath:(id)a1;
- (id)_cellForIdentifier:(id)a0 indexPath:(id)a1;
- (id)_cellForProfileItemIdentifier:(id)a0 indexPath:(id)a1;
- (id)_cellForTimeFrameItemIdentifier:(id)a0 indexPath:(id)a1;
- (void)_reloadDataAnimatingDifferences:(BOOL)a0;
- (id)dataSource:(id)a0 headerTextForSection:(long long)a1;
- (id)initWithTabGroupManager:(id)a0;
- (void)submitButtonTapped:(id)a0;
- (void)toggleSwitchChanged:(id)a0;

@end
