@class BWIntelligentDistortionCorrectionProcessorRequest, NSString, NSDictionary, NSMutableDictionary, BWIntelligentDistortionCorrectionProcessorControllerConfiguration, FigStateMachine, NSMutableArray;
@protocol FigIntelligentDistortionCorrectionProcessor;

@interface BWIntelligentDistortionCorrectionProcessorController : BWStillImageProcessorController <BWIntelligentDistortionCorrectionProcessorInputDelegate> {
    BWIntelligentDistortionCorrectionProcessorControllerConfiguration *_configuration;
    NSDictionary *_idcMaxZoomScaleFactorByPortType;
    id<FigIntelligentDistortionCorrectionProcessor> _processor;
    struct opaqueCMFormatDescription { } *_outputImageFormatDescription;
    NSMutableDictionary *_outputFormatDescriptionByAttachedMediaKey;
    FigStateMachine *_stateMachine;
    NSMutableArray *_requestQueue;
    BWIntelligentDistortionCorrectionProcessorRequest *_currentRequest;
    struct __CVBuffer { } *_intermediateDepthInputBuffer;
    struct __CVBuffer { } *_intermediateDepthOutputBuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)captureTypesWithIntelligentDistortionCorrectionSupport;

- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (unsigned long long)type;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1;
- (void)inputReceivedNewInputData:(id)a0;

@end
