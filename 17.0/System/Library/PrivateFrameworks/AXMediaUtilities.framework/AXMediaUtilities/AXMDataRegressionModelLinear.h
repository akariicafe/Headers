@interface AXMDataRegressionModelLinear : AXMDataRegressionModel

@property (readonly, nonatomic) double rSquared;

- (id)modelDescription;
- (double)fitDataWithModelParams:(double *)a0 finalParams:(double *)a1;
- (void)getInitialParams:(double *)a0;
- (id /* block */)modelFunction;
- (id)modelFunctionStringForParameters:(double *)a0 significantFigures:(int)a1;
- (int)modelParameterCount;
- (id)partialDerivatives;

@end
