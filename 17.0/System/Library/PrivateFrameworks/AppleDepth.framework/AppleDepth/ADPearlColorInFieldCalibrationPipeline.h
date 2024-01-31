@class ADEspressoPearlColorInFieldCalibrationBackendInferenceDescriptor, ADPearlColorInFieldCalibrationControllerParameters, ADNetworkProvider, ADEspressoPearlColorInFieldCalibrationFrontendInferenceDescriptor, ADReprojection, ADPearlColorInFieldCalibrationPipelineParameters, ADCameraCalibration;

@interface ADPearlColorInFieldCalibrationPipeline : NSObject {
    ADNetworkProvider *_backendNetworkProvider;
    ADNetworkProvider *_frontendNetworkProvider;
    ADEspressoPearlColorInFieldCalibrationBackendInferenceDescriptor *_backendInferenceDesc;
    ADEspressoPearlColorInFieldCalibrationFrontendInferenceDescriptor *_frontendInferenceDesc;
    int _networkFlowType;
    float _colorCameraEfl;
    struct { void /* unknown type, empty encoding */ columns[4]; } _colorCameraTransform;
    struct { void /* unknown type, empty encoding */ columns[4]; } _pearlCameraTransform;
    struct { void /* unknown type, empty encoding */ columns[3]; } _wmcamToMcamRotation;
    struct CGPoint { double x; double y; } _distortedImagePixels[244992];
    ADPearlColorInFieldCalibrationControllerParameters *_controllerParameters;
    struct __CVBuffer { } *_colorImageRaw;
    struct PixelBufferUtilsSession { struct __CVBuffer *x0; struct OpaqueVTPixelTransferSession *x1; struct OpaqueVTPixelRotationSession *x2; struct CGSize { double x0; double x1; } x3; unsigned int x4; struct CGSize { double x0; double x1; } x5; unsigned int x6; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x7; int x8; int x9; } *_colorInputProcessingSession;
    ADReprojection *_pearlReprojector;
    long long _referenceCameraNumOfPoints;
    float *_zVals;
    struct CGPoint { double x0; double x1; } *_rectifiedPoints;
    void *_rectifiedWorldPoints;
    void *_origWorldPoints;
    struct CGPoint { double x0; double x1; } *_undistortedImagePixels;
    ADCameraCalibration *_colorCalib;
    ADCameraCalibration *_pearlCalib;
    struct { void /* unknown type, empty encoding */ columns[4]; } _referenceCameraExtrinsics;
    void /* unknown type, empty encoding */ _motionRotationAngles;
    void /* unknown type, empty encoding */ _motionTranslation;
    float _validDepthPercentage;
}

@property (copy, nonatomic) ADPearlColorInFieldCalibrationPipelineParameters *pipelineParameters;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } pearlToColorCurrentTransform;

+ (BOOL)isColorFrameValid:(struct __CVBuffer { } *)a0 withMetadata:(id)a1;
+ (BOOL)isPearlFrameValid:(struct __CVBuffer { } *)a0 withMetadata:(id)a1;
+ (BOOL)isPearlFrameValid:(struct __CVBuffer { } *)a0 withMetadata:(id)a1 andPipelineParameters:(id)a2;
+ (BOOL)isValidDepthAboveThreshold:(struct __CVBuffer { } *)a0 threshold:(float)a1 invalid:(unsigned short)a2 validDepthPercentage:(float *)a3;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isColorFrameValid:(struct __CVBuffer { } *)a0 withMetadata:(id)a1;
- (BOOL)isPearlFrameValid:(struct __CVBuffer { } *)a0 withMetadata:(id)a1;
- (id)backendInferenceDescriptor;
- (float)claculateWeightedStd:(SEL)a0;
- (float)convertStdToWeight:(float)a0;
- (id)createInterSessionDataWithDictionaryRepresentation:(id)a0;
- (id)createInterSessionDataWithFactoryPearlToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 currentPearlToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)createReferenceCameraForColor:(id)a0 withExtrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (void)deallocMemory;
- (id)frontendInferenceDescriptor;
- (id)initWithParameters:(id)a0 espressoEngine:(unsigned long long)a1;
- (BOOL)isPearlFrameValid:(struct __CVBuffer { } *)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 prevPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (long long)postProcessFrontendOutputX:(void *)a0 frontendOutputY:(void *)a1 frontendOutputErrorX:(void *)a2 frontendOutputErrotY:(void *)a3 interSessionData:(id)a4 pearlColorInFieldCalibrationResult:(id)a5;
- (long long)preProcessColor:(struct __CVBuffer { } *)a0 processedColor:(struct __CVBuffer { } *)a1 referenceCameraCalibration:(id)a2 colorCameraCalibration:(id)a3;
- (long long)preProcessPearl:(struct __CVBuffer { } *)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 prevPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 referenceCameraCalibration:(id)a3 pearlCameraCalibration:(id)a4 reprojectedPointsBuffer:(struct __CVBuffer { } *)a5;
- (long long)processIntermediateResultsWithBackendFeaturesOutputVector:(const void *)a0 frontendEspressoFeaturesInput:(void *)a1 dimensions:(id)a2;
- (void)reportTelemetry:(id)a0 withInterSessionData:(id)a1;
- (long long)undistortColorImage:(struct __CVBuffer { } *)a0 undistortedImage:(struct __CVBuffer { } *)a1 calibration:(id)a2;
- (void)updatePearlCamera:(id)a0;
- (void)updateWmcamToMcamExtrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

@end
