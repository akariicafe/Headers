@class HMMTRStorage, NSNotificationCenter, NSDictionary, HMMTRResidentStateManager, HMDHomeManager, HMMTRUIDialogPresenter, HMDUIDialogPresenter, NSString, HMMTRAttestationDataStore, NSSet, NSNumber, HMFTimer, HMMTRVendorMetadataStore;

@interface HMDCHIPDataSource : HMFObject <HMMTRResidentStateManagerDataSource, HMMTRStorageDataSource, HMMTRUIDialogPresenterDelegate, HMMTRAccessoryServerBrowserDelegate, HMFLogging, HMFTimerDelegate>

@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMFTimer *vendorMetadataRefreshTimer;
@property (readonly) HMFTimer *attestationDataRefreshTimer;
@property (readonly) HMDUIDialogPresenter *dialogPresenter;
@property (retain) HMMTRResidentStateManager *chipResidentStateManager;
@property (retain) HMMTRStorage *chipStorage;
@property (weak) HMDHomeManager *homeManager;
@property (readonly, copy) NSNumber *pairingTargetFabricIndex;
@property (retain) HMMTRVendorMetadataStore *vendorMetadataStore;
@property (retain) HMMTRAttestationDataStore *attestationDataStore;
@property (retain) HMMTRUIDialogPresenter *uiDialogPresenter;
@property (readonly, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *allPairedHAPServerIdentifiers;
@property (readonly, copy, nonatomic) NSSet *allFabricIDs;
@property (readonly, copy) NSNumber *currentFabricID;
@property (readonly, copy) NSDictionary *keyValueStore;

+ (id)logCategory;

- (id)home;
- (void)timerDidFire:(id)a0;
- (id)initWithHomeManager:(id)a0;
- (void).cxx_destruct;
- (void)configureWithUIDialogPresenter:(id)a0;
- (void)browser:(id)a0 didRemoveAccessoryPairingWithNodeID:(id)a1;
- (void)configureWithAccessoryServerBrowser:(id)a0;
- (void)configureWithAttestationDataStore:(id)a0;
- (void)configureWithResidentStateManager:(id)a0;
- (void)configureWithStorage:(id)a0;
- (void)configureWithVendorMetadataStore:(id)a0;
- (void)createCHIPStoragesForHomes:(id)a0 homeManager:(id)a1 completion:(id /* block */)a2;
- (void)handleAccessoryCHIPStorageChangedNotification:(id)a0;
- (void)handleHomeCHIPStorageChangedNotification:(id)a0;
- (void)handleHomeRemovedNotification:(id)a0;
- (void)handlePrimaryResidentUpdatedNotification:(id)a0;
- (void)handleUpdatedDataWithIsLocalChange:(BOOL)a0;
- (id)homeWithCHIPFabricID:(id)a0;
- (id)initWithHomeManager:(id)a0 notificationCenter:(id)a1 vendorMetadataRefreshTimer:(id)a2 attestationDataRefreshTimer:(id)a3 dialogPresenter:(id)a4;
- (void)requestUserPermissionForUnauthenticatedAccessory:(id)a0 withContext:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (id)storageDataSourceForFabricWithID:(id)a0;
- (void)handleDataReadyAfterBecomingPrimaryNotification:(id)a0;

@end
