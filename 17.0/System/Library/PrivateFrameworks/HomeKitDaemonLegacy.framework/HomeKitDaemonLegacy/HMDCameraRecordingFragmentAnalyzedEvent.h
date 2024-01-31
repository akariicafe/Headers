@class NSUUID;

@interface HMDCameraRecordingFragmentAnalyzedEvent : HMDCameraRecordingLogEvent

@property long long analysisResultCode;
@property (retain) NSUUID *clipModelID;
@property int recordingReason;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithSessionID:(id)a0 cameraID:(id)a1 sequenceNumber:(unsigned long long)a2;

@end
