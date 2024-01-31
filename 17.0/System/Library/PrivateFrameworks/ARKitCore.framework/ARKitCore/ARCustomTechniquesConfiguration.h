@class NSArray, ARConfiguration, ARWorldMap;

@interface ARCustomTechniquesConfiguration : ARConfiguration {
    BOOL _needsEnsureTechniqueAndCustomSensorCompatibility;
    BOOL _needsConfigureRecordingTechnique;
}

@property (class, readonly, nonatomic) NSArray *supportedVideoFormats;

@property (copy, nonatomic) NSArray *techniques;
@property (readonly, nonatomic) ARWorldMap *initialWorldMap;
@property (copy, nonatomic) ARConfiguration *templateConfiguration;

+ (id)new;

- (id)initPrivate;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setVideoFormat:(id)a0;
- (long long)worldAlignment;
- (void)setCameraPosition:(long long)a0;
- (id)imageSensorSettingsForUltraWide;
- (void)_configureRecordingTechniqueIfNeeded;
- (void)_ensureTechniqueAndCustomSensorCompatibilityIfNeeded;
- (void)_updateCaptureSettings;
- (void)configureRecordingTechnique;
- (void)ensureTechniqueAndCustomSensorCompatibility;
- (id)imageSensorSettings;
- (BOOL)isLightEstimationEnabled;
- (void)setCustomSensors:(id)a0;
- (void)setProvidesAudioData:(BOOL)a0;

@end
