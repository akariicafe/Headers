@interface FRCFrameTimingInfo : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } presentationTimeStamp;

@end
