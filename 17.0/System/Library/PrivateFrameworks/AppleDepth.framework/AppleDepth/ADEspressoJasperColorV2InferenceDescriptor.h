@class ADEspressoImageDescriptor;

@interface ADEspressoJasperColorV2InferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *colorInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *jasperInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *prevDepthInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *prevColorInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *prevUncertaintyInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *depthOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *uncertaintyOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *depthFeaturesOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *colorFeaturesOutput;

- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0 espressoEngine:(unsigned long long)a1 lidarType:(unsigned long long)a2;

@end
