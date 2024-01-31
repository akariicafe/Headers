@class MTSDevicePairingManager, NSArray, MTSSystemCommissionerPairing;

@interface PSGMatterDeviceController : PSEditableListController

@property (retain, nonatomic) MTSSystemCommissionerPairing *pairing;
@property (retain, nonatomic) MTSDevicePairingManager *pairingManager;
@property (retain, nonatomic) NSArray *serviceSpecifiers;

+ (id)serviceSpecifierWithPairing:(id)a0 target:(id)a1;
+ (BOOL)shouldShowTestSpecifiers;
+ (id)testSpecifiers;

- (void)didBecomeActive:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (id)detailText:(id)a0;
- (BOOL)isServiceAtIndexPath:(id)a0;
- (void)reloadServicesWithCompletion:(id /* block */)a0;
- (void)showDeleteFromMatterLocker;
- (void)showDeleteService:(id)a0;

@end
