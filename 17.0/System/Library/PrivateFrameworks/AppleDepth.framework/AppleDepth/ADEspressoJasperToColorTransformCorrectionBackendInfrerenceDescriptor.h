@class ADEspressoImageDescriptor;

@interface ADEspressoJasperToColorTransformCorrectionBackendInfrerenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *colorInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *jasperInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *featuresOutput;

- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0;

@end
