@class NSString, NSSet, NSDictionary, BWInferenceEngine, FigDisparityGenerator;

@interface BWStereoDisparityProcessorController : BWStillImageProcessorController <BWStereoDisparityProcessorInputDelegate, DisparityProcessorInferenceDelegate, BWInferenceFormatProvider> {
    FigDisparityGenerator *_disparityProcessor;
    BWInferenceEngine *_inferenceEngine;
    NSSet *_currentInferenceEnginePortTypes;
    struct opaqueCMFormatDescription { } *_refFormatDescription;
    struct opaqueCMFormatDescription { } *_auxFormatDescription;
    struct opaqueCMFormatDescription { } *_disparityFormatDescription;
    NSDictionary *_videoFormatByAttachedMediaKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)usesCustomProcessingFlow;

- (id)outputFormatForAttachedMediaKey:(id)a0;
- (void)reset;
- (void)dealloc;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)a0;
- (int)process;
- (id)inputFormatForAttachedMediaKey:(id)a0;
- (id)inputVideoFormatForAttachedMediaKey:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (id)outputVideoFormatForAttachedMediaKey:(id)a0;
- (int)prepare;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)a0;
- (unsigned long long)type;
- (void)inputReceivedNewInputData:(id)a0;
- (int)processDisparityInferenceWithReferenceBuffer:(struct __CVBuffer { } *)a0 auxBuffer:(struct __CVBuffer { } *)a1 outputDisparityBuffer:(struct __CVBuffer { } *)a2;
- (id)requestForInput:(id)a0 delegate:(id)a1 errOut:(int *)a2;

@end
