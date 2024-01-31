@class _DKSyncCloudKitKnowledgeStorage;
@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate;

@interface _DKSyncUpCloudKitKnowledgeStorage : NSObject <_DKSyncRemoteKnowledgeStorage>

@property (retain) _DKSyncCloudKitKnowledgeStorage *common;
@property (retain) id<_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate;
@property (getter=isAvailable) BOOL available;

+ (id)sharedInstance;

- (void)setHasDeletionsFlag:(BOOL)a0 forPeer:(id)a1;
- (id)init;
- (void)start;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
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
