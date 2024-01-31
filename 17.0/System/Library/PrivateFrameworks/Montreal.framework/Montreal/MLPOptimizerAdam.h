@class MPSVector;

@interface MLPOptimizerAdam : MLPOptimizer

@property (retain) MPSVector *momentum;
@property (retain) MPSVector *velocity;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 inputGradientVector:(id)a1 inputValuesVector:(id)a2;
- (id)initWithNetwork:(id)a0 momentum:(id /* block */)a1 velocity:(id /* block */)a2;

@end
