@class PXStoryAnimation;

@interface _PXStoryAnimationInfo : NSObject

@property (readonly, nonatomic) PXStoryAnimation *animation;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;

- (void).cxx_destruct;
- (id)initWithAnimation:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
