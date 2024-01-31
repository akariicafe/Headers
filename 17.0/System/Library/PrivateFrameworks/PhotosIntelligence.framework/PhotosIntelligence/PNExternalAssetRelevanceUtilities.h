@interface PNExternalAssetRelevanceUtilities : NSObject

+ (id)internalPredicateToIncludeExternalAssetsEligibleForProcessing;
+ (long long)externalAssetEligibilityForAsset:(id)a0;
+ (id)internalPredicateToIncludeExternalAssetsNeedingProcessing;
+ (id)internalPredicateToIncludeProcessedExternalAssets;

@end
