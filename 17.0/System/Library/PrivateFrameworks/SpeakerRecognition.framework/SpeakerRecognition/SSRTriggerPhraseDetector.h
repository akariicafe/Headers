@class SSRTriggerPhraseDetectorNDAPI, SSRTriggerPhraseDetectorQuasar;

@interface SSRTriggerPhraseDetector : NSObject

@property (retain, nonatomic) SSRTriggerPhraseDetectorNDAPI *detectorNDAPI;
@property (retain, nonatomic) SSRTriggerPhraseDetectorQuasar *detectorQuasar;
@property (nonatomic) float recognizerScoreScaleFactor;

+ (id)filterVTAudioFiles:(id)a0 withLocale:(id)a1 withAsset:(id)a2;

- (void).cxx_destruct;
- (void)computeTriggerConfidenceForAudio:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithLocale:(id)a0 asset:(id)a1;

@end
