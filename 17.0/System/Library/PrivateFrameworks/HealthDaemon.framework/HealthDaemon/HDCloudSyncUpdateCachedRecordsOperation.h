@class NSArray, NSString, HDSynchronousTaskGroup, NSMutableSet;

@interface HDCloudSyncUpdateCachedRecordsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    HDSynchronousTaskGroup *_taskGroup;
    NSMutableSet *_invalidRecordIDs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy, nonatomic) NSArray *zoneIdentifiersWithIdentityLost;
@property (readonly, copy, nonatomic) NSArray *invalidRecordIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
