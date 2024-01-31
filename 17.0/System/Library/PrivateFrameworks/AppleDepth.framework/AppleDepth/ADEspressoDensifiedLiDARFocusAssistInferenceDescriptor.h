@class ADEspressoImageDescriptor;

@interface ADEspressoDensifiedLiDARFocusAssistInferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *colorInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *lidarInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *depthOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *uncertaintyOutput;

- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0 espressoEngine:(unsigned long long)a1;

@end
