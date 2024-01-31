@class PGMeaningfulEventProcessorCache, PGGraphMomentNode;

@interface PGMeaningfulEventMatchingCriteria : PGMeaningfulEventCriteria {
    PGMeaningfulEventProcessorCache *_cache;
}

@property (nonatomic) BOOL interestingForMeaningInference;
@property (readonly, nonatomic) PGGraphMomentNode *momentNode;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)_calculateMatchingScoreForLocationsWithMatchingTrait:(id)a0 requiredTrait:(id)a1 result:(id /* block */)a2;
- (void)_calculateMatchingScoreForPOIROIWithMatchingTrait:(id)a0 requiredTrait:(id)a1 result:(id /* block */)a2;
- (double)_calculateMatchingScoreForPartOfDayWithMatchingTrait:(id)a0 requiredTrait:(id)a1 requiresStrictMatching:(BOOL)a2;
- (void)_calculateMatchingScoreForScenesWithRequiredCriteria:(id)a0 result:(id /* block */)a1;
- (id)initWithMoment:(id)a0 cache:(id)a1;
- (id)matchingResultWithCriteria:(id)a0;
- (double)matchingScoreWithCriteria:(id)a0 failed:(BOOL *)a1 isReliable:(BOOL *)a2;

@end
