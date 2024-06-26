@class NSString, NSDictionary, IMKeyValueCollection, NSDate, NSArray;
@protocol IMDCKSyncStateDelegate;

@interface IMDCKSyncState : NSObject <SyncStateManaging, IMKeyValueCollectionDelegate>

@property (nonatomic) unsigned long long syncControllerSyncState;
@property (nonatomic) unsigned long long syncStatus;
@property (nonatomic) long long syncControllerRecordType;
@property (nonatomic, getter=isSyncing) BOOL syncing;
@property (nonatomic, getter=isStartingPeriodicSyncSetByCloudKitHooks) BOOL startingPeriodicSyncSetByCloudKitHooks;
@property (nonatomic, getter=isStartingInitialSyncSetByCloudKitHooks) BOOL startingInitialSyncSetByCloudKitHooks;
@property (readonly, nonatomic) IMKeyValueCollection *keyValueCollection;
@property (weak, nonatomic) id<IMDCKSyncStateDelegate> delegate;
@property (nonatomic, getter=isFeatureEnabled) BOOL featureEnabled;
@property (nonatomic) BOOL createdChatZone;
@property (nonatomic) BOOL deletedZones;
@property (nonatomic, getter=isEligibleForTruthZone) BOOL eligibleForTruthZone;
@property (nonatomic, getter=isSyncingEnabled) BOOL syncingEnabled;
@property (nonatomic, getter=isRemovedFromBackup) BOOL removedFromBackup;
@property (nonatomic, getter=isInExitState) BOOL inExitState;
@property (nonatomic, getter=isSyncingPaused) BOOL syncingPaused;
@property (copy, nonatomic) NSDate *exitDate;
@property (nonatomic, getter=isDisablingDevices) BOOL disablingDevices;
@property (nonatomic, getter=isStartingEnabledSettingChange) BOOL startingEnabledSettingChange;
@property (copy, nonatomic) NSDictionary *analyticSyncDatesDictionary;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSString *syncSessionID;
@property (nonatomic) long long accountStatus;
@property (readonly, nonatomic) NSArray *syncErrors;
@property (nonatomic) long long syncControllerSyncType;
@property (readonly, nonatomic) unsigned long long syncType;
@property (readonly, nonatomic) unsigned long long syncJobState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logHandle;
+ (void)removeBuildObjectsFromDict:(id)a0;

- (void)setExitDate:(id)a0;
- (void)setSyncStatus:(unsigned long long)a0;
- (void)commitChanges;
- (id)exitDate;
- (unsigned long long)syncStatus;
- (id)logHandle;
- (long long)accountStatus;
- (void)setAccountStatus:(long long)a0;
- (id)serializedRepresentation;
- (id)init;
- (void)setLastSyncDate:(id)a0;
- (id)lastSyncDate;
- (void)setSyncStopped;
- (id)syncReportDictionaryForAttempt:(unsigned long long)a0 withSuccess:(BOOL)a1 duration:(double)a2;
- (void)setSyncingPaused:(BOOL)a0;
- (void)setRemovedFromBackup:(BOOL)a0;
- (void)setErrorToKeyRollingError;
- (void)_setStartingSync;
- (BOOL)createdChatZone;
- (id)_describeErrors:(id)a0;
- (unsigned long long)syncJobState;
- (BOOL)deletedZones;
- (id)syncUserType;
- (void)setDisablingDevices:(BOOL)a0;
- (void)setAnalyticSyncDatesDictionary:(id)a0;
- (void)setSyncing:(BOOL)a0;
- (void)_setObject:(id)a0 forKey:(id)a1 forDictionary:(id)a2 shouldSetBuild:(BOOL)a3;
- (long long)syncControllerRecordType;
- (void)updateSyncJobState:(unsigned long long)a0;
- (id)describeErrors;
- (BOOL)_shouldReportNewUserIfCreatedChatZones:(BOOL)a0 deletedZones:(BOOL)a1;
- (void)broadcastSyncState;
- (void)setSyncingEnabled:(BOOL)a0;
- (void)updateSyncType:(unsigned long long)a0;
- (void)keyValueCollection:(id)a0 willUpdateValues:(id)a1;
- (void)setSyncingFinished;
- (void)_startBatchChange;
- (unsigned long long)syncControllerSyncState;
- (void)sendBroadcastToClient;
- (id)syncSessionID;
- (id)analyticSyncDatesDictionary;
- (void)setAnalyticSyncDatesDictionaryObject:(id)a0 forKey:(id)a1 shouldOverrideIfExists:(BOOL)a2;
- (void)setSyncSessionID:(id)a0;
- (void)clearSyncErrors;
- (long long)syncControllerSyncType;
- (id)initWithKeyValueCollection:(id)a0;
- (void)setEligibleForTruthZone:(BOOL)a0;
- (void)setSyncType:(unsigned long long)a0;
- (void)setSyncControllerSyncType:(long long)a0;
- (void)setCreatedChatZone:(BOOL)a0;
- (void)setErrorToAccountNeedsRepair;
- (void)startChanges;
- (void)setSyncControllerRecordType:(long long)a0;
- (void).cxx_destruct;
- (id)describeRecordCounts;
- (void)addSyncError:(id)a0;
- (void)setDeletedZones:(BOOL)a0;
- (void)setSyncJobStateWithState:(unsigned long long)a0;
- (id)syncReportDictionary;
- (void)setStartingInitialSyncSetByCloudKitHooks:(BOOL)a0;
- (void)updateSyncStatus:(unsigned long long)a0;
- (void)clearLocalCloudKitSyncState;
- (void)setStartingEnabledSettingChange:(BOOL)a0;
- (void)setSyncControllerSyncState:(unsigned long long)a0 withRecordType:(long long)a1;
- (void)clearSyncStateForAllRecordTypes;
- (void)setSyncDate:(id)a0 forKey:(id)a1 shouldOverride:(BOOL)a2;
- (id)getAnalyticSyncDatesObjectForKey:(id)a0;
- (void)setSyncPhaseType:(unsigned long long)a0;
- (void)deleteAllCloudKitData;
- (void)setFeatureEnabled:(BOOL)a0;
- (void)setSyncStarted;
- (void)removeObjectFromAnalyticSyncDatesDictionaryForKey:(id)a0;
- (unsigned long long)syncType;
- (void)setSyncControllerSyncState:(unsigned long long)a0;
- (void)keyValueCollection:(id)a0 didUpdateValues:(id)a1;
- (void)_finishBatchChange;
- (void)setInExitState:(BOOL)a0;
- (void)setStartingInitialSyncWithRecordType:(long long)a0;
- (void)setSyncJobState:(unsigned long long)a0;
- (void)setStartingPeriodicSyncSetByCloudKitHooks:(BOOL)a0;
- (void)_removeObjectForKey:(id)a0 forDictionary:(id)a1;
- (void)setStartingPeriodicSyncWithRecordType:(long long)a0;

@end
