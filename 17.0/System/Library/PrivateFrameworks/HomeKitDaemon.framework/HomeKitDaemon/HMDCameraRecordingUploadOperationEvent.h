@class NSUUID;

@interface HMDCameraRecordingUploadOperationEvent : HMMLogEvent

@property double runTime;
@property (readonly) unsigned long long runTimeInMilliseconds;
@property unsigned long long operationType;
@property BOOL didCausePreviousClipToFinalizeDueToDurationLimit;
@property (readonly) unsigned long long totalClipDurationMilliseconds;
@property double totalClipDuration;
@property unsigned long long retryCount;
@property (readonly, copy) NSUUID *clipModelID;
@property (readonly) unsigned long long startTimestamp;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithClipModelID:(id)a0 operation:(id)a1;

@end
