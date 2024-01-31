@class NSNumber, NSURL, NSString;
@protocol ARReplayConfigurationDelegate, ARReplaySensorProtocol;

@interface ARReplayConfiguration : ARCustomTechniquesConfiguration <ARReplaySensorDelegate> {
    id<ARReplaySensorProtocol> _replaySensor;
}

@property (readonly, nonatomic) NSNumber *vioSessionID;
@property (readonly, nonatomic) NSURL *fileURL;
@property (weak, nonatomic) id<ARReplayConfigurationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;

- (id)initPrivate;
- (void)play;
- (void)pause;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)worldAlignment;
- (id)imageSensorSettingsForUltraWide;
- (void)ensureTechniqueAndCustomSensorCompatibility;
- (id)imageSensorSettings;
- (id)initWithBaseConfiguration:(id)a0 fileURL:(id)a1 outError:(id *)a2;
- (id)initWithBaseConfiguration:(id)a0 fileURL:(id)a1 replayMode:(long long)a2 outError:(id *)a3;
- (id)initWithBaseConfiguration:(id)a0 replaySensor:(id)a1;
- (id)initWithBaseConfiguration:(id)a0 replaySensor:(id)a1 replayingResultDataClasses:(id)a2;
- (id)parentImageSensorSettings;
- (void)replaySensorDidFinishReplayingData;
- (id)secondaryTechniques;
- (void)setAlwaysUsePrimaryCameraForHiResOrX420VideoFormat;

@end
