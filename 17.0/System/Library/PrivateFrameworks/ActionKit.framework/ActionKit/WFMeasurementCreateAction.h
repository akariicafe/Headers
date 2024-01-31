@interface WFMeasurementCreateAction : WFAction

- (id)currentValue;
- (id)currentUnit;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)initializeParameters;
- (id)outputMeasurementUnitType;
- (id)parametersRequiringUserInputAlongsideParameter:(id)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)currentUnitTypeState;
- (id)unitParameter;

@end
