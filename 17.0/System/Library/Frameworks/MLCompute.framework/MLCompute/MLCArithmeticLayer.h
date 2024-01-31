@interface MLCArithmeticLayer : MLCLayer

@property (readonly, nonatomic) BOOL binaryOperation;
@property (readonly, nonatomic) int operation;

+ (id)layerWithOperation:(int)a0;

- (id)description;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (unsigned long long)deviceMemorySizeWithOptimizer:(id)a0 device:(id)a1;
- (id)initWithArithmeticOperation:(int)a0;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (id)resultTensorFromSources:(id)a0;
- (BOOL)skipGradientComputationForSourceTensor:(id)a0 resultTensor:(id)a1;
- (id)summarizedDOTDescription;

@end
