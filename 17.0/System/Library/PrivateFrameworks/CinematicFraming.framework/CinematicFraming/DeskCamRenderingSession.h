@class NSString, DeskCamSessionOptions, NSArray, CinematicTracker;
@protocol MTLDevice, MTLLibrary, MTLCommandQueue, MTLBuffer;

@interface DeskCamRenderingSession : NSObject <DeskCamRenderingManager> {
    int _outputType;
    struct { int width; int height; } _outputDimensions;
    int _cameraOrientation;
    NSString *_portType;
    int _sensorID;
    void /* unknown type, empty encoding */ _gravity;
    BOOL _isFrontCamera;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _outputPlaneRectangle;
    int _outputPlaneCcwRotations;
    struct { void /* unknown type, empty encoding */ columns[3]; } _rotationMatrix;
    float _pitch;
    BOOL _gimbalLock;
    float _roll;
    BOOL _constrainRollUpdate;
    id<MTLDevice> _metalDevice;
    id<MTLCommandQueue> _commandQueue;
    id<MTLLibrary> _library;
    struct __CVMetalTextureCache { } *_cvMetalTextureCacheRef;
    id<MTLBuffer> _statisticsBuffer;
    id<MTLBuffer> _toneMappingControlsBuffer;
    struct { void /* unknown type, empty encoding */ sensorSize; struct { void /* unknown type, empty encoding */ columns[3]; } intrinsicMatrixT; BOOL hasGeometricDistortionCalibration; void /* unknown type, empty encoding */ lensDistortionCenter; float mmFactor; int distortionCalibrationValidMaxRadiusInPixels; struct { float c0; float c2; float c4; float c6; float c8; float c10; float c12; float c14; } inverseGeometricDistortionPolynomial; struct { float c0; float c2; float c4; float c6; float c8; float c10; float c12; float c14; } forwardGeometricDistortionPolynomial; } _calibrationParameters;
    int _zoomFactorType;
    float _zoomFactorRequested;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _unscaledOutputPlaneRectangle;
    BOOL _autoZoomFactorUpdate;
    CinematicTracker *_subjectTracker;
    NSArray *_faceDetections;
    NSArray *_bodyDetections;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timestamp;
}

@property (retain, nonatomic) DeskCamSessionOptions *options;
@property (readonly, nonatomic) struct { struct { } x0; } trapezoid;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } transformMatrix;
@property (readonly, nonatomic) BOOL transformIsValid;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } subjectRect;
@property (readonly, nonatomic) float zoomFactorApplied;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ focusPoint;
@property (readonly, nonatomic) unsigned int exifOrientation;

- (void)dealloc;
- (void).cxx_destruct;
- (int)_compileShaders;
- (id)_newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 label:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_outputPlaneRectForDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct { struct { } x0; })_projectRectInFramingSpaceLandscapeLeftToInputImageCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void /* unknown type, empty encoding */)_outputPlaneSizeForDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct { struct { } x0; })_projectRectInInputImageToFramingSpaceLandscapeLeftCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applyZoomFactorToOutputPlane:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_compileComputeShader:(id)a0;
- (void)_constrainedRollUpdate:(float)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_defaultFramingSpaceViewport:(float)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_framingSpaceBoundsLandscapeLeft;
- (struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; float x2; int x3; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x4; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x5; } x1; float x2; float x3; int x4; })_imageWarpingControls;
- (void)_initializeMetal;
- (BOOL)_pointInFramingSpaceLandscapeLeftIsValid:(SEL)a0;
- (void /* unknown type, empty encoding */)_projectPointToFramingSpaceLandscapeLeft:(SEL)a0;
- (void /* unknown type, empty encoding */)_projectPointToInputImageCoordinates:(SEL)a0;
- (struct { void /* unknown type, empty encoding */ x0[3]; })_rotationMatrixForDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scalePlaneToFitInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_shiftOutputPlaneToFitInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)_zoomFactorValueForOutputPlane;
- (id)initWithOutputDimensions:(struct { int x0; int x1; })a0 portType:(id)a1;
- (int)processBuffer:(struct __CVBuffer { } *)a0 outputPixelBuffer:(struct __CVBuffer { } *)a1;
- (void)registerCameraCalibrationDictionary:(id)a0;
- (void)registerCameraOrientation:(int)a0;
- (void)registerFaceDetections:(id)a0 bodyDetections:(id)a1;
- (void)registerGravity:(SEL)a0;
- (void)registerOutputType:(int)a0;
- (void)registerTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)registerZoomFactorRequested:(float)a0 zoomFactorType:(int)a1;

@end
