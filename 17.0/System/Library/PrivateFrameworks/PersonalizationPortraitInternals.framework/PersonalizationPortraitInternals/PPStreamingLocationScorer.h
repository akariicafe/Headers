@class PPScoreInterpreter, PPScoreDict;

@interface PPStreamingLocationScorer : NSObject {
    PPScoreInterpreter *_aggregationScorer;
    PPScoreInterpreter *_finalScorer;
    PPScoreDict *_aggregationScoreInputs;
    PPScoreDict *_currentAggResult;
}

- (void).cxx_destruct;

@end
