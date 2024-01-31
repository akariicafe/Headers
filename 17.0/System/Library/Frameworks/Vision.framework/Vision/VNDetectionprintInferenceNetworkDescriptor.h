@class NSDictionary;

@interface VNDetectionprintInferenceNetworkDescriptor : VisionCoreEspressoNetworkDescriptor

@property (readonly, copy, nonatomic) NSDictionary *tensorKeyToPrintOutputName;

+ (id)URLForEspressoModelNamed:(id)a0 error:(id *)a1;
+ (id)_descriptorForNetworkFileName:(id)a0 networkSpecifier:(id)a1 imageInputName:(id)a2 tensorKeyToOutputNames:(id)a3 error:(id *)a4;
+ (id)sceneNetV3BasedNetworkAndReturnError:(id *)a0;
+ (id)sceneNetV5BasedNetworkAndReturnError:(id *)a0;

- (void).cxx_destruct;

@end
