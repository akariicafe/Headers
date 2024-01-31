@interface FRCFrameInternalTimingInfo : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } presentationTimeStamp;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } interpolatedFrameDuration;
@property (nonatomic) long long framesToBeDuplicated;
@property (nonatomic) long long frameIsAtBigGap;

@end
