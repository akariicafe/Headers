@class NSString, NRFPrepareDescriptor, NSSet, FigStateMachine, NSDictionary, NSObject, BWNRFProcessorControllerConfiguration, NSMutableArray, BWNRFProcessorRequest;
@protocol NRFProcessor, OS_dispatch_queue;

@interface BWNRFProcessorController : BWStillImageProcessorController <BWNRFProcessorInputDelegate, NRFProcessorDelegate, BWNoiseReductionAndFusionProcessorController> {
    BWNRFProcessorControllerConfiguration *_configuration;
    NSSet *_supportedPortTypes;
    FigStateMachine *_stateMachine;
    id<NRFProcessor> _nrfProcessor;
    NSString *_nrfProcessorClassName;
    NRFPrepareDescriptor *_prepareDescriptor;
    NRFPrepareDescriptor *_ubPrepareDescriptor;
    Class _nrfUBFusionOutputClass;
    Class _nrfProgressiveBracketingStatisticsClass;
    Class _nrfProgressiveBracketingParametersClass;
    NSDictionary *_adaptiveBracketingCaptureParametersByPortType;
    Class _nrfRawNigthModeOutputFrameClass;
    NRFPrepareDescriptor *_rawNightModePrepareDescriptor;
    Class _nrfDeepFusionOutputClass;
    NRFPrepareDescriptor *_deepFusionPrepareDescriptor;
    Class _nrfCompletionStatusClass;
    NSObject<OS_dispatch_queue> *_completionStatusQueue;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    struct opaqueCMFormatDescription { } *_inferenceInputFormatDescription;
    struct opaqueCMFormatDescription { } *_demosaicedRawFormatDescription;
    struct opaqueCMFormatDescription { } *_gainMapFormatDescription;
    NSMutableArray *_requestQueue;
    BWNRFProcessorRequest *_currentRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) int progressiveLowLightFusionBatchSize;

+ (void)initialize;

- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (unsigned long long)type;
- (BOOL)finishProcessingCurrentInputNow;
- (id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)a0;
- (id)adaptiveBracketingParametersForDigitalFlashMode:(int)a0 frameStatistics:(id)a1 stationary:(BOOL)a2 sphereOffsetEnabled:(BOOL)a3 detectedObjects:(id)a4;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1 processErrorRecoveryFrame:(BOOL)a2 processOriginalImage:(BOOL)a3 processToneMapping:(BOOL)a4 processInferenceInputImage:(BOOL)a5 clientBracketSequenceNumber:(int)a6 processSemanticRendering:(BOOL)a7 provideInferenceInputImageForProcessing:(BOOL)a8 inferencesAvailable:(BOOL)a9;
- (void)input:(id)a0 addFrame:(struct opaqueCMSampleBuffer { } *)a1 isReferenceFrame:(BOOL)a2;
- (void)inputReceivedAllFrames:(id)a0;
- (void)inputReceivedProcessedRawErrorRecoveryFrame:(id)a0;
- (id)metalImageBufferProcessor;
- (void)processor:(id)a0 didCompleteProcessingForSurfaceID:(unsigned int)a1;
- (void)processor:(id)a0 didEnqueueProcessingForSurfaceID:(unsigned int)a1;
- (void)processor:(id)a0 didSelectFusionMode:(int)a1;
- (void)processor:(id)a0 didSelectProgressiveFusionReferenceFrameIndex:(int)a1;
- (void)processor:(id)a0 outputReadyWithFrameType:(int)a1 outputPixelBuffer:(struct __CVBuffer { } *)a2 outputMetadata:(id)a3 error:(int)a4;
- (id)processorGetInferenceResults:(id)a0;
- (unsigned int)rawNightModeOutputPixelFormatByBufferType:(unsigned long long)a0;

@end
