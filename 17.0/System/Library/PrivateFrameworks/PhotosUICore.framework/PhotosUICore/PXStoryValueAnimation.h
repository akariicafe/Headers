@interface PXStoryValueAnimation : PXStoryAnimation

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (readonly, nonatomic) struct { long long curve; union { double linearFraction; } ; } curveInfo;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void)updateCurrentValueWithProgress:(double)a0;
- (id)initWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 curveInfo:(struct { long long x0; union { double x0; } x1; })a1;
- (id)initWithIdentifier:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 curveInfo:(struct { long long x0; union { double x0; } x1; })a2;
- (void)timeDidChange;

@end
