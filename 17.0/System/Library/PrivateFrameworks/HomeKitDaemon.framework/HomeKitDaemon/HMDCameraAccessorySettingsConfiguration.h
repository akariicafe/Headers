@interface HMDCameraAccessorySettingsConfiguration : HMFObject

@property (readonly) BOOL isRecordingCapable;
@property (readonly) BOOL isRecordingEnabled;
@property (readonly) unsigned long long recordingEventTriggers;
@property (readonly) unsigned long long numActivityZones;
@property (readonly) BOOL inclusionZone;
@property (readonly) BOOL smartBulletinBoardNotificationEnabled;
@property (readonly) BOOL reachabilityNotificationEnabled;

- (id)initWithCameraAccessory:(id)a0;

@end
