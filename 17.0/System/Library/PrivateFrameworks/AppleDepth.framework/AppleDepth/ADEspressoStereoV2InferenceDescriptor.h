@class ADEspressoImageDescriptor;

@interface ADEspressoStereoV2InferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *referenceInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *auxiliaryInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *prevDepthFeaturesInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *prevColorFeaturesInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *temporalSmoothingCurrentFeaturesRatioMinInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *temporalSmoothingPreviousFeaturesRatioMinInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *disparityOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *depthFeaturesOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *colorFeaturesOutput;

- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0 inputColorFormat:(unsigned int)a1 outputDisparityFormat:(unsigned int)a2;

@end
