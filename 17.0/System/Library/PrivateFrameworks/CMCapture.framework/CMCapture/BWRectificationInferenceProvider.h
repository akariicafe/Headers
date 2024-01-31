@class GDCTransform, NSString, NSArray, BWInferenceVideoRequirement, NSSet, Calibration, LKTKeypointDetector, Demosaic, FigMetalContext, NSDictionary, DisparityTuningParameters, MTLTextureDescriptor;
@protocol BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExtractable, BWInferenceExecutable;

@interface BWRectificationInferenceProvider : NSObject <BWInferenceProvider, BWInferenceSubmittable> {
    BWInferenceVideoRequirement *_refInputRequirement;
    BWInferenceVideoRequirement *_auxInputRequirement;
    BWInferenceVideoRequirement *_refKeypointsInputRequirement;
    BWInferenceVideoRequirement *_auxKeypointsInputRequirement;
    BWInferenceVideoRequirement *_refOutputRequirement;
    BWInferenceVideoRequirement *_auxOutputRequirement;
    BWInferenceVideoRequirement *_originalRefInputRequirement;
    BWInferenceVideoRequirement *_originalAuxInputRequirement;
    LKTKeypointDetector *_lktKeypointDetector;
    Calibration *_calibration;
    DisparityTuningParameters *_disparityTuningParameters;
    Demosaic *_auxiliaryDemosaic;
    struct { float distortPolynomCoefficients[8]; float undistortPolynomCoefficients[8]; float centerX; float centerY; float originalImageOriginX; float originalImageOriginY; float originalImageWidth; float originalImageHeight; float pixelSize; float homography[9]; float inverseHomography[9]; struct CGSize { double width; double height; } canvasResolution; BOOL applyZTransform; int samplerType; struct *rollingShutterCorrectionHomographies; int numRollingShutterCorrectionHomographies; float rollingShutterCorrectionHomographyStep; BOOL applyRollingShutterCorrection; float focalLengthPix; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalCropRect; } _gdcParametersReference;
    struct { float distortPolynomCoefficients[8]; float undistortPolynomCoefficients[8]; float centerX; float centerY; float originalImageOriginX; float originalImageOriginY; float originalImageWidth; float originalImageHeight; float pixelSize; float homography[9]; float inverseHomography[9]; struct CGSize { double width; double height; } canvasResolution; BOOL applyZTransform; int samplerType; struct *rollingShutterCorrectionHomographies; int numRollingShutterCorrectionHomographies; float rollingShutterCorrectionHomographyStep; BOOL applyRollingShutterCorrection; float focalLengthPix; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalCropRect; } _gdcParametersAuxiliary;
    GDCTransform *_gdcTransform;
    double *_adaptiveCorrectionKeypointsReferenceDistorted;
    double *_adaptiveCorrectionKeypointsAuxiliaryDistorted;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    FigMetalContext *_metalContext;
    MTLTextureDescriptor *_refInputDescriptor;
    MTLTextureDescriptor *_auxInputDescriptor;
    MTLTextureDescriptor *_refKeypointsInputDescriptor;
    MTLTextureDescriptor *_auxKeypointsInputDescriptor;
    MTLTextureDescriptor *_refOutputDescriptor;
    MTLTextureDescriptor *_auxOutputDescriptor;
    NSDictionary *_cameraInfoByPortType;
    NSDictionary *_calibrationOptions;
    struct __CVBuffer { } *_zoomedAux;
    unsigned long long _calibrationWidth;
    unsigned long long _calibrationHeight;
    unsigned int _rectificationWidth;
    unsigned int _rectificationHeight;
    unsigned long long _keypointGridWidth;
    unsigned long long _keypointGridHeight;
    BOOL _applyRollingShutterCorrection;
    unsigned long long _frameIndex;
    int _adcFrequency;
    unsigned long long _adcMinFramesToConverge;
    unsigned long long _adcFramesConverged;
    float _oldZoomFactor;
    int _oldQuadraBinningFactor;
    float _zoomDeltaThreshold;
}

@property (readonly, nonatomic) int executionTarget;
@property (readonly, copy, nonatomic) NSSet *preventionReasons;
@property (readonly, nonatomic) NSArray *inputVideoRequirements;
@property (readonly, nonatomic) NSArray *outputVideoRequirements;
@property (readonly, nonatomic) NSArray *cloneVideoRequirements;
@property (readonly, nonatomic) NSArray *inputMetadataRequirements;
@property (readonly, nonatomic) NSArray *outputMetadataRequirements;
@property (readonly, nonatomic) unsigned int allowedPixelBufferCompressionDirection;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) id<BWInferenceExecutable> executable;
@property (readonly, nonatomic) id<BWInferenceSubmittable> submittable;
@property (readonly, nonatomic) id<BWInferenceExtractable> extractable;
@property (readonly, nonatomic) id<BWInferencePropagatable> propagatable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (int)prewarmUsingLimitedMemory:(BOOL)a0;
- (id)newStorage;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withSubmissionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 workQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;
- (int)prepareForSubmissionWithWorkQueue:(id)a0;
- (id)initWithRefInputRequirement:(id)a0 auxInputRequirement:(id)a1 refKeypointsInputRequirement:(id)a2 auxKeypointsInputRequirement:(id)a3 refOutputRequirement:(id)a4 auxOutputRequirement:(id)a5 originalRefRequirement:(id)a6 originalAuxRequirement:(id)a7 resourceProvider:(id)a8 configuration:(id)a9;

@end
