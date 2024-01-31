@class NSString, NSMutableDictionary, NSNumber, NSObject;
@protocol CKVDatabaseReadWriteAccess;

@interface CKVDatabaseUpdater : NSObject {
    NSObject<CKVDatabaseReadWriteAccess> *_database;
    NSString *_requestDescription;
    NSNumber *_startTimeMicros;
    NSNumber *_itemTypeNumber;
    NSString *_originAppId;
    NSString *_deviceId;
    NSString *_userId;
    NSNumber *_versionNumber;
    NSMutableDictionary *_commandCache;
    BOOL _isLocalDevice;
    NSNumber *_highestContentSequenceNumber;
    NSNumber *_datasetRowId;
    NSNumber *_deviceRowId;
}

@property (readonly, nonatomic) unsigned int datasetItemCount;
@property (readonly, nonatomic) unsigned int modifiedRowCount;
@property (readonly, nonatomic) unsigned long long updateVersion;
@property (readonly, nonatomic) unsigned long long priorVersion;
@property (readonly, nonatomic) NSNumber *updateValidityHash;
@property (readonly, nonatomic) NSNumber *datasetHash;
@property (readonly, nonatomic) NSNumber *priorValidityHash;
@property (readonly, nonatomic) unsigned long long priorOptions;

+ (BOOL)deleteTombstonesInDatabase:(id)a0 instanceLog:(id)a1 shouldDefer:(id /* block */)a2;

- (id)description;
- (void).cxx_destruct;
- (BOOL)_registerDevice;
- (id)_datasetRowIdCriterion;
- (BOOL)_deleteItemIdHash:(id)a0 outProvenanceRowId:(id *)a1;
- (BOOL)_deleteLocalInstanceRowId:(id)a0 outProvenanceRowId:(id *)a1;
- (BOOL)_insertContent:(id)a0 contentHash:(id)a1 outSequenceNumber:(id *)a2;
- (BOOL)_insertDatasetReturningRowId:(id *)a0;
- (BOOL)_insertDeviceReturningRowId:(id *)a0;
- (BOOL)_insertLocalInstanceForItemWithItemIdHash:(id)a0 provenanceRowId:(id)a1 ordinal:(unsigned long long)a2;
- (BOOL)_insertMetaContent:(id)a0 instanceHash:(id)a1;
- (BOOL)_insertProvenanceForItemWithContentHash:(id)a0 contentSequenceNumber:(id)a1 instanceHash:(id)a2 onDeviceRowId:(id)a3 insertedRowId:(id *)a4;
- (id)_itemCriterionWithItemIdHash:(id)a0;
- (BOOL)_registerDataset;
- (BOOL)_selectDatasetItemCount:(id *)a0;
- (BOOL)_selectDatasetRowId:(id *)a0 version:(unsigned long long *)a1 validityHash:(id *)a2 options:(unsigned long long *)a3;
- (BOOL)_selectDeviceRowId:(id *)a0 isLocal:(BOOL *)a1;
- (BOOL)_selectHighestKnownContentSequenceNumber:(id *)a0;
- (BOOL)_selectProvenenceWithContentHash:(id)a0 outSequenceNumber:(id *)a1;
- (BOOL)_selectProvenenceWithRowId:(id)a0 outInstanceHash:(id *)a1 outContentHash:(id *)a2;
- (BOOL)_tombstoneProvenanceRowId:(id)a0 outCompositeId:(id *)a1;
- (BOOL)_updateDatasetVersionAndValidity;
- (BOOL)_updateLocalInstanceRowId:(id)a0 provenanceRowId:(id)a1 instanceHash:(id)a2 contentHash:(id)a3 metaContent:(id)a4 content:(id)a5 ordinal:(unsigned long long)a6;
- (BOOL)_updateProvenanceRowId:(id)a0 instanceHash:(id)a1;
- (BOOL)_updateProvenanceRowId:(id)a0 instanceHash:(id)a1 contentHash:(id)a2 contentSequenceNumber:(id)a3 insertedProvenanceRowId:(id *)a4;
- (BOOL)deleteItemIdHash:(id)a0 outCompositeId:(id *)a1;
- (BOOL)deleteLocalInstanceRowId:(id)a0 outCompositeId:(id *)a1;
- (BOOL)enumerateAndDeleteAllLocalInstancesUsingBlock:(id /* block */)a0;
- (BOOL)enumerateUnmodifiedLocalInstancesUsingBlock:(id /* block */)a0;
- (id)initWithDatabase:(id)a0 instanceLog:(id)a1 request:(id)a2 startTimeMicros:(long long)a3;
- (BOOL)insertItemWithItemIdHash:(id)a0 instanceHash:(id)a1 contentHash:(id)a2 metaContent:(id)a3 content:(id)a4 ordinal:(unsigned long long)a5;
- (BOOL)selectWithItemIdHash:(id)a0 outLocalInstanceRowId:(id *)a1 outProvenanceRowId:(id *)a2 outInstanceHash:(id *)a3 outContentHash:(id *)a4 isDuplicate:(BOOL *)a5;
- (BOOL)updateDatasetOptions:(unsigned long long)a0;
- (BOOL)updateLocalInstanceRowId:(id)a0 ordinal:(unsigned long long)a1;
- (BOOL)updateLocalInstanceRowId:(id)a0 provenanceRowId:(id)a1 instanceHash:(id)a2 contentHash:(id)a3 metaContent:(id)a4 content:(id)a5 ordinal:(unsigned long long)a6;
- (BOOL)updateLocalInstanceRowId:(id)a0 provenanceRowId:(id)a1 instanceHash:(id)a2 metaContent:(id)a3 ordinal:(unsigned long long)a4;
- (BOOL)updateLocalInstanceRowId:(id)a0 provenanceRowId:(id)a1 ordinal:(unsigned long long)a2;

@end
