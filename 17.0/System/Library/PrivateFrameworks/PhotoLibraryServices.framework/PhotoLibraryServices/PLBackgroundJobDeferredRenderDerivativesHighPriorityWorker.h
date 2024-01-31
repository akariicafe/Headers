@interface PLBackgroundJobDeferredRenderDerivativesHighPriorityWorker : PLBackgroundJobDeferredRenderDerivativesBaseWorker

+ (id)_criteriaToUse;

- (id)taskIdentifier;
- (id)deferredProcessingStatesHandled;
- (id)_predicateToFetchDeferredAssets;

@end
