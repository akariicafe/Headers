@class NSString, NSMutableSet, DSSharingPermissions;
@protocol DSNavigationDelegate;

@interface DSReadOnlyResourceSharingController : DSTableWelcomeController <DSReadOnlyResourceSharingDetailDelegate, DSController>

@property (retain, nonatomic) DSSharingPermissions *permissions;
@property (nonatomic) unsigned long long scope;
@property (retain, nonatomic) NSMutableSet *selectedPeople;
@property (retain, nonatomic) NSMutableSet *selectedTypes;
@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)searchBar:(id)a0 selectedScopeButtonIndexDidChange:(long long)a1;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)_updateButton;
- (void)learnMorePressedForSharingType:(id)a0;
- (void)_pushDetailPaneForSharingTypes:(id)a0;
- (void)_pushDetailPaneForSharingPeople:(id)a0;
- (void)_reviewAllSharing;
- (void)filterContentForSearchText:(id)a0 category:(long long)a1;
- (void)reloadTableViewData;
- (void)reviewReadOnlySharingCompleted;
- (void)reviewSelectedSharing;

@end
