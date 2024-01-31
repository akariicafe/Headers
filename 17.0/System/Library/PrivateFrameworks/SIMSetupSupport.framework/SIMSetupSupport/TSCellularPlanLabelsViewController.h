@class OBBoldTrayButton, TSCellularPlanLabelPickerTableViewController, NSArray, NSString, NSLayoutConstraint, NSMutableArray;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanLabelsViewController : TSOBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, TSSetupFlowItem> {
    OBBoldTrayButton *_doneButton;
}

@property (retain, nonatomic) NSLayoutConstraint *heightAnchor;
@property BOOL showDupLabelsFooter;
@property (retain) NSMutableArray *sortedPlanItemsWithPendingLabels;
@property (retain) TSCellularPlanLabelPickerTableViewController *labelPickerViewController;
@property (retain) NSArray *planItemBadges;
@property BOOL forceDualSIMSetup;
@property BOOL allowDismiss;
@property (readonly) NSString *iccid;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property BOOL requireSetup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (BOOL)canBeShownFromSuspendedState;
- (void)_doneButtonTapped;
- (void)_cancelButtonTapped;
- (void)prepare:(id /* block */)a0;
- (void)savePlanLabels:(id /* block */)a0;
- (id)getPendingLabelAtIndex:(long long)a0;
- (id)getPlanItemByIndex:(long long)a0;
- (id)getPredefinedUserLabels;
- (id)initWithAllowDismiss:(BOOL)a0;
- (id)initWithIccid:(id)a0 forceDualSIMSetup:(BOOL)a1 allowDismiss:(BOOL)a2;
- (void)prepareLabels:(id /* block */)a0;
- (void)setPendingLabel:(id)a0 forPlanItem:(id)a1;

@end
