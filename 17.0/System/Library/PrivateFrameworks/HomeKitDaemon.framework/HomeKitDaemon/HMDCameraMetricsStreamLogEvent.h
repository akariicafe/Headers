@class NSNumber;

@interface HMDCameraMetricsStreamLogEvent : HMDCameraMetricsLogEvent

@property (retain, nonatomic) NSNumber *referenceTimestamp;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 cameraAccessory:(id)a1 isLocal:(BOOL)a2;

@end
