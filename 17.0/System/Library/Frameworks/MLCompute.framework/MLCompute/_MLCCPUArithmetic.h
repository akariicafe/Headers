@interface _MLCCPUArithmetic : _MLCCPULayer

+ (int)arithmeticOperatorTypeFor:(int)a0;
+ (unsigned int)bnnsArithmeticFunctionFor:(int)a0;
+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3;
+ (id)layerWithDevice:(id)a0 operation:(int)a1;

- (id)initWithDevice:(id)a0 operation:(int)a1;

@end
