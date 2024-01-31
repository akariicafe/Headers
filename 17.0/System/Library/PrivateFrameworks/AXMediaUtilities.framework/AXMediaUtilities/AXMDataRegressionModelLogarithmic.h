@interface AXMDataRegressionModelLogarithmic : AXMDataRegressionModel

- (id)modelDescription;
- (void)getInitialParams:(double *)a0;
- (id /* block */)modelFunction;
- (id)modelFunctionStringForParameters:(double *)a0 significantFigures:(int)a1;
- (int)modelParameterCount;
- (id)partialDerivatives;

@end
