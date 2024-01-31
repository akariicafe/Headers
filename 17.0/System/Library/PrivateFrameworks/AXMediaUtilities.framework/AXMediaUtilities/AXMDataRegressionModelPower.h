@interface AXMDataRegressionModelPower : AXMDataRegressionModel

- (id)modelDescription;
- (BOOL)dataSatisfiesInitialConditions;
- (void)getInitialParams:(double *)a0;
- (id /* block */)modelFunction;
- (id)modelFunctionStringForParameters:(double *)a0 significantFigures:(int)a1;
- (int)modelParameterCount;
- (id)partialDerivatives;

@end
