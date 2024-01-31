@class PPScoreDict, PPScoreInterpreter;

@interface PPStreamingNamedEntityScorer : NSObject {
    PPScoreInterpreter *_aggregationScorer;
    PPScoreInterpreter *_finalScorer;
    PPScoreDict *_aggregationScoreInputs;
}

@property (retain, nonatomic) PPScoreDict *currentAggResult;

+ (id)scoreInterpreterAggregationBytecode;
+ (id)scoreInterpreterFinalBytecode;
+ (unsigned long long)sourceStatsNeededForBytecode:(id)a0;

- (void)addRecord:(id)a0;
- (void)startNewClusterWithDecayedFeedbackCounts:(id)a0 mostRelevantRecord:(id)a1 dominantEntityName:(id)a2;
- (void).cxx_destruct;
- (float)getFinalScoreWithAggregationResultOut:(id *)a0 finalResultOut:(id *)a1;
- (id)initWithScoringDate:(id)a0 perRecordDecayRate:(double)a1 sourceStats:(id)a2;
- (float)getFinalScore;

@end
