@class DSRemotePairingWrapper, NSString, NSError, NSMutableArray;
@protocol DSNavigationDelegate;

@interface DSWifiSyncController : DSTableWelcomeController <UITableViewDelegate, DSWifiSyncDelegate, DSController> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _devicesLock;
}

@property (retain, nonatomic) DSRemotePairingWrapper *remotePairing;
@property (retain, nonatomic) NSError *fetchError;
@property (retain, nonatomic) NSMutableArray *pairedComputers;
@property (retain, nonatomic) NSMutableArray *selectedPairedComputers;
@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removeAllPairedDevicesOnQueue:(id)a0 completion:(id /* block */)a1;

- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)_updateButtons;
- (void).cxx_destruct;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (id)localizedDetailText;
- (void)addPairedDevices;
- (id)dateDescription:(id)a0;
- (void)learnMoreWifiSyncPressed;
- (void)presentFetchedErrorAlert;
- (void)presentRemoveErrorAlert:(id)a0;
- (void)reloadDetailText;
- (void)removeAllPairedDevicesAndPushNextPane;
- (void)removeComputersFromRemotePairing:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeDetailViewControllerFromStack;
- (void)removePairedDevices:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeSelectedPairedDevicesAndPushNextPane;
- (void)returnFromDetailAndRemoveComputer:(id)a0;
- (void)shouldShowWithCompletion:(id /* block */)a0;
- (id)titleForPairedComputer:(id)a0;

@end
