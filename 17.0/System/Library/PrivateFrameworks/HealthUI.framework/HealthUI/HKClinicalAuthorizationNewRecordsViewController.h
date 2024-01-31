@class NSString, HKClinicalAuthorizationDisplayController, HKClinicalAuthorizationSequenceContext, UITableView;
@protocol HKHealthPrivacyServicePromptControllerDelegate;

@interface HKClinicalAuthorizationNewRecordsViewController : HKViewController <UITableViewDataSource, UITableViewDelegate, HKHealthPrivacyServicePromptController>

@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) HKClinicalAuthorizationDisplayController *displayController;
@property (nonatomic) long long authorizationMode;
@property (readonly, nonatomic) HKClinicalAuthorizationSequenceContext *context;
@property (weak, nonatomic) id<HKHealthPrivacyServicePromptControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)initWithContext:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_finishWithError:(id)a0;
- (void)_updateForCurrentContentSizeCategory;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_configureNavigationItem;
- (void)_doneButtonPressed:(id)a0;
- (void)_configureTableView;
- (id)_createFooterView;
- (id)_createHeaderView;
- (id)_indexPathForShareAuthorizationMode:(long long)a0;
- (BOOL)_indexPathIsValidRow:(id)a0;
- (id)_shareAuthorizationModeCellForIndexPath:(id)a0;
- (void)_shareAuthorizationModeCellPressed:(id)a0;
- (long long)_shareAuthorizationModeForIndexPath:(id)a0;
- (id)_titleForShareAuthorizationModeFooter;
- (void)_updateShareAuthorizationModeSectionFooter;
- (id)_visibleShareAuthorizationModeCellForMode:(long long)a0;

@end
