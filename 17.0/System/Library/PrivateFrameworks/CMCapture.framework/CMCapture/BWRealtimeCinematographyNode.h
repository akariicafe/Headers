@class PTGlobalVideoHeaderMetadataVersion1, NSDictionary, PTGlobalRenderingMetadata, PTCinematographyStream, NSMutableArray, BWNodeInput, BWFigVideoCaptureDevice, NSString, PTGlobalVideoMetadata, PTGlobalCinematographyMetadataVersion1, PTGlobalStabilizationMetadataVersion1, NSData, BWNodeOutput;

@interface BWRealtimeCinematographyNode : BWNode <PTCinematographyStreamDelegate> {
    PTCinematographyStream *_cinematographyStream;
    NSDictionary *_latestDetections;
    BWNodeOutput *_detectedObjectsOutput;
    BWFigVideoCaptureDevice *_captureDevice;
    BOOL _pastFramesWereBrightEnough[30];
    int _pastFramesWereBrightEnoughPointer;
    BOOL _currentStateIsBrightEnough;
    float _alphaLowLight;
    int _luxLevelThreshold;
    int _alphaRampFrameCount;
    float _networkBias;
    BOOL _hasAutoFocus;
    int _framesSinceAutoFocusUpdate;
    int _autoFocusUpdateFrameDelay;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastFixedFocusRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastFixedFocusFinalCropRect;
    int focusMode;
    BOOL _hasSeenDepth;
    BOOL _captureInputEnabled;
    float _simulatedAperture;
    struct opaqueCMSampleBuffer { } *_previousSampleBuffer;
    struct opaqueCMFormatDescription { } *_depthFormatDescription;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
    NSMutableArray *_videoCaptureSampleBufferQueue;
    NSMutableArray *_previewSampleBufferQueue;
    int _numEODMessagesReceived;
    BWNodeInput *_captureInput;
    PTGlobalCinematographyMetadataVersion1 *_globalCinematographyMetadata;
    PTGlobalRenderingMetadata *_globalRenderingMetadata;
    PTGlobalStabilizationMetadataVersion1 *_globalStabilizationMetadata;
    PTGlobalVideoHeaderMetadataVersion1 *_globalVideoHeaderMetadata;
    PTGlobalVideoMetadata *_globalMetadata;
    BOOL _globalsWereSet;
    long long _globalRenderingMetadataVersion;
    long long _latestFocusDectionTrackID;
}

@property (readonly, nonatomic) BWNodeOutput *detectedObjectsOutput;
@property (nonatomic) float simulatedAperture;
@property (readonly, nonatomic) NSString *cinematographyModelVersionString;
@property (readonly, nonatomic) BWNodeOutput *movieFileOutput;
@property (readonly, nonatomic) BWNodeOutput *previewOutput;
@property (readonly, nonatomic) NSData *globalMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (id)initWithObjectMetadataIdentifiers:(id)a0 cachedSimulatedAperture:(float)a1 captureDevice:(id)a2 tuningParameters:(id)a3 videoDepthConfiguration:(id)a4 captureInputEnabled:(BOOL)a5;

@end
