@class DSPairedComputer, NSMutableArray;
@protocol DSWifiSyncDelegate;

@interface DSWifiSyncDetailController : DSTableWelcomeController

@property (retain, nonatomic) DSPairedComputer *pairedComputer;
@property (retain, nonatomic) NSMutableArray *orderedCells;
@property (weak, nonatomic) id<DSWifiSyncDelegate> delegate;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)dateDescription;
- (void)back;
- (id)cellWithText:(id)a0 secondaryText:(id)a1;
- (id)initWithPairedComputer:(id)a0;
- (void)returnFromDetailAndRemoveComputer;

@end
