@class NSSet, NSError;

@interface HMBCloudZoneRecordPushResult : HMFObject

@property (readonly, copy) NSSet *updatedRecords;
@property (readonly, copy) NSSet *deletedRecordIDs;
@property (readonly, copy) NSSet *conflicts;
@property (readonly, copy) NSError *fatalError;

- (void).cxx_destruct;
- (id)initWithUpdatedRecords:(id)a0 deletedRecordIDs:(id)a1 conflicts:(id)a2 fatalError:(id)a3;
- (id)initWithUpdatedRecords:(id)a0 deletedRecordIDs:(id)a1 error:(id)a2;
- (id)pushResultByMergingWithPushResult:(id)a0;

@end
