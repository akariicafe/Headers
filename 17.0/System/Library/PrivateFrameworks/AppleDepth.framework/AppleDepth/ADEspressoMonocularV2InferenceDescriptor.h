@class ADEspressoImageDescriptor;

@interface ADEspressoMonocularV2InferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *colorInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *prevDisparityInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *disparityOutput;

- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0 inputColorFormat:(unsigned int)a1 disparityFormat:(unsigned int)a2;

@end
