@class NSArray, NSString, WDBuddyFlowUserInfo, HKTitledContactBuddyHeaderView, WDBuddyFlowContinueFooterView;
@protocol ProfileBuddyViewControllerDelegate;

@interface ProfileBuddyViewController : HKTableViewController <UITableViewDataSource, UITableViewDelegate, HKSimpleDataEntryItemToolbarDelegate> {
    HKTitledContactBuddyHeaderView *_headerView;
    WDBuddyFlowContinueFooterView *_footerView;
    WDBuddyFlowUserInfo *_userInfo;
    BOOL _hasSetUpHeaderAndFooterViews;
}

@property (retain, nonatomic) NSArray *dataEntryItems;
@property (weak, nonatomic) id<ProfileBuddyViewControllerDelegate> delegate;
@property (readonly, nonatomic) WDBuddyFlowUserInfo *buddyFlowUserInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)_localeDidChange:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (id)initWithCoder:(id)a0;
- (void)continueButtonTapped:(id)a0;
- (void)_configureHeaderView:(id)a0;
- (id)_createTableHeaderView;
- (void)_setupObservers;
- (id)_createTableFooterView;
- (void)dataEntryItemDonePressed:(id)a0;
- (void)dataEntryItemNextPressed:(id)a0;
- (void)dataEntryItemPrevPressed:(id)a0;
- (void)focusItemAtIndex:(long long)a0;
- (id)initWithBuddyFlowUserInfo:(id)a0;
- (void)setUpHeaderAndFooterViewsIfNeeded;

@end
