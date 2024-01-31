@interface NUResetScaleNode : NUAbstractScaleNode

@property (readonly, nonatomic) struct { long long numerator; long long denominator; } scale;

- (id)initWithInput:(id)a0 scale:(struct { long long x0; long long x1; })a1;
- (id)initWithInput:(id)a0 settings:(id)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;

@end
