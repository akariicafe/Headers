@class VisionCoreTensorDescriptor;

@interface VisionCoreStandAloneSceneprintInferenceNetworkDescriptor : VisionCoreEspressoNetworkDescriptor

@property (readonly, nonatomic) VisionCoreTensorDescriptor *sceneprintOutput;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorAndReturnError:(id *)a0;

- (BOOL)isEqual:(id)a0;

@end
