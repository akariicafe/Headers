@class HDSyncAnchorRangeMap, CKRecordID, HDCloudSyncCodableChange, NSURL, NSNumber;

@interface HDCloudSyncChangeRecord : HDCloudSyncRecord {
    HDCloudSyncCodableChange *_underlyingChange;
}

@property (readonly, copy, nonatomic) NSURL *changesetArchiveFileURL;
@property (readonly, nonatomic) long long changeIndex;
@property (readonly, nonatomic) int protocolVersion;
@property (readonly, nonatomic) BOOL finalForSequence;
@property (readonly, nonatomic) HDSyncAnchorRangeMap *decodedSyncAnchorRangeMap;
@property (readonly, copy, nonatomic) NSNumber *changeSize;
@property (readonly, copy, nonatomic) CKRecordID *sequenceRecordID;

+ (id)recordType;
+ (long long)bytesPerChangeRecordAssetThresholdHardLimit;
+ (long long)bytesPerChangeRecordAssetThreshold;
+ (BOOL)isChangeRecord:(id)a0;
+ (id)assetKeys;
+ (id)changesetArchiveContentDataForCKRecord:(id)a0 error:(id *)a1;
+ (id)changesetArchiveFileHandleForCKRecord:(id)a0 error:(id *)a1;
+ (id)changesetArchiveURLForCKRecord:(id)a0 error:(id *)a1;
+ (id)fieldsForUnprotectedSerialization;
+ (BOOL)hasFutureSchema:(id)a0;
+ (BOOL)isChangeRecord:(id)a0 inSequence:(id)a1;
+ (BOOL)isChangeRecordID:(id)a0;
+ (id)nonAssetKeys;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (BOOL)requiresUnderlyingMessage;

- (BOOL)shouldFetchAssetContentInMemory;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)initWithSyncAnchorRangeMap:(id)a0 changeIndex:(long long)a1 changesetAsset:(id)a2 changeSize:(long long)a3 protocolVersion:(int)a4 finalForSequence:(BOOL)a5 sequenceRecordID:(id)a6 record:(id)a7 schemaVersion:(long long)a8;
- (id)initWithSyncAnchorRangeMap:(id)a0 finalForSequence:(BOOL)a1 changesetArchiveFileHandle:(id)a2 sequenceRecord:(id)a3 protocolVersion:(int)a4;
- (id)printDescription;
- (id)serializeUnderlyingMessage;

@end
