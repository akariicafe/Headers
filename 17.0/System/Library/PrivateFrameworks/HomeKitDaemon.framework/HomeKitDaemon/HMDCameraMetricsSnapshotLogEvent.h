@class NSNumber;

@interface HMDCameraMetricsSnapshotLogEvent : HMDCameraMetricsLogEvent

@property (readonly, nonatomic) BOOL snapshotForNotification;
@property (retain, nonatomic) NSNumber *referenceTimestamp;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 cameraAccessory:(id)a1 isLocal:(BOOL)a2 snapshotForNotification:(BOOL)a3;

@end
