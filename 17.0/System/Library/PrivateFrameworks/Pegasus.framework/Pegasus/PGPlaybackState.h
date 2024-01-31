@class NSString, NSMutableDictionary, NSDictionary, PGPlaybackStatePrerollAttributes;

@interface PGPlaybackState : NSObject <PGMutablePlaybackStateFaceTimeSupport, PGMutablePlaybackStateSecurityCameraSupport, PGPlaybackStateDiffConsumer, PGMutablePlaybackState, NSCopying> {
    PGPlaybackStatePrerollAttributes *_prerollAttributes;
}

@property (nonatomic) BOOL supportsFaceTimeActions;
@property (nonatomic, getter=isCameraActive) BOOL cameraActive;
@property (nonatomic) BOOL canSwitchCamera;
@property (nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted;
@property (nonatomic) BOOL disablesLayerCloning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL cameraHasMicrophone;
@property (nonatomic) BOOL disablesLayerCloning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMutableDictionary *mutableDictionary;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) BOOL supportsMicroPIP;
@property (readonly, nonatomic) long long contentType;
@property (readonly, nonatomic) double elapsedTime;
@property (readonly, nonatomic) double contentDuration;
@property (readonly, nonatomic) long long timeControlStatus;
@property (readonly, nonatomic) double playbackRate;
@property (readonly, nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic) BOOL requiresLinearPlayback;
@property (readonly, nonatomic) BOOL hasInvalidTiming;
@property (readonly, nonatomic, getter=isRoutingVideoToHostedWindow) BOOL routingVideoToHostedWindow;
@property (readonly, nonatomic) PGPlaybackStatePrerollAttributes *prerollAttributes;
@property (readonly, nonatomic) double normalizedProgress;
@property (readonly, nonatomic) long long backgroundAudioPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultValueForKey:(id)a0;
+ (id)keysForEqualityOfNumberValues;

- (void)setContentType:(long long)a0;
- (void)setMuted:(BOOL)a0;
- (id)succinctDescriptionBuilder;
- (void)setPrerollAttributes:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)setRoutingVideoToHostedWindow:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)_stringForKey:(long long)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (void)_setBool:(BOOL)a0 forKey:(long long)a1;
- (void)_setInteger:(long long)a0 forKey:(long long)a1;
- (void)setRequiresLinearPlayback:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_boolForKey:(long long)a0;
- (id)_dictionaryForKey:(long long)a0;
- (id)_numberForKey:(long long)a0;
- (void)setContentDuration:(double)a0;
- (void)setBackgroundAudioPolicy:(long long)a0;
- (void)setPlaybackRate:(double)a0 elapsedTime:(double)a1 timeControlStatus:(long long)a2;
- (long long)_integerForKey:(long long)a0;
- (double)_doubleForKey:(long long)a0;
- (void)_ensureMutableDictionary;
- (void)_setDictionaryOrNotFound:(id)a0 forKey:(long long)a1;
- (void)_setDouble:(double)a0 forKey:(long long)a1;
- (void)_setStateValue:(id)a0 forKey:(long long)a1;
- (double)anchorContentTime;
- (double)anchorWallTime;
- (void)appendDescriptionForKey:(long long)a0 value:(id)a1 toBuilder:(id)a2;
- (id)diffFromPlaybackState:(id)a0;
- (BOOL)isEquivalentToPlaybackState:(id)a0;
- (void)updatePlaybackStateWithDiff:(id)a0;

@end
