@class BWDeviceOrientationMonitor, NSString, VCCamera, NSArray, NSMutableDictionary, NSDictionary, VCProcessor, BWNodeOutput;

@interface BWCinematicFramingNode : BWNode <BWFigVideoCaptureDeviceCenterStageDelegate, BWFigVideoCaptureDeviceManualCinematicFramingDelegate, BWCinematicFramingStatesProvider> {
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
    int _horizontalSensorBinningFactor;
    int _verticalSensorBinningFactor;
    NSDictionary *_cameraInfoByPortType;
    struct { int width; int height; } _outputDimensions;
    struct { VCCamera *inputCamera; VCCamera *outputCamera; struct { long long value; int timescale; unsigned int flags; long long epoch; } pts; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outputROI; } _stillCaptureQueue[2];
    unsigned int _stillCaptureEnqueueIndex;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stillCaptureQueueLock;
    VCProcessor *_vcProcessor;
    struct { BOOL autoFramingEnabled; BOOL fieldOfViewRestrictedToWide; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outputFramingRectOfInterest; int centerStageFramingMode; float videoZoomFactor; float panningAngleX; float panningAngleY; double manualFramingDefaultZoomFactor; } _cinematicFramingControls;
    BWDeviceOrientationMonitor *_deviceOrientationMonitor;
    unsigned int _maxPeopleDetected;
    unsigned int _minLuxLevelNeeded;
    BOOL _stillImageCaptureEnabled;
    BOOL _deviceOrientationCorrectionEnabled;
    BOOL _outputCameraResetInFlight;
    BOOL _oneShotFramingInFlight;
    int _maxLossyCompressionLevel;
    NSArray *_portTypes;
    NSString *_deviceModelName;
    int _endOfDataVideoInputsCount;
    int _endOfDataMetadataInputsCount;
    BOOL _videoOutputFormatIsLive;
    BOOL _metadataOutputFormatIsLive;
    BOOL _cameraHasDistoritionCoefficients;
    BOOL _cameraHasCalibrationValidMaxRadius;
}

@property (readonly, nonatomic) NSMutableDictionary *videoCaptureInputsByPortType;
@property (readonly, nonatomic) BWNodeOutput *videoCaptureOutput;
@property (readonly, nonatomic) NSMutableDictionary *detectionMetadataInputsByPortType;
@property (readonly, nonatomic) BWNodeOutput *detectionMetadataOutput;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (nonatomic) unsigned int cinematicFramingControlMode;
@property (nonatomic) struct { BOOL x0; BOOL x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; int x3; float x4; float x5; float x6; double x7; } cinematicFramingControls;
@property (nonatomic) double manualFramingVideoZoomFactor;
@property (nonatomic) BOOL manualFramingControlsSuspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)startPanningAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)resetFraming;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)performOneShotFraming;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)panWithTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (id)copyCameraStatesForPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)didChangeCenterStageFramingMode:(int)a0;
- (void)didChangeCenterStageRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithOutputDimensions:(struct { int x0; int x1; })a0 cameraInfoByPortType:(id)a1 horizontalSensorBinningFactor:(int)a2 verticalSensorBinningFactor:(int)a3 deviceOrientationCorrectionEnabled:(BOOL)a4 stillImageCaptureEnabled:(BOOL)a5 objectMetadataIdentifiers:(id)a6 maxLossyCompressionLevel:(int)a7 portTypes:(id)a8 deviceModelName:(id)a9 cinematicFramingControls:(struct { BOOL x0; BOOL x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; int x3; float x4; float x5; float x6; double x7; })a10 cameraHasDistortionCoefficients:(BOOL)a11 cameraHasCalibrationValidMaxRadius:(BOOL)a12;
- (void)restrictCenterStageFieldOfViewToWide:(BOOL)a0;

@end
