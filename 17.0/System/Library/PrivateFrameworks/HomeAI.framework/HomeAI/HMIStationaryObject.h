@class HMIVideoAnalyzerEvent;

@interface HMIStationaryObject : HMFObject

@property (readonly) HMIVideoAnalyzerEvent *event;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;

- (void).cxx_destruct;
- (id)initWithEvent:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
