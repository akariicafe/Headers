@class CKRecordID, CKRecord;

@interface BookDataStore.BDSSyncEnginePipeline : NSObject <BCCloudDataSyncProvider, BookDataStore.BDSSyncEngineSaltChangeObserver> {
    void /* unknown type, empty encoding */ kChangedRecordsBatchSize;
    void /* unknown type, empty encoding */ observer;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataMapper;
    void /* unknown type, empty encoding */ subscribers;
    void /* unknown type, empty encoding */ recordType;
    void /* unknown type, empty encoding */ zoneID;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ stateQueue;
    void /* unknown type, empty encoding */ _hasPendingModifications;
    void /* unknown type, empty encoding */ currentModifyBatchResponse;
    void /* unknown type, empty encoding */ scheduleSyncBlock;
}

- (id)init;
- (void).cxx_destruct;
- (id)privacyDelegate;
- (void)fetchRecordForRecordID:(CKRecordID *)a0 completion:(void (^)(CKRecord *))a1;
- (id)initWithRecordType:(id)a0 zoneName:(id)a1 delegate:(id)a2;
- (id)initWithRecordType:(id)a0 zoneName:(id)a1 delegate:(id)a2 dataMapper:(id)a3;
- (void)saltUpdatedWithSaltVersionIdentifier:(id)a0;
- (void)signalSyncToCK;
- (void)startSyncToCKWithCompletion:(void (^)(void))a0;

@end
