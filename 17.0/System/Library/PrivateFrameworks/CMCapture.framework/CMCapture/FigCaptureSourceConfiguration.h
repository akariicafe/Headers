@class NSString, NSArray, NSDictionary, FigCaptureSourceVideoFormat, FigCaptureSourceDepthDataFormat;

@interface FigCaptureSourceConfiguration : NSObject <FigXPCCoding, NSCopying> {
    struct OpaqueFigCaptureSource { } *_source;
    int _sourceType;
    NSDictionary *_sourceAttributes;
}

@property (readonly) BOOL smartCameraEnabled;
@property (readonly) BOOL bravoShiftMitigationEnabled;
@property (copy, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) struct OpaqueFigCaptureSource { } *source;
@property (retain, nonatomic) FigCaptureSourceVideoFormat *requiredFormat;
@property (nonatomic) float requiredMaxFrameRate;
@property (nonatomic) float requiredMinFrameRate;
@property (nonatomic) float maxFrameRateClientOverride;
@property (nonatomic) float maxGainClientOverride;
@property (nonatomic) BOOL hasSetVideoZoomFactorOnCaptureSource;
@property (nonatomic) float videoZoomFactor;
@property (retain, nonatomic) NSArray *fallbackPrimaryConstituentDeviceTypes;
@property (nonatomic) float videoZoomRampAcceleration;
@property (copy, nonatomic) NSDictionary *faceDetectionConfiguration;
@property (readonly, nonatomic) int sourcePosition;
@property (readonly, nonatomic) int sourceType;
@property (readonly, nonatomic) int sourceDeviceType;
@property (nonatomic) int imageControlMode;
@property (nonatomic) BOOL applyMaxExposureDurationFrameworkOverrideWhenAvailable;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxExposureDurationClientOverride;
@property (nonatomic) BOOL sensorHDREnabled;
@property (nonatomic) BOOL highlightRecoveryEnabled;
@property (nonatomic) int colorSpace;
@property (nonatomic) BOOL depthDataDeliveryEnabled;
@property (nonatomic) float depthDataMaxFrameRate;
@property (retain, nonatomic) FigCaptureSourceDepthDataFormat *depthDataFormat;
@property (nonatomic) BOOL lowLightVideoCaptureEnabled;
@property (nonatomic) BOOL variableFrameRateVideoCaptureEnabled;
@property (nonatomic) int videoStabilizationStrength;
@property (nonatomic) BOOL spatialOverCaptureEnabled;
@property (nonatomic) BOOL nonDestructiveCropEnabled;
@property (nonatomic) struct CGSize { double width; double height; } normalizedNonDestructiveCropSize;
@property (nonatomic) BOOL geometricDistortionCorrectionEnabled;
@property (nonatomic) BOOL cinematicFramingEnabled;
@property (nonatomic, getter=isCinematicFramingSupported) BOOL cinematicFramingSupported;
@property (nonatomic) int cinematicFramingControlMode;
@property (nonatomic, getter=isBackgroundBlurSupported) BOOL backgroundBlurSupported;
@property (nonatomic) BOOL backgroundBlurEnabled;
@property (nonatomic, getter=isStudioLightingSupported) BOOL studioLightingSupported;
@property (nonatomic) BOOL studioLightingEnabled;
@property (nonatomic) BOOL reactionEffectsSupported;
@property (nonatomic) BOOL reactionEffectsEnabled;
@property (nonatomic) int faceDrivenAEAFMode;
@property (nonatomic) BOOL faceDrivenAEAFEnabledByDefault;
@property (nonatomic) BOOL deskCamEnabled;
@property (nonatomic) struct { int width; int height; } deskCamOutputDimensions;
@property (nonatomic) BOOL manualCinematicFramingEnabled;
@property (nonatomic) float manualFramingPanningAngleX;
@property (nonatomic) float manualFramingPanningAngleY;
@property (nonatomic) double manualFramingDefaultZoomFactor;
@property (nonatomic) BOOL gazeSelectionEnabled;
@property (nonatomic, getter=isDockedTrackingEnabled) BOOL dockedTrackingEnabled;
@property (nonatomic) BOOL clientOSVersionSupportsDecoupledIO;
@property (retain, nonatomic) NSString *clientAudioClockDeviceUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringForSourceType:(int)a0;
+ (id)stringForSourcePosition:(int)a0;
+ (id)stringForSourceDeviceType:(int)a0;
+ (int)sourceTypeForString:(id)a0;

- (id)initWithSource:(struct OpaqueFigCaptureSource { } *)a0;
- (void)dealloc;
- (id)initWithSourceType:(int)a0;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
