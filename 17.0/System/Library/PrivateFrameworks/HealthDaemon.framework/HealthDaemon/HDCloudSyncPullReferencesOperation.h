@class NSString, NSMutableDictionary, HDCloudSyncCachedZone, HDSynchronousTaskGroup;

@interface HDCloudSyncPullReferencesOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    NSMutableDictionary *_attachmentRecordsToFetch;
    NSMutableDictionary *_referencesToPersist;
    HDCloudSyncCachedZone *_attachmentZone;
    long long _epoch;
    HDSynchronousTaskGroup *_taskGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
