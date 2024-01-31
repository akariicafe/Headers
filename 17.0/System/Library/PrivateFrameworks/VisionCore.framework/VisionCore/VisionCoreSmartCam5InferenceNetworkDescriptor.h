@class VisionCoreTensorDescriptor, NSURL, VisionCoreLabeledConfidencesDescriptor;

@interface VisionCoreSmartCam5InferenceNetworkDescriptor : VisionCoreEspressoNetworkDescriptor {
    NSURL *_lazySegmentationLabelsFileURL;
}

@property (readonly, nonatomic) VisionCoreLabeledConfidencesDescriptor *sceneLabelConfidencesOutput;
@property (readonly, nonatomic) VisionCoreTensorDescriptor *segmentationLabelConfidencesOutput;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorAndReturnError:(id *)a0;

- (void).cxx_destruct;
- (id)sceneSegmentationOutputBlobName;
- (id)sceneLabelsFileURL;
- (id)sceneLabelsOutputBlobName;
- (id)segmentationLabelsFileURL;

@end
