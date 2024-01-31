@class _HKMedicalIDData, NSString, NSArray, WDBuddyFlowUserInfo, HKHealthStore, HKTitledContactBuddyHeaderView, WDProfile, WDBuddyFlowContinueFooterView, WDUserDefaults;
@protocol WDBuddyControllerUserInfoDelegate;

@interface WDBuddyFlowUserInfoViewController : HKTableViewController <UITableViewDataSource, UITableViewDelegate, WDUserActivityResponder, HKSimpleDataEntryItemToolbarDelegate> {
    WDProfile *_profile;
    BOOL _isLastScreen;
    HKHealthStore *_healthStore;
    WDUserDefaults *_userDefaults;
    _HKMedicalIDData *_medicalIDData;
    NSString *_baseAutomationIdentifier;
    HKTitledContactBuddyHeaderView *_headerView;
    WDBuddyFlowContinueFooterView *_footerView;
    BOOL _hasSetUpHeaderAndFooterViews;
}

@property (retain, nonatomic) NSArray *dataEntryItems;
@property (retain, nonatomic) WDBuddyFlowUserInfo *userInfo;
@property (weak, nonatomic) id<WDBuddyControllerUserInfoDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)_localeDidChange:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (id)initWithCoder:(id)a0;
- (void)_loadData;
- (void)continueButtonTapped:(id)a0;
- (void)_configureHeaderView:(id)a0;
- (id)_createTableHeaderView;
- (void)_setupObservers;
- (id)_createTableFooterView;
- (void)dataEntryItemDonePressed:(id)a0;
- (void)dataEntryItemNextPressed:(id)a0;
- (void)dataEntryItemPrevPressed:(id)a0;
- (void)focusItemAtIndex:(long long)a0;
- (void)setUpHeaderAndFooterViewsIfNeeded;
- (void)applyChangeActivity:(id)a0;
- (id)applyTransitionActivity:(id)a0;
- (void)_saveDataWithCompletion:(id /* block */)a0;
- (id)initWithProfile:(id)a0 isLastScreen:(BOOL)a1;

@end
