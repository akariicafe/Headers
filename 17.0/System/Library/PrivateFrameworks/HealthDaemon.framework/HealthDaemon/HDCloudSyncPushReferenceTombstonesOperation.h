@class HDCloudSyncCachedZone, NSMutableArray, NSMutableSet;

@interface HDCloudSyncPushReferenceTombstonesOperation : HDCloudSyncOperation {
    NSMutableArray *_unsynchronizedTombstones;
    NSMutableSet *_referenceRecordsToDelete;
    NSMutableSet *_attachmentsRecordsToDelete;
    NSMutableSet *_tombstoneRecordsToPush;
    HDCloudSyncCachedZone *_attachmentZone;
}

- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;

@end
