@class NSDictionary, NSMutableArray, NSArray;
@protocol BWDeepFusionProcessorInputDelegate;

@interface BWDeepFusionProcessorInput : BWStillImageProcessorControllerInput {
    BOOL _allInferencesDelivered;
    NSDictionary *_inferenceAttachedMediaMetadata;
}

@property (readonly, nonatomic) NSMutableArray *inputBuffers;
@property (retain, nonatomic) id<BWDeepFusionProcessorInputDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *quadraForEnhancedResolutionMetadata;
@property (nonatomic) BOOL canProcessEnhancedResolution;
@property (copy, nonatomic) NSDictionary *evZeroReferenceFrameAttachments;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } evZeroReferenceFramePTS;
@property (retain, nonatomic) NSArray *providedInferenceAttachedMedia;
@property (readonly, nonatomic) BOOL processInferenceInputImage;
@property (readonly, nonatomic) BOOL processQuadraForEnhancedResolutionInferenceInputImage;
@property (readonly, nonatomic) BOOL onlyApplyingSemanticStyle;

+ (id)inputForOnlyApplyingSemanticStyleWithSettings:(id)a0 portType:(id)a1;

- (void)dealloc;
- (id)description;
- (void)addBuffer:(struct __CVBuffer { } *)a0 metadata:(id)a1 bufferType:(unsigned long long)a2;
- (void)addBuffer:(struct __CVBuffer { } *)a0 metadata:(id)a1 bufferType:(unsigned long long)a2 lscGainMap:(struct __CVBuffer { } *)a3 lscGainMapParameters:(id)a4;
- (void)allInferencesDelivered;
- (void)beginProcessingCachedBuffers;
- (id)initWithSettings:(id)a0 portType:(id)a1 processInferenceInputImage:(BOOL)a2 processQuadraForEnhancedResolutionInferenceInputImage:(BOOL)a3;
- (void)releaseInputBuffers;

@end
