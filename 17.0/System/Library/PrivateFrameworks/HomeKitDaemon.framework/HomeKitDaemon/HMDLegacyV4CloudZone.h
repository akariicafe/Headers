@class NSString, NSSet;

@interface HMDLegacyV4CloudZone : HMBCloudZone

@property (readonly) NSString *rootRecordName;
@property (readonly, nonatomic) NSSet *participants;
@property (readonly, nonatomic) long long keyStatus;

- (void).cxx_destruct;
- (id)decodeModelFromRecord:(id)a0 externalRecordFields:(id)a1 source:(unsigned long long)a2 error:(id *)a3;
- (id)encodeRecordFromModel:(id)a0 existingRecord:(id)a1 encodingContext:(id)a2 error:(id *)a3;
- (id)initWithCloudDatabase:(id)a0 configuration:(id)a1 state:(id)a2;
- (void)pushGroupWithBlockRow:(unsigned long long)a0 tuples:(id)a1 options:(id)a2 activity:(id)a3 completionPromise:(id)a4;
- (id)waitForPendingRebuild;
- (id)recordIDForParentModelID:(id)a0;
- (id)recordWithExistingRecord:(id)a0 modelData:(id)a1 parentModelID:(id)a2 modelContainer:(id)a3 error:(id *)a4;
- (id)rootRecordModelID;
- (id)rootRecordParentModelID;
- (id)tupleForRootRecordWithOutputBlockRow:(unsigned long long)a0 objectIDToRecordNameMap:(id)a1;

@end
