@interface HMDBackingStoreCKRebuildEvent : HMDHMBLogEvent

@property (readonly) int rebuildStatus;

- (id)initWithCloudZoneID:(id)a0 rebuildStatus:(id)a1;

@end
