@class ARWorldMap;

@interface ARPositionalTrackingConfiguration : ARConfiguration

@property (nonatomic, getter=isRelocalizationEnabled) BOOL relocalizationEnabled;
@property (nonatomic, getter=isVIOFusionEnabled) BOOL vioFusionEnabled;
@property (nonatomic) unsigned long long planeDetection;
@property (retain, nonatomic) ARWorldMap *initialWorldMap;

+ (id)supportedVideoFormats;
+ (id)new;
+ (BOOL)isSupported;
+ (id)_querySupportedVideoFormats;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)createTechniques:(id)a0;
- (id)imageSensorSettings;
- (id)worldTrackingOptions;

@end
