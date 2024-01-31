@class HDCloudSyncCachedZone, NSMutableArray, NSMutableSet;

@interface HDCloudSyncPushReferencesOperation : HDCloudSyncOperation {
    NSMutableArray *_unsynchronizedReferences;
    NSMutableArray *_referencesToPush;
    NSMutableSet *_attachmentRecordsToPush;
    HDCloudSyncCachedZone *_attachmentZone;
}

- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;

@end
