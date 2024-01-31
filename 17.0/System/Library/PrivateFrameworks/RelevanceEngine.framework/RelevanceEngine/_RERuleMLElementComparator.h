@class NSArray;

@interface _RERuleMLElementComparator : REMLElementComparator {
    NSArray *_filteringRules;
    NSArray *_rankingRules;
    NSArray *_filteringEvaluators;
    NSArray *_leftRankingEvaluators;
    NSArray *_rightRankingEvaluators;
    NSArray *_comparisonRankingEvaluators;
}

+ (id)comparatorWithFilteringRules:(id)a0 rankingRules:(id)a1 model:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compareElement:(id)a0 toElement:(id)a1 level:(unsigned long long)a2;
- (float)_relevanceForElement:(id)a0;
- (unsigned long long)comparisonLevels;
- (id)initWithFilteringRules:(id)a0 rankingRules:(id)a1 model:(id)a2;
- (BOOL)shouldHideElement:(id)a0;

@end
