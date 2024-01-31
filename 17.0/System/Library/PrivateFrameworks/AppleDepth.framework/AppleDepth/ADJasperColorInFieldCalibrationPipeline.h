@class ADEspressoJasperColorInFieldCalibrationBackendInferenceDescriptor, ADEspressoJasperColorInFieldCalibrationFrontendInferenceDescriptor, ADNetworkProvider, ADJasperColorInFieldCalibrationControllerParameters, ADJasperColorInFieldCalibrationPipelineParameters, ADCameraCalibration;

@interface ADJasperColorInFieldCalibrationPipeline : NSObject {
    ADNetworkProvider *_backendNetworkProvider;
    ADNetworkProvider *_frontendNetworkProvider;
    ADEspressoJasperColorInFieldCalibrationBackendInferenceDescriptor *_backendInferenceDesc;
    ADEspressoJasperColorInFieldCalibrationFrontendInferenceDescriptor *_frontendInferenceDesc;
    int _networkFlowType;
    float _colorCameraEfl;
    struct { void /* unknown type, empty encoding */ columns[4]; } _colorCameraTransform;
    struct { void /* unknown type, empty encoding */ columns[4]; } _jasperCameraTransform;
    struct { void /* unknown type, empty encoding */ columns[3]; } _wmcamToMcamRotation;
    struct CGPoint { double x; double y; } _distortedImagePixels[244992];
    ADJasperColorInFieldCalibrationControllerParameters *_controllerParameters;
    struct __CVBuffer { } *_colorImageRaw;
    struct PixelBufferUtilsSession { struct __CVBuffer *x0; struct OpaqueVTPixelTransferSession *x1; struct OpaqueVTPixelRotationSession *x2; struct CGSize { double x0; double x1; } x3; unsigned int x4; struct CGSize { double x0; double x1; } x5; unsigned int x6; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x7; int x8; int x9; } *_colorInputProcessingSession;
    long long _referenceCameraNumOfPoints;
    float *_zVals;
    struct CGPoint { double x0; double x1; } *_rectifiedPoints;
    void *_rectifiedWorldPoints;
    void *_origWorldPoints;
    struct CGPoint { double x0; double x1; } *_undistortedImagePixels;
    ADCameraCalibration *_colorCalib;
    ADCameraCalibration *_jasperCalib;
    struct { void /* unknown type, empty encoding */ columns[4]; } _referenceCameraExtrinsics;
    float _scale;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _jasperFOVInImage;
    unsigned long long _gcdOutputImageDimensions;
    void *_motionRotationAngles;
    void *_motionTranslation;
    char *_validDepthPercentage;
    unsigned char _backendIndex;
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { void *__value_; } __end_cap_; } _lastKnownPointsCollectionVec;
    int _lastKnownGoodSpotsCount;
    int _jasperColorInFieldForceRun;
}

@property (copy, nonatomic) ADJasperColorInFieldCalibrationPipelineParameters *pipelineParameters;

+ (BOOL)is:(double)a0 around:(double)a1 withPercentage:(float)a2;
+ (BOOL)is:(double)a0 distanceFromSymmetricCroppingPoint:(double)a1 normalizedBySensorDimention:(double)a2 andAllowedDriftFromSymmetricCrop:(float)a3;
+ (BOOL)isColorFrameValid:(struct __CVBuffer { } *)a0 withMetadata:(id)a1 andPipelineParameters:(id)a2;
+ (BOOL)isInSupportedFormat:(struct __CVBuffer { } *)a0;
+ (BOOL)isJasperFrameValid:(id)a0 andPipelineParameters:(id)a1;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isColorFrameValid:(struct __CVBuffer { } *)a0 withMetadata:(id)a1;
- (id)backendInferenceDescriptor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateJasperFOVInImageWithJasperCalibration:(id)a0 withCameraCalibration:(id)a1 withOriginalImageWidth:(unsigned long long)a2 withOriginalImageHeight:(unsigned long long)a3 forOutputImageWidth:(unsigned long long)a4 forOutputImageHeight:(unsigned long long)a5;
- (float)claculateWeightedStd:(SEL)a0;
- (float)convertStdToWeight:(float)a0;
- (id)createInterSessionDataWithDictionaryRepresentation:(id)a0;
- (id)createInterSessionDataWithFactoryJasperToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 currentJasperToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)createReferenceCameraForColor:(id)a0 withExtrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (void)deallocMemory;
- (id)frontendInferenceDescriptor;
- (unsigned long long)gcd:(unsigned long long)a0 and:(unsigned long long)a1;
- (id)initWithParameters:(id)a0 espressoEngine:(unsigned long long)a1;
- (BOOL)isJasperFrameValid:(id)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 prevPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (BOOL)isSDF:(id)a0;
- (long long)postProcessFrontendOutputX:(void *)a0 frontendOutputY:(void *)a1 frontendOutputZ:(void *)a2 frontendOutputErrorX:(void *)a3 frontendOutputErrotY:(void *)a4 frontendOutputErrorZ:(void *)a5 interSessionData:(id)a6 jasperColorInFieldCalibrationResult:(id)a7;
- (long long)preProcessColor:(struct __CVBuffer { } *)a0 processedColor:(struct __CVBuffer { } *)a1 referenceCameraCalibration:(id)a2 colorCameraCalibration:(id)a3;
- (long long)preProcessJasper:(id)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 prevPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 referenceCameraCalibration:(id)a3 jasperCameraCalibration:(id)a4 reprojectedPointsBuffer:(struct __CVBuffer { } *)a5;
- (long long)processIntermediateResultsWithBackendFeaturesOutputVector:(const void *)a0 frontendEspressoFeaturesInput:(void *)a1 dimensions:(id)a2;
- (void)reportTelemetry:(id)a0 withInterSessionData:(id)a1;
- (long long)resizeImage:(id)a0 colorImage:(struct __CVBuffer { } *)a1 processedColor:(struct __CVBuffer { } *)a2;
- (long long)undistortColorImage:(struct __CVBuffer { } *)a0 undistortedImage:(struct __CVBuffer { } *)a1 calibration:(id)a2;
- (void)updateJasperCamera:(id)a0;
- (void)updateLastKnownDepthMap:(id)a0;
- (void)updateWmcamToMcamExtrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

@end
