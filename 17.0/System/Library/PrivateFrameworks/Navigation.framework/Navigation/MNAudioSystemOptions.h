@interface MNAudioSystemOptions : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long drivingVoiceGuidanceLevel;
@property (readonly, nonatomic) unsigned long long walkingVoiceGuidanceLevel;
@property (readonly, nonatomic) unsigned long long cyclingVoiceGuidanceLevel;
@property (readonly, nonatomic) BOOL useHFP;
@property (readonly, nonatomic) BOOL pauseSpokenAudio;
@property (readonly, nonatomic) BOOL chimeBeforeInstruction;
@property (readonly, nonatomic) BOOL muteSpeechOverride;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDrivingVoiceGuidanceLevel:(unsigned long long)a0 andWalkingVoiceGuidanceLevel:(unsigned long long)a1 andCyclingVoiceGuidanceLevel:(unsigned long long)a2 andUseHFP:(BOOL)a3 andPauseSpokenAudio:(BOOL)a4 andChimeBeforeInstruction:(BOOL)a5 andMuteSpeechOverride:(BOOL)a6;

@end
