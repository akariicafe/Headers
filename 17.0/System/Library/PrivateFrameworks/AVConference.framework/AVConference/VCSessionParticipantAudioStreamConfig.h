@class VCAudioRuleCollection;

@interface VCSessionParticipantAudioStreamConfig : VCAudioStreamConfig

@property (retain, nonatomic) VCAudioRuleCollection *audioRules;
@property (retain, nonatomic) VCAudioRuleCollection *audioRulesNegotiated;

- (void)dealloc;

@end
