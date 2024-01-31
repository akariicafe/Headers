@class NSArray, SGMITokenCounts;

@interface SGMINaiveBayesModelQueryResult : NSObject

@property (readonly) SGMITokenCounts *mailCount;
@property (readonly) SGMITokenCounts *unigramTokenCounts;
@property (readonly) SGMITokenCounts *bigramTokenCounts;
@property (readonly) NSArray *unigramQueriedTokensCount;
@property (readonly) NSArray *bigramQueriedTokensCount;
@property (readonly) double oldestTokenAge;

- (void).cxx_destruct;
- (id)inferProbability;
- (id)initWithMailCount:(id)a0 unigramTokenCounts:(id)a1 bigramTokenCounts:(id)a2 unigramQueriedTokensCount:(id)a3 bigramQueriedTokensCount:(id)a4 oldestTokenAge:(double)a5;

@end
