@class PLLibraryScopeRuleEvaluator, PLManagedAssetRuleInterpreter, PLLibraryScope;

@interface PLLibraryScopeRuleManager : NSObject

@property (retain, nonatomic) PLLibraryScope *libraryScope;
@property (retain, nonatomic) PLLibraryScopeRuleEvaluator *ruleEvaluator;
@property (retain, nonatomic) PLManagedAssetRuleInterpreter *interpreter;

- (void).cxx_destruct;
- (id)_fetchAssetObjectIDsContainedInMomentObjectIDs:(id)a0 excludingAssetObjectIDs:(id)a1 inManagedObjectContext:(id)a2 predicateToFetchAssetsToEvaluate:(id)a3;
- (id)_fetchAssetObjectIDsContainedInMomentsToPropagateForMomentIdByAssetId:(id)a0 inManagedObjectContext:(id)a1;
- (id)_personUUIDsUsedInRules;
- (id)_predicateToIncludeAssetsCapturedByCamera;
- (id)_predicateToIncludeAssetsSuggestedByCamera;
- (BOOL)_shouldTryToPropagateResultsToMomentWithInclusiveMatchedConditions:(id)a0;
- (BOOL)evaluateAssetObjectIDs:(id)a0 simulate:(BOOL)a1 predicateToFetchAssetsToEvaluate:(id)a2 withResultEnumerationBlock:(id /* block */)a3;
- (BOOL)evaluateAssetObjectIDs:(id)a0 simulate:(BOOL)a1 withResultEnumerationBlock:(id /* block */)a2;
- (BOOL)evaluateAssetObjectIDs:(id)a0 withResultEnumerationBlock:(id /* block */)a1;
- (BOOL)evaluateFaceObjectIDs:(id)a0 simulate:(BOOL)a1 withResultEnumerationBlock:(id /* block */)a2;
- (BOOL)evaluateFaceObjectIDs:(id)a0 withResultEnumerationBlock:(id /* block */)a1;
- (id)initWithLibraryScope:(id)a0;

@end
