@interface KVSpanMatchPolicy : NSObject {
    unsigned int _options;
}

- (id)init;
- (id)description;
- (id)initWithOptions:(unsigned int)a0;
- (BOOL)allowAliasMatch;
- (float)absoluteThreshold;
- (BOOL)allowApproxMatch;
- (BOOL)allowPartialMatch;
- (BOOL)enableRankingWithPriors;
- (float)globalRelativeThreshold;
- (float)matchScoreWeight;
- (float)priorScoreWeight;
- (BOOL)prioritizeExactMatch;
- (float)regionalRelativeThreshold;
- (BOOL)useTopFive;

@end
