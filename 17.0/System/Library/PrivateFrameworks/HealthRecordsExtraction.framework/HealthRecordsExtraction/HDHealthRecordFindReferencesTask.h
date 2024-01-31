@class HDHealthRecordRuleset;

@interface HDHealthRecordFindReferencesTask : NSObject {
    HDHealthRecordRuleset *_ruleset;
}

- (id)init;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)_canProcessResource:(id)a0;
- (id)_filterResources:(id)a0;
- (BOOL)_isIrretrievableReference:(id)a0 serverBaseURL:(id)a1;
- (id)_processedContainReferencesResourceWithResource:(id)a0 processingContext:(id)a1 rule:(id)a2 allResources:(id)a3;
- (id)_processedRetrieveReferencesResourceWithResource:(id)a0 processingContext:(id)a1 rule:(id)a2 allResources:(id)a3;
- (id)_resourceForReference:(id)a0 containedInResource:(id)a1 error:(id *)a2;
- (BOOL)_resourceReference:(id)a0 containedInResource:(id)a1;
- (id)_resourceReference:(id)a0 presentInResources:(id)a1;
- (id)initWithRuleset:(id)a0;
- (BOOL)processContainedResourcesInProcessingContext:(id)a0 error:(id *)a1;
- (id)processResourcesForReferenceExtractionRequest:(id)a0 error:(id *)a1;

@end
