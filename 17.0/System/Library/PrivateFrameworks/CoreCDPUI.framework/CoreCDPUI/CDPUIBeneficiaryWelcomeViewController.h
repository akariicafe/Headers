@class NSString, NSArray;
@protocol CDPUIBeneficiaryWelcomeViewControllerDelegate;

@interface CDPUIBeneficiaryWelcomeViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource> {
    NSArray *_accessibleAppsDetails;
    NSArray *_restrictedAppsDetails;
}

@property (weak, nonatomic) id<CDPUIBeneficiaryWelcomeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)_setupViews;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)_setupTableView;
- (void)cancelTapped:(id)a0;
- (void)learnMoreTapped:(id)a0;
- (id)_configurationForIndexPath:(id)a0;
- (void)_setupAppOptions;
- (void)okTapped:(id)a0;

@end
