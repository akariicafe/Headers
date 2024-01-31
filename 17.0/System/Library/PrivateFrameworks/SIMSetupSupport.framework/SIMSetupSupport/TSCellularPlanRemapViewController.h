@class CTCellularPlanItem, NSArray, NSString, OBBoldTrayButton, NSLayoutConstraint, NSIndexPath, CTDanglingPlanItem;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanRemapViewController : TSOBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, TSSetupFlowItem> {
    OBBoldTrayButton *_doneButton;
}

@property (retain, nonatomic) NSLayoutConstraint *heightAnchor;
@property (retain) NSArray *selectedPlanItems;
@property (retain) CTDanglingPlanItem *danglingPlanItem;
@property (retain) CTCellularPlanItem *defaultVoiceItem;
@property (retain) NSIndexPath *chosenTargetCellularPlanItem;
@property BOOL hasBackButton;
@property BOOL hasContinueButton;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (BOOL)canBeShownFromSuspendedState;
- (void)_doneButtonTapped;
- (void)prepare:(id /* block */)a0;
- (id)initWithBackButton:(BOOL)a0 continueButton:(BOOL)a1 danglingPlanItem:(id)a2;
- (void)remapDanglingItem:(id /* block */)a0;

@end
