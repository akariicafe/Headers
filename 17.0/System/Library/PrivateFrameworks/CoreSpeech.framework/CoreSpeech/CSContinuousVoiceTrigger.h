@class CSKeywordAnalyzerNDAPI, CSAsset, CSContinuousVoiceTriggerConfig, NSMutableDictionary, CSAudioTimeConverter, NSObject, CSAudioRecordContext;
@protocol OS_dispatch_queue, CSContinuousVoiceTriggerDelegate;

@interface CSContinuousVoiceTrigger : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzer;
@property (nonatomic) float keywordThreshold;
@property (nonatomic) long long mode;
@property (nonatomic) unsigned long long analyzedSampleCount;
@property (nonatomic) unsigned long long triggerEndSampleCount;
@property (nonatomic) unsigned long long twoShotDecisionWaitSamples;
@property (nonatomic) float twoShotThreshold;
@property (nonatomic) unsigned long long activeChannel;
@property (retain, nonatomic) CSAudioRecordContext *audioRecordContext;
@property (retain, nonatomic) CSContinuousVoiceTriggerConfig *cvtConfig;
@property (retain, nonatomic) NSMutableDictionary *lastVoiceTriggerScores;
@property (nonatomic) BOOL hasResetShotAnalyzerBestScore;
@property (nonatomic) unsigned long long heartbeatFactor;
@property (weak, nonatomic) id<CSContinuousVoiceTriggerDelegate> delegate;
@property (retain, nonatomic) CSAudioTimeConverter *audioTimeConverter;

- (void)_setAsset:(id)a0;
- (void)startDetectTwoShot:(id)a0;
- (id)init;
- (void)_keywordAnalyzerNDAPI:(id)a0 hasResultAvailable:(id)a1 forChannel:(unsigned long long)a2 lastVoiceTriggerScore:(float)a3 phId:(unsigned long long)a4;
- (void)_shotAnalyzerNDAPI:(id)a0 hasResultAvailable:(id)a1 forChannel:(unsigned long long)a2;
- (void)_reset;
- (void)start;
- (void)processAudioSamples:(id)a0;
- (void)resetWithAudioRecordContext:(id)a0;
- (void).cxx_destruct;
- (void)setAsset:(id)a0;

@end
