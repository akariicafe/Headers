@class NSArray, FigCaptureIrisPreparedSettings;

@interface FigCaptureIrisSinkConfiguration : FigCaptureSinkConfiguration <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL irisMovieCaptureEnabled;
@property (nonatomic) BOOL irisMovieCaptureSuspended;
@property (nonatomic) BOOL preservesIrisMovieCaptureSuspendedOnSessionStop;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } irisMovieDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } irisMovieVideoFrameDuration;
@property (nonatomic) int irisMovieAutoTrimMethod;
@property (nonatomic) BOOL irisFrameHarvestingEnabled;
@property (retain, nonatomic) FigCaptureIrisPreparedSettings *irisPreparedSettings;
@property (nonatomic) BOOL irisApplyPreviewShift;
@property (nonatomic) BOOL optimizesImagesForOfflineVideoStabilization;
@property (nonatomic) BOOL quadraHighResCaptureEnabled;
@property (nonatomic) BOOL depthDataDeliveryEnabled;
@property (nonatomic) BOOL portraitEffectsMatteDeliveryEnabled;
@property (retain, nonatomic) NSArray *enabledSemanticSegmentationMatteURNs;
@property (nonatomic) BOOL filterRenderingEnabled;
@property (nonatomic) BOOL bravoConstituentPhotoDeliveryEnabled;
@property (nonatomic) BOOL momentCaptureMovieRecordingEnabled;
@property (nonatomic) BOOL spatialOverCaptureEnabled;
@property (nonatomic) int maxQualityPrioritization;
@property (nonatomic) BOOL deferredProcessingEnabled;
@property (nonatomic) BOOL digitalFlashCaptureEnabled;
@property (nonatomic) BOOL intelligentDistortionCorrectionEnabled;
@property (nonatomic) BOOL demosaicedRawEnabled;
@property (nonatomic) BOOL focusPixelBlurScoreEnabled;
@property (nonatomic) BOOL previewQualityAdjustedPhotoFilterRenderingEnabled;
@property (nonatomic) BOOL zeroShutterLagEnabled;
@property (nonatomic) BOOL responsiveCaptureEnabled;
@property (nonatomic) BOOL fastCapturePrioritizationEnabled;
@property (nonatomic) BOOL semanticStyleRenderingEnabled;
@property (nonatomic) struct { int width; int height; } maxPhotoDimensions;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (int)sinkType;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
