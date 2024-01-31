@interface ARFaceTrackingConfiguration : ARConfiguration

@property (class, readonly, nonatomic) long long supportedNumberOfTrackedFaces;
@property (class, readonly, nonatomic) BOOL supportsWorldTracking;

@property (nonatomic) BOOL lowPower;
@property (nonatomic) long long maximumNumberOfTrackedFaces;
@property (nonatomic, getter=isWorldTrackingEnabled) BOOL worldTrackingEnabled;

+ (id)supportedVideoFormats;
+ (id)new;
+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;
+ (BOOL)isSupported;
+ (id)_querySupportedVideoFormats;
+ (id)_querySupportedVideoFormatsForWorldTracking;
+ (id)fallbackVideoFormat;
+ (id)fallbackVideoFormatWithCaptureDeviceType:(id)a0;
+ (id)supportedVideoFormatsForWorldTracking;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLightEstimationEnabled:(BOOL)a0;
- (void)setCameraPosition:(long long)a0;
- (void)createTechniques:(id)a0;
- (id)imageSensorSettings;
- (id)imageSensorSettingsForLowPower;
- (id)imageSensorSettingsForWorldTracking;
- (id)parentImageSensorSettings;
- (id)secondaryTechniques;

@end
