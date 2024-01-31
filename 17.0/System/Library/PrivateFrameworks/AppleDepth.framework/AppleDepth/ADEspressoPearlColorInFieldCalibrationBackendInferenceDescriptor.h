@class ADEspressoImageDescriptor;

@interface ADEspressoPearlColorInFieldCalibrationBackendInferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *colorInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *pearlInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *featuresOutput;

- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0 espressoEngine:(unsigned long long)a1 networkFlowType:(int)a2;

@end
