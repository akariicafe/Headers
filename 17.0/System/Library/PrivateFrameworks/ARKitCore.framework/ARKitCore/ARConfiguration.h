@class ARImageSensorSettings, NSArray, ARVideoFormat, NSString, ARParentImageSensorSettings, AVCaptureDevice;
@protocol ARReplaySensorProtocol;

@interface ARConfiguration : NSObject <NSCopying> {
    long long _jasperFrameRate;
}

@property (class, nonatomic) BOOL shouldProvideX420VideoFormat;
@property (class, nonatomic) BOOL shouldProvideNonBinnedVideoFormats;
@property (class, readonly, nonatomic) BOOL supportsTimeOfFlightProjectorMode;
@property (class, nonatomic) BOOL shouldUse30FPSJasperFormats;
@property (class, readonly, nonatomic) BOOL isSupported;
@property (class, readonly, nonatomic) NSArray *supportedVideoFormats;
@property (class, readonly, nonatomic) AVCaptureDevice *configurableCaptureDeviceForPrimaryCamera;
@property (class, readonly, nonatomic) ARVideoFormat *recommendedVideoFormatFor4KResolution;
@property (class, readonly, nonatomic) ARVideoFormat *recommendedVideoFormatForHighResolutionFrameCapturing;

@property (nonatomic) BOOL smartPersonOcclusionEnabled;
@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled;
@property (nonatomic) BOOL focusPixelBlurScoreDeliveryEnabled;
@property (readonly, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) ARParentImageSensorSettings *parentImageSensorSettings;
@property (readonly, nonatomic) ARImageSensorSettings *imageSensorSettings;
@property (retain, nonatomic) NSArray *customSensors;
@property (nonatomic) unsigned long long lightEstimation;
@property (nonatomic) unsigned long long frameDebugOptions;
@property (nonatomic, getter=isPersonMetadataEnabled) BOOL personMetadataEnabled;
@property (nonatomic) long long jasperFrameRate;
@property (nonatomic) long long cameraPosition;
@property (nonatomic) BOOL allowCameraInMultipleForegroundAppLayout;
@property (nonatomic) BOOL disableOcclusionForPersonSegmentation;
@property (nonatomic) BOOL disableMLRelocalization;
@property (readonly, nonatomic) id<ARReplaySensorProtocol> replaySensor;
@property (retain, nonatomic) NSString *timeOfFlightProjectorMode;
@property (nonatomic) long long depthSensorNumberOfPointsMode;
@property (nonatomic) long long maxUltrawideImageForwardingFrameRate;
@property (nonatomic) BOOL disableRenderSyncScheduling;
@property (retain, nonatomic) ARVideoFormat *videoFormat;
@property (nonatomic) long long worldAlignment;
@property (nonatomic, getter=isLightEstimationEnabled) BOOL lightEstimationEnabled;
@property (nonatomic) BOOL providesAudioData;
@property (nonatomic) unsigned long long frameSemantics;
@property (nonatomic) BOOL videoHDRAllowed;

+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;
+ (id)_querySupportedVideoFormatsForJasper:(long long)a0;
+ (id)_supportedVideoFormatsForJasper:(long long)a0;

- (id)initPrivate;
- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)_depthPrioritization;
- (BOOL)shouldUseJasper;
- (void)createTechniques:(id)a0;
- (id)depthSensorSettingsForJasper;
- (id)descriptionWithoutBrackets;
- (id)getAsKindOfConfiguration:(Class)a0;
- (BOOL)isKindOfConfiguration:(Class)a0;
- (id)secondaryTechniques;
- (id)techniques;

@end
