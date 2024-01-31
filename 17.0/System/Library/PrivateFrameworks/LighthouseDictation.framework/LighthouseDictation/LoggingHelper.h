@class NSString, NSUUID;

@interface LoggingHelper : NSObject {
    NSUUID *_dodmlId;
    NSString *_experimentName;
    NSString *_trialExperimentId;
    NSUUID *_trialTreatmentId;
    long long _trialDeploymentId;
}

@property (retain, nonatomic) NSString *datapackVersion;

- (void).cxx_destruct;
- (id)_alignmentInfosFromAlignmentDict:(id)a0;
- (id)_audioFileResultsFromResultDict:(id)a0 privateAudioFileResultsOut:(id *)a1;
- (id)_transcriptMetadataFromPopDict:(id)a0;
- (id)_choiceInfosFromChoiceInfoDicts:(id)a0 privateTokens:(id)a1;
- (id)_decodingMetricsFromMetricsDict:(id)a0;
- (id)_decodingResultsWithAudioDict:(id)a0 privateTokensOut:(id *)a1;
- (id)_lmMetricsFromEvalDict:(id)a0 perplexityName:(id)a1 timesDict:(id)a2;
- (id)_plmMetricsFromPlmDict:(id)a0;
- (id)_resultInfosFromResultInfoDict:(id)a0 privateTokens:(id)a1;
- (id)_tokensFromTokenDict:(id)a0 privateTokens:(id)a1;
- (id)_tokensFromTokensArray:(id)a0 privateTokens:(id)a1;
- (id)_utteranceInfosFromUtteranceInfoDict:(id)a0 privateTokens:(id)a1;
- (void)_wrapAndEmitTopLevelEvent:(id)a0;
- (id)initWithExperimentName:(id)a0;
- (id)initWithExperimentName:(id)a0 trialExperimentId:(id)a1 trialTreatmentId:(id)a2 trialDeploymentId:(long long)a3;
- (void)logDictationPersonalizationExperimentEndedAndTier1WithResultsDict:(id)a0;
- (void)logDictationPersonalizationExperimentStartedOrChanged;
- (void)logUserEditExperimentEndedAndTier1WithResultsDict:(id)a0;
- (void)logUserEditExperimentStartedOrChanged;

@end
