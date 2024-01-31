@class HMFTimer, NSUUID, NAFuture, HMBCloudZoneRebuilderStatus, NSString, CKRecord, HMBCloudZone;

@interface HMBPrivateCloudZoneRebuilder : HMFObject <HMFTimerDelegate, HMFLogging, HMBCloudZoneRebuilder> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertyLock;
}

@property (retain, nonatomic) CKRecord *previousSentinelRebuildRecord;
@property (retain, nonatomic) NSUUID *lastRebuildUUID;
@property (retain, nonatomic) HMFTimer *uploadMonitorWatchdogTimer;
@property (weak, nonatomic) HMBCloudZone *cloudZone;
@property (retain, nonatomic) NAFuture *rebuildCompleteFuture;
@property (copy) HMBCloudZoneRebuilderStatus *rebuilderStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isZoneRebuildInProgress) BOOL zoneRebuildInProgress;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)rebuild;
- (void)handleIdentityLost;
- (void)handleZoneChanged;
- (id)initWithCloudZone:(id)a0;
- (id)zoneStartUp;

@end
