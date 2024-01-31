@class HDCloudSyncDeviceContextRecord, NSMutableArray, HDCloudSyncCachedZone;

@interface HDCloudSyncPushDeviceKeyValueOperation : HDCloudSyncOperation {
    HDCloudSyncCachedZone *_contextSyncZone;
    NSMutableArray *_recordsToBeSaved;
    NSMutableArray *_recordsToBeDeleted;
    HDCloudSyncDeviceContextRecord *_recordWithCurrentIdentity;
}

- (void)main;
- (void).cxx_destruct;

@end
