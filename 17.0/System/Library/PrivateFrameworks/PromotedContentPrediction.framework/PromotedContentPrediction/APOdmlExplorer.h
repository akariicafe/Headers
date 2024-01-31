@class NSNumber, NSMutableArray, NSString;

@interface APOdmlExplorer : NSObject

@property (retain, nonatomic) NSMutableArray *sortableObjects;
@property (readonly, nonatomic) NSNumber *epsilon;
@property (readonly, nonatomic) NSString *mode;
@property (readonly, nonatomic) NSString *noise_type;
@property (readonly, nonatomic) NSNumber *clipping_bound;

- (void).cxx_destruct;
- (id)explore;
- (id)cumulativeEpsilonGreedyProbabilityDistribution;
- (id)epsilonGreedyProbabilityDistribution;
- (id)greedy;
- (id)initWithRankableObjects:(id)a0 pttrArray:(id)a1 assetManager:(id)a2;
- (id)randomizedResponse;
- (id)rankableObjectsFromSortable;
- (id)sortableArray:(id)a0 pttrArray:(id)a1;

@end
