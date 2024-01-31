@class ADEspressoImageDescriptor;

@interface ADEspressoPearlColorInFieldCalibrationFrontendInferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *featuresInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *rotationXOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *rotationYOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *errorXOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *errorYOutput;

- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0 espressoEngine:(unsigned long long)a1;

@end
