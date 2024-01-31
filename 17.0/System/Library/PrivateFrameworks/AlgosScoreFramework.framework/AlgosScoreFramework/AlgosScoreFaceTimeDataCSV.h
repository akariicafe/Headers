@class NSDictionary;

@interface AlgosScoreFaceTimeDataCSV : AlgosScoreDataCSV

@property (retain, nonatomic) NSDictionary *methods;

+ (id)facetimeDataCSV;

- (int)transformer;
- (id)init;
- (void).cxx_destruct;
- (BOOL)matchesMethod:(id)a0 code:(long long)a1;
- (id)setUpMethods;
- (BOOL)validMethod:(long long)a0;

@end
