@class NSObject;
@protocol OS_dispatch_queue;

@interface CSPowerLogger : NSObject

@property (nonatomic) unsigned long long selfTriggerSuppressionPlaybackRoute;
@property (nonatomic) unsigned long long selfTriggerSuppressionAudioSource;
@property (nonatomic) double selfTriggerSuppressionStartTime;
@property (nonatomic) unsigned long long numSelfTriggersInInterval;
@property (nonatomic) BOOL selfTriggerSuppressionIsPhoneCallConnected;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedPowerLogger;

- (id)init;
- (void)powerWithNumFalseWakeup:(unsigned long long)a0 withDuration:(double)a1 withPhraseDict:(id)a2;
- (void)powerLogVoiceTriggerStop;
- (void)_borealisPowerlog:(id)a0;
- (void)_configPowerlog:(id)a0;
- (void)powerLogSelfTriggerSuppressionDetectedWithSpeakerType:(unsigned long long)a0 withAudioSource:(unsigned long long)a1 atTime:(double)a2 isPhoneCall:(BOOL)a3;
- (void)powerLogSiriConfigWithVoiceTriggerEnabled:(BOOL)a0 withLanguage:(id)a1 withModelVersion:(id)a2;
- (void)powerLogSecondPassWithResult:(unsigned long long)a0 withSecondPassScore:(float)a1 withPhId:(unsigned long long)a2;
- (void)powerLogVoiceTriggerStart;
- (void).cxx_destruct;
- (void)powerLogSelfTriggerSuppressionStartWithSpeakerType:(unsigned long long)a0 withAudioSource:(unsigned long long)a1 atTime:(double)a2 isPhoneCall:(BOOL)a3;
- (void)_emitSelfTriggerSuppressionToBiomeWithStsDuration:(double)a0;
- (void)powerLogSelfTriggerSuppressionStopAtTime:(double)a0;
- (void)_updateConfigToPreferencesWithLanguage:(id)a0 withModelVersion:(id)a1;

@end
