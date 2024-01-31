@class NSHashTable, NSString, _DKSyncPeerStatusTracker, NSMutableDictionary, APSConnection, CKContainer, NSMutableSet, _DKThrottledActivity, CKServerChangeToken, _CDPeriodicSchedulerJob, NSOperation;
@protocol _DKKeyValueStore, _DKSyncRemoteKnowledgeStorageFetchDelegate;

@interface _DKSyncCloudKitKnowledgeStorage : NSObject <APSConnectionDelegate> {
    BOOL _started;
    id<_DKKeyValueStore> _keyValueStore;
    _DKThrottledActivity *_activityThrottler;
    _DKSyncPeerStatusTracker *_tracker;
    _CDPeriodicSchedulerJob *_updateSourceDeviceIdentifiersPeriodicJob;
    BOOL _cloudSyncAvailablityObserverRegistered;
    CKContainer *_container;
    APSConnection *_connection;
    double _updateSourceDeviceIdentifiersBackoffTimeInterval;
    NSMutableDictionary *_zoneIDsBySourceDeviceID;
    NSMutableDictionary *_recordZonesByZoneID;
    BOOL _databaseChangesExist;
    BOOL _isPrewarmed;
    NSMutableSet *_zoneIDsWithAdditionChanges;
    NSMutableSet *_zoneIDsWithDeletionChanges;
    NSMutableSet *_zoneIDsWithUnrecoverableDecryptionErrors;
    CKServerChangeToken *_fetchDatabaseChangesServerChangeToken;
    NSOperation *_previousDependentOperation;
    NSHashTable *_outstandingOperations;
    BOOL _available;
    id<_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deviceIDFromZoneID:(id)a0;
+ (id)mySyncZoneID;
+ (id)zoneIDWithDeviceID:(id)a0;

- (void)setHasDeletionsFlag:(BOOL)a0 forPeer:(id)a1;
- (id)init;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)start;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (void)_cloudSyncAvailabilityDidChange:(id)a0;
- (void)clearPrewarmedFlag;
- (void)fetchSourceDeviceIDFromPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchDeletedEventIDsFromPeer:(id)a0 sinceDate:(id)a1 streamNames:(id)a2 limit:(unsigned long long)a3 highPriority:(BOOL)a4 completion:(id /* block */)a5;
- (void)setHasAdditionsFlag:(BOOL)a0 forPeer:(id)a1;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (void)setFetchDelegate:(id)a0;
- (void).cxx_destruct;
- (void)fetchEventsFromPeer:(id)a0 windows:(id)a1 streamNames:(id)a2 limit:(unsigned long long)a3 fetchOrder:(long long)a4 highPriority:(BOOL)a5 completion:(id /* block */)a6;
- (id)name;
- (long long)transportType;
- (void)updateStorageWithAddedEvents:(id)a0 deletedEventIDs:(id)a1 highPriority:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)hasAdditionsFlagForPeer:(id)a0;
- (void)cancelOutstandingOperations;
- (BOOL)hasDeletionsFlagForPeer:(id)a0;
- (void)prewarmFetchWithCompletion:(id /* block */)a0;

@end
