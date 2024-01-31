@class BWStillImageSettings, FigCaptureStillImageSettings, NSMutableDictionary, BWStillImageCaptureSettings, BWStillImageCaptureStreamSettings, NSString, NSMutableArray;
@protocol BWUBProcessorInputDelegate;

@interface BWUBProcessorInput : BWStillImageProcessorControllerInput <BWNoiseReductionAndFusionProcessorInput> {
    NSMutableArray *_frames;
    BOOL _keepFrames;
    int _receivedFrames;
    BOOL _receivedAllFrames;
    struct opaqueCMSampleBuffer { } *_referenceFrame;
    struct opaqueCMSampleBuffer { } *_errorRecoveryFrame;
    int _adaptiveBracketingStopFrameCount;
    NSMutableDictionary *_oisRecenteringLoggingData;
}

@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *originalImage;
@property (retain, nonatomic) id<BWUBProcessorInputDelegate> delegate;
@property (nonatomic) BOOL keepFrames;
@property (readonly, nonatomic) NSMutableDictionary *oisRecenteringLoggingData;
@property (readonly, nonatomic) BWStillImageSettings *stillImageSettings;
@property (readonly, nonatomic) FigCaptureStillImageSettings *settings;
@property (readonly, nonatomic) BWStillImageCaptureSettings *captureSettings;
@property (readonly, nonatomic) BWStillImageCaptureStreamSettings *captureStreamSettings;
@property (readonly, nonatomic) BOOL isMaster;
@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) int receivedFrames;
@property (readonly, nonatomic) BOOL receivedAllFrames;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *referenceFrame;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *evMinusReferenceFrame;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *errorRecoveryFrame;
@property (nonatomic) int fusionMode;
@property (nonatomic) BOOL emitErrorRecoveryFrame;
@property (nonatomic) unsigned int remainingProcessingCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)addFrame:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithSettings:(id)a0 portType:(id)a1;
- (void)setProcessedRawErrorRecoveryFrame:(struct opaqueCMSampleBuffer { } *)a0;
- (void)stopAdaptiveBracketingWithGroup:(int)a0;

@end
