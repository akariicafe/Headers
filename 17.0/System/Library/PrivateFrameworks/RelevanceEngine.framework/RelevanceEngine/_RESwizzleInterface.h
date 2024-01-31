@interface _RESwizzleInterface : NSObject

+ (id)_configuredObjects;

- (void)_re_swizzled_gatherDiagnosticLogsForRelevanceEngine:(id)a0 completion:(id /* block */)a1;
- (void)_re_runAfterEngineIsLoaded:(id /* block */)a0;
- (void)_re_swizzled_availableRelevanceEngines:(id /* block */)a0;
- (void)_re_swizzled_fetchAllElementIdentifiersInRelevanceEngine:(id)a0 completion:(id /* block */)a1;
- (void)_re_swizzled_fetchAllElementsInRelevanceEngine:(id)a0 completion:(id /* block */)a1;
- (void)_re_swizzled_relevanceEngine:(id)a0 createElementFromDescription:(id)a1 completion:(id /* block */)a2;
- (void)_re_swizzled_relevanceEngine:(id)a0 encodedObjectAtPath:(id)a1 completion:(id /* block */)a2;
- (void)_re_swizzled_relevanceEngine:(id)a0 performCommand:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)_re_swizzled_relevanceEngine:(id)a0 runActionOfElementWithDescription1:(id)a1 completion:(id /* block */)a2;

@end
