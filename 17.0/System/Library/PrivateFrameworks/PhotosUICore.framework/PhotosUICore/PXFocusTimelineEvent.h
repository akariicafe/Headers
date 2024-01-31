@interface PXFocusTimelineEvent : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (nonatomic) BOOL shouldAnimate;

- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 type:(unsigned long long)a1;

@end
