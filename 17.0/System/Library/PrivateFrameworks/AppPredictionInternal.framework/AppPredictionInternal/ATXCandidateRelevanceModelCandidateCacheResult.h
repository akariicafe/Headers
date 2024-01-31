@class NSArray, ATXCandidateRelevanceModelFeaturizationManager;

@interface ATXCandidateRelevanceModelCandidateCacheResult : NSObject

@property (readonly, nonatomic) NSArray *candidates;
@property (readonly, nonatomic) ATXCandidateRelevanceModelFeaturizationManager *featurizationManager;

- (void).cxx_destruct;
- (id)initWithCandidates:(id)a0 featurizationManager:(id)a1;

@end
