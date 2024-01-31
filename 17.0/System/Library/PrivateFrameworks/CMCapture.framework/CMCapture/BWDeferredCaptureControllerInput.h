@class BWDeferredPipelineParameters, BWDeferredCaptureControllerConfiguration, BWStillImageSettings, BWDeferredCaptureContainer, NSNumber;

@interface BWDeferredCaptureControllerInput : BWStillImageProcessorControllerInput {
    BWDeferredCaptureControllerConfiguration *_configuration;
    BWStillImageSettings *_settings;
    BOOL _proxyBufferReady;
    BOOL _depthDataGenerationFailed;
    NSNumber *_canProcessEnhancedResolution;
}

@property (readonly, nonatomic) BWDeferredCaptureContainer *captureContainer;
@property (readonly, nonatomic) int compressionProfile;
@property (readonly, nonatomic) BOOL skipInferences;
@property (readonly, nonatomic) BWDeferredPipelineParameters *pipelineParameters;

- (void)dealloc;
- (id)initWithSettings:(id)a0 configuration:(id)a1 sourceNodePixelBufferAttributes:(id)a2;
- (void)_addDictionary:(id)a0 tag:(id)a1;
- (void)_addInference:(id)a0 inferenceAttachmentKey:(id)a1 portType:(id)a2;
- (void)_addInferenceBuffer:(struct __CVBuffer { } *)a0 inferenceAttachedMediaKey:(id)a1 portType:(id)a2;
- (void)addBuffer:(struct __CVBuffer { } *)a0 bufferType:(unsigned long long)a1 captureFrameFlags:(unsigned long long)a2 metadata:(id)a3 rawThumbnailsBuffer:(struct __CVBuffer { } *)a4 rawThumbnailsMetadata:(id)a5;
- (void)addDictionary:(id)a0 tag:(id)a1;
- (void)addPhotoDescriptor:(id)a0;
- (void)addSensorRawSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)canProcessEnhancedResolution:(BOOL)a0 skipInferences:(BOOL)a1;
- (void)depthDataGenerationFailed;
- (void)encounteredProcessingError:(int)a0;
- (void)proxyReadyWithFPNREnabled:(BOOL)a0;

@end
