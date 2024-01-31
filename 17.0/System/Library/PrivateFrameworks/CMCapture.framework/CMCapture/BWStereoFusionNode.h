@class BWNodeInput, BWStillImageSettings, NSDictionary, BWNodeOutput, NSMutableArray;

@interface BWStereoFusionNode : BWNode {
    void /* function */ *_createSampleBufferProcessorFunction;
    struct OpaqueFigSampleBufferProcessor { } *_sampleBufferProcessor;
    NSDictionary *_telephotoSensorIDDictionary;
    NSDictionary *_cameraInfoByPortType;
    BWStillImageSettings *_currentStillImageSettings;
    BOOL _expectsWideFrame;
    BOOL _receivedWideFrame;
    BOOL _expectsTelephotoFrame;
    BOOL _receivedTelephotoFrame;
    BOOL _performSBPProcessing;
    NSDictionary *_sbpZoomRectangleDictionary;
    BWNodeInput *_masterInput;
    NSMutableArray *_nodeErrorsForWide;
    NSMutableArray *_nodeErrorsForTelephoto;
}

@property (readonly, nonatomic) BWNodeInput *wideInput;
@property (readonly, nonatomic) BWNodeInput *telephotoInput;
@property (readonly, nonatomic) BWNodeOutput *defaultOutput;
@property (readonly, nonatomic) BWNodeOutput *stereoHDROutput;

+ (void)initialize;

- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (BOOL)attachesInputBracketToOutputSampleBuffer;
- (id)nodeSubType;
- (void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)a0;
- (id)_initWithTelephotoSensorIDDictionary:(id)a0 cameraInfoByPortType:(id)a1 sbpCreationFunction:(void /* function */ *)a2 treatSoftErrorsAsHardErrors:(BOOL)a3;
- (id)initWithTelephotoSensorIDDictionary:(id)a0 cameraInfoByPortType:(id)a1;
- (BOOL)isCaptureRequestStateReset;
- (struct OpaqueFigSampleBufferProcessor { } *)sampleBufferProcessor;

@end
