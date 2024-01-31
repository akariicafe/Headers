@interface VNPersonSegmentationGeneratorSemantics : VNSegmentationGenerator

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (id)outputMaskBlobNameToFeatureName;
+ (id)inputImageBlobName;
+ (id)inputMaskBlobName;
+ (BOOL)inputMaskRequired;
+ (id)outputMaskBlobNameToRequestKey;
+ (id)outputMaskBlobNames;
+ (BOOL)rotateImageToMatchNetworkOrientation;

@end
