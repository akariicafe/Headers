@interface HMDCameraRecordingClipNotificationEvent : HMDCameraRecordingLogEvent

@property (readonly) unsigned long long recordingEventTriggers;

- (id)attributeDescriptions;
- (id)initWithSessionID:(id)a0 cameraID:(id)a1 sequenceNumber:(unsigned long long)a2 recordingEventTriggers:(unsigned long long)a3;

@end
