@class NSString;

@interface PXConcreteAudioCueSource : NSObject <PXAudioCueSource>

@property (readonly, nonatomic) long long numberOfCues;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } *cues;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } cueTimeRange;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)enumerateCuesInRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 withBlock:(id /* block */)a1;
- (long long)_indexOfFirstCueFollowingTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (long long)_indexOfFirstCueInRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; })bestCueInRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 preferredTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)diagnosticStringForTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 indicatorTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 rangeIndicatorTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 stringLength:(long long)a3;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; })firstCueFollowingTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (long long)firstCueIndex;
- (id)initWithNumberOfCues:(long long)a0 configuration:(id /* block */)a1;

@end
