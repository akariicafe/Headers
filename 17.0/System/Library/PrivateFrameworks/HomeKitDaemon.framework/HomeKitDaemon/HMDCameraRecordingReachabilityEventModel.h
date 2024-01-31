@class NSNumber, NSDate;

@interface HMDCameraRecordingReachabilityEventModel : HMBModel

@property (retain) NSNumber *reachableField;
@property (retain) NSDate *dateOfOccurrence;
@property BOOL reachable;

+ (id)hmbProperties;
+ (id)hmbExternalRecordType;

- (id)createEvent;

@end
