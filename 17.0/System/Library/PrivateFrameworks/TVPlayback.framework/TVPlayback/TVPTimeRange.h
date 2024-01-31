@interface TVPTimeRange : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (readonly, nonatomic) double endTime;

+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })forwardmostCMTimeRangeInCMTimeRanges:(id)a0;

- (id)description;
- (id)initWithStartTime:(double)a0 endTime:(double)a1;
- (BOOL)containsTime:(double)a0;
- (id)initWithCMTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)initWithStartTime:(double)a0 duration:(double)a1;
- (id)intersectTimeRange:(id)a0;

@end
