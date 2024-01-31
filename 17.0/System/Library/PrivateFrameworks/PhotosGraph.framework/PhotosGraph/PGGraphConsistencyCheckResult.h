@class NSDictionary;

@interface PGGraphConsistencyCheckResult : NSObject

@property (nonatomic) double overallSimilarityScore;
@property (retain, nonatomic) NSDictionary *similarityScoreByDomain;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
