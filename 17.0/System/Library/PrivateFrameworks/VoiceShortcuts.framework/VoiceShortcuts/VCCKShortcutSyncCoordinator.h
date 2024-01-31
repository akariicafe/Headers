@class VCCKApplicationStateObserver, CKRecordID, NSString, NSObject, CKContainer;
@protocol WFDatabaseProvider, OS_nw_path_monitor, OS_dispatch_queue, WFShortcutsSyncService;

@interface VCCKShortcutSyncCoordinator : NSObject

@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (readonly, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (readonly, nonatomic) struct __CTServerConnection { } *telephonyConnection;
@property (readonly, nonatomic) VCCKApplicationStateObserver *applicationObserver;
@property (nonatomic, getter=isStarted) BOOL started;
@property (nonatomic) long long accountStatus;
@property (retain, nonatomic) CKRecordID *userRecordID;
@property (retain, nonatomic) id<WFShortcutsSyncService> currentSyncService;
@property (readonly, nonatomic) NSString *accountForSyncToken;
@property (nonatomic, getter=isSyncEnabled) BOOL syncEnabled;
@property (readonly, nonatomic, getter=isUsingSync2) BOOL usingSync2;

- (void)updateCurrentSyncServiceIfNeeded;
- (void)dealloc;
- (void)start;
- (void)handleCloudKitSyncEnabledChange;
- (void)stopObservingDataUsagePermission;
- (void)startObservingAccountChanges;
- (void)stopObservingAccountChanges;
- (void)stopObservingReachability;
- (void)deleteLegacyShortcutsZoneSubscriptionIfNeeded;
- (void)handleWalrusStatusDidChange;
- (void)handleAccountChangedNotification:(id)a0;
- (void)startObservingDataUsagePermission;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)handleCloudKitSyncZoneWasPurgedChange;
- (void)startObservingUserDefaults;
- (void)stopObservingApplicationVisibility;
- (void)startObservingApplicationVisibility;
- (void)stopObservingUserDefaults;
- (void)updateAccountStatusAndUserRecordID;
- (void)setupPathMonitor;
- (id)initWithDatabaseProvider:(id)a0;
- (void)startObservingReachability;

@end
