@class BWStillImageSettings, NSString, NSDictionary, NSMutableDictionary, BWNodeOutput, FigCapturePixelConverter;

@interface BWGNRNode : BWNode {
    BOOL _sisEnabled;
    BOOL _oisEnabled;
    BOOL _hdrEnabled;
    BOOL _processingLTMHDRFusion;
    BWNodeOutput *_bravoHDRDisparityOutput;
    void /* function */ *_createSampleBufferProcessorFunction;
    struct OpaqueFigSampleBufferProcessor { } *_sampleBufferProcessor;
    NSString *_portType;
    NSString *_sensorID;
    NSDictionary *_sensorIDDictionary;
    NSString *_telephotoPortType;
    NSString *_telephotoSensorID;
    NSDictionary *_telephotoSensorIDDictionary;
    BWStillImageSettings *_currentStillImageSettings;
    int _processingType;
    BOOL _clientExpectsPreBracketFrame;
    BOOL _expectsPreBracketFrame;
    BOOL _receivedPreBracketFrame;
    unsigned int _expectedFrameCount;
    unsigned int _receivedFrameCount;
    BOOL _receivedAllFrames;
    int _receivedReferenceFrameBracketedCaptureSequenceNumber;
    int _gnrFusionReferenceFrameBracketedCaptureSequenceNumber;
    BOOL _processingHDREV0BracketFrame;
    int _hdrEV0BracketCaptureIdentifier;
    int _hdrDisparityBracketedCaptureSequenceNumber;
    NSMutableDictionary *_inputAttachedMedia;
    struct opaqueCMSampleBuffer { } *_collectedUnprocessedPreBracketHDR;
    FigCapturePixelConverter *_stereoFusedGNRHDRPixelConverter;
    long long _previouslyCompletedFusionSettingsID;
    BOOL _usesHDRPreBracketFrameForErrorRecoveryDownstream;
    BOOL _allowedToModifyInputBuffers;
}

+ (void)initialize;

- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0 forInput:(id)a1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)setUsesHDRPreBracketFrameForErrorRecoveryDownstream:(BOOL)a0;
- (id)nodeType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (BOOL)attachesInputBracketToOutputSampleBuffer;
- (id)nodeSubType;
- (BOOL)allowedToModifyInputBuffers;
- (void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)a0;
- (id)_initWithSISEnabled:(BOOL)a0 OISEnabled:(BOOL)a1 LTMHDREnabled:(BOOL)a2 processingLTMHDRFusion:(BOOL)a3 portType:(id)a4 sensorID:(id)a5 sensorIDDictionary:(id)a6 telephotoPortType:(id)a7 telephotoSensorID:(id)a8 telephotoSensorIDDictionary:(id)a9 sbpCreationFunction:(void /* function */ *)a10 treatSoftErrorsAsHardErrors:(BOOL)a11;
- (id)initWithSISEnabled:(BOOL)a0 OISEnabled:(BOOL)a1 LTMHDREnabled:(BOOL)a2 processingLTMHDRFusion:(BOOL)a3 portType:(id)a4 sensorID:(id)a5 sensorIDDictionary:(id)a6 telephotoPortType:(id)a7 telephotoSensorID:(id)a8 telephotoSensorIDDictionary:(id)a9;
- (void)setAllowedToModifyInputBuffers:(BOOL)a0;
- (BOOL)usesHDRPreBracketFrameForErrorRecoveryDownstream;

@end
