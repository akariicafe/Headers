@class OBBoldTrayButton, NSArray, NSString, NSLayoutConstraint, NSMutableArray, NSIndexPath;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanUsesViewController : TSOBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem> {
    OBBoldTrayButton *_doneButton;
    NSLayoutConstraint *_heightConstraint;
    BOOL _dataSwitchEnabled;
    BOOL _inPrivateNetworkMode;
}

@property BOOL hasDoneButton;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor;
@property (retain) NSIndexPath *chosenUseIndexPath;
@property (retain) NSMutableArray *chosenUseIndexPaths;
@property (retain) NSArray *planItemBadges;
@property (retain) NSArray *selectedPlanItems;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly, nonatomic) unsigned long long usesType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sGetSelectedPlanItems;
+ (BOOL)sInPrivateNetworkMode:(id)a0;
+ (BOOL)sInPrivateNetworkModeForItem:(id)a0;

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (void)_doneButtonTapped;
- (void)prepare:(id /* block */)a0;
- (void)saveDefaultUse:(id /* block */)a0;
- (BOOL)_needToLaunch;
- (void)dataSwitchChanged:(id)a0;
- (id)initWithType:(unsigned long long)a0 withDoneButton:(BOOL)a1;

@end
