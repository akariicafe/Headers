@interface PXFocusTimelineAction : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) long long kind;

@end
