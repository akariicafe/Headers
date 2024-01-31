@class ADEspressoImageDescriptor;

@interface ADEspressoJasperColorInFieldCalibrationFrontendInferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *featuresInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *rotationXOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *rotationYOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *rotationZOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *errorXOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *errorYOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *errorZOutput;

- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0 espressoEngine:(unsigned long long)a1 networkFlowType:(int)a2;

@end
