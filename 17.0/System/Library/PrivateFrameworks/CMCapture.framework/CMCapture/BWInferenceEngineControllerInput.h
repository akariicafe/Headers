@class NSArray;

@interface BWInferenceEngineControllerInput : BWStillImageProcessorControllerInput

@property (readonly, nonatomic) BOOL expectsMoreData;
@property (readonly, nonatomic) unsigned long long inferenceInputBufferType;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *inferenceImage;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *propagationImage;
@property (copy, nonatomic) NSArray *enabledInferenceMasks;
@property (nonatomic) BOOL smartCameraClassificationsEnabled;
@property (nonatomic) unsigned long long enabledVisionInferences;

- (void)dealloc;
- (id)description;
- (void)addInferenceImage:(struct opaqueCMSampleBuffer { } *)a0;
- (void)addInferenceImage:(struct opaqueCMSampleBuffer { } *)a0 propagationImage:(struct opaqueCMSampleBuffer { } *)a1;
- (id)initWithSettings:(id)a0 portType:(id)a1;
- (id)initWithSettings:(id)a0 portType:(id)a1 inferenceInputBufferType:(unsigned long long)a2;

@end
