@class NSMutableDictionary, CinematicFramingSessionOptions;
@protocol MTLDevice, MTLLibrary, MTLCommandQueue, MTLComputePipelineState;

@interface CinematicFramingRenderer : NSObject <FramingSpaceManager> {
    BOOL _isFrontCamera;
    int _cameraOrientation;
    id<MTLDevice> _metalDevice;
    id<MTLCommandQueue> _commandQueue;
    id<MTLLibrary> _library;
    id<MTLComputePipelineState> _pipelineComputeStates[2];
    struct __CVMetalTextureCache { } *_cvMetalTextureCacheRef;
    float _stereographicFisheyeF;
    float _stereographicFisheyeMaxStrength;
    NSMutableDictionary *_kalmanFilterManager[2];
}

@property (readonly, nonatomic) struct { int width; int height; } outputDimensions;
@property (readonly, nonatomic) int numCCWRotationsFromInputToFramingSpace;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ gravity;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ sensorSize; struct { void /* unknown type, empty encoding */ columns[3]; } intrinsicMatrixT; BOOL hasGeometricDistortionCalibration; void /* unknown type, empty encoding */ lensDistortionCenter; float mmFactor; int distortionCalibrationValidMaxRadiusInPixels; struct { float c0; float c2; float c4; float c6; float c8; float c10; float c12; float c14; } inverseGeometricDistortionPolynomial; struct { float c0; float c2; float c4; float c6; float c8; float c10; float c12; float c14; } forwardGeometricDistortionPolynomial; } calibrationParams;
@property (readonly, nonatomic) float additionalCameraRotation;
@property (readonly, nonatomic) int sensorID;
@property (nonatomic) int cameraOrientation;
@property (nonatomic) BOOL cameraOrientationCorrectionEnabled;
@property (retain, nonatomic) CinematicFramingSessionOptions *options;
@property (nonatomic) float fovLimit;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outputROI;
@property (nonatomic) BOOL visualizeViewport;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } framingSpaceBounds;
@property (readonly, nonatomic) float maxAllowedViewportWidth;
@property (nonatomic) BOOL isFrontCamera;

- (void)dealloc;
- (void)finish;
- (void).cxx_destruct;
- (int)_compileShaders;
- (float)_fisheyeStrengthForDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initializeMetal;
- (void /* unknown type, empty encoding */)_outputPlaneSizeForDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustDisplayRectToFitInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_compileComputeShader:(id)a0 pixelFormat:(unsigned long long)a1;
- (int)_createComputePipelinesForShaders:(id)a0;
- (void)_filterDetectionsInInputImageCoordinates:(id)a0 trackType:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_framingSpaceBoundsLandscapeLeft;
- (float)_getHeightDerivativeForWidth:(float)a0 widthDerivative:(float)a1 outputAspectRatioInDeviceOrientation:(float)a2;
- (float)_getHeightForWidth:(float)a0 outputAspectRatioInDeviceOrientation:(float)a1;
- (float)_getWidthForHeight:(float)a0 outputAspectRatioInDeviceOrientation:(float)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_moveDisplayRectToFitInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)_outputPlaneCcwRotations;
- (BOOL)_pointInFramingSpaceLandscapeLeftIsValid:(SEL)a0 withDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPoint { double x0; double x1; })_projectPointInFramingSpaceLandscapeLeft:(struct CGPoint { double x0; double x1; })a0 toDisplayRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_projectRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toDisplayRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct { void /* unknown type, empty encoding */ x0[3]; })_rotationMatrixForDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_scaleDisplayRectSizeToFit:(struct CGSize { double x0; double x1; })a0;
- (void /* unknown type, empty encoding */)_searchEarliestValidPointOnIntervalWithStart:(id)a0 andEnd:(SEL)a1 displayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGSize { double x0; double x1; })_searchValidSizeForStartSize:(SEL)a0 invalidPoint:(struct CGSize { double x0; double x1; })a1;
- (void)_setShaderParametersForDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 outputROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 calibrationParameters:(struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; float x2; int x3; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x4; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x5; })a2 commandEncoder:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_warpRectInInputImageCoordinatesToFramingSpaceInLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 calibrationParameters:(struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; float x2; int x3; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x4; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x5; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustDisplayRectToFitInFramingSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeNewCoordinatesInOrientation:(int)a0 forViewportInCurrentOrientation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (float)getHeightDerivativeForWidth:(float)a0 widthDerivative:(float)a1;
- (float)getHeightForWidth:(float)a0;
- (float)getWidthForHeight:(float)a0;
- (id)initWithOutputDimensions:(struct { int x0; int x1; })a0;
- (float)outputAspectRatioInDeviceOrientation;
- (int)processBuffer:(struct __CVBuffer { } *)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputPixelBuffer:(struct __CVBuffer { } *)a2;
- (struct CGPoint { double x0; double x1; })projectPointInFramingSpace:(struct CGPoint { double x0; double x1; })a0 toDisplayRectInFramingSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })projectRectInFramingSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toDisplayRectInFramingSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)registerAdditionalCameraRotation:(float)a0;
- (int)registerCalibrationData:(id)a0;
- (void)registerGravityX:(float)a0 y:(float)a1 z:(float)a2;
- (void)registerSensorID:(int)a0;
- (void)warpMetadataInInputImageCoordinatesToFramingSpace:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })warpRectInInputImageCoordinatesToFramingSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
