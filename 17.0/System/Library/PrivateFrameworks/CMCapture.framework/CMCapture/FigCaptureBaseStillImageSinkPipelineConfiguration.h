@class FigCaptureSinkConfiguration;

@interface FigCaptureBaseStillImageSinkPipelineConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL allowsMultipleInflightCaptures;
@property (nonatomic) BOOL clientIsCameraOrDerivative;
@property (nonatomic) BOOL allowedToModifyInputBuffers;
@property (nonatomic) BOOL inputIs10Bit;
@property (nonatomic) int horizontalSensorBinningFactor;
@property (nonatomic) int verticalSensorBinningFactor;
@property (nonatomic) float maxSupportedFrameRate;
@property (nonatomic) int motionAttachmentsSource;
@property (retain, nonatomic) FigCaptureSinkConfiguration *sinkConfiguration;
@property (nonatomic) BOOL usesHighEncodingPriority;
@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) int outputColorSpaceProperties;
@property (nonatomic) BOOL stillImageStabilizationSupported;
@property (nonatomic) int noiseReductionAndFusionScheme;
@property (nonatomic) struct { int width; int height; } depthDataDimensions;
@property (nonatomic) float portraitEffectsMatteMainImageDownscalingFactor;
@property (nonatomic) BOOL cinematicFramingWarpingRequired;
@property (nonatomic) struct { int width; int height; } cinematicFramingWarpingOutputDimensions;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
