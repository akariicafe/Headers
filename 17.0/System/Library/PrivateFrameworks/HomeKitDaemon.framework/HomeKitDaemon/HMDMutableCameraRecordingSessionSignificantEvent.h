@class NSUUID, NSSet, NSData, NSDate;

@interface HMDMutableCameraRecordingSessionSignificantEvent : HMDCameraRecordingSessionSignificantEvent

@property unsigned long long reason;
@property (copy) NSDate *dateOfOccurrence;
@property unsigned long long confidenceLevel;
@property (copy) NSUUID *sessionEntityUUID;
@property (copy) NSSet *faceClassifications;
@property (retain) NSData *heroFrameData;
@property (retain) NSData *faceCropData;
@property double timeOffsetWithinClip;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
