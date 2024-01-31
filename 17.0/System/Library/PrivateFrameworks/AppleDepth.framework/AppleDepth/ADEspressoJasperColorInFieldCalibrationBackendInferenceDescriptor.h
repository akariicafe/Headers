@class ADEspressoImageDescriptor;

@interface ADEspressoJasperColorInFieldCalibrationBackendInferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *colorInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *jasperInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *featuresOutput;

- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0 espressoEngine:(unsigned long long)a1;

@end
