@class NSPredicate;

@interface PNAssetCurationUtilities : NSObject

@property (class, readonly) NSPredicate *internalPredicateToFilterAssetsEligibleForSyndication;
@property (class, readonly) NSPredicate *internalPredicateToFilterSyndicatedAssetsEligibleForQuestion;
@property (class, readonly) NSPredicate *internalPredicateToFilterGuestSyndicatedAssetsEligibleForQuestion;
@property (class, readonly) NSPredicate *internalPredicateToFilterSyndicatedAssetsEligibleForCurationProcessing;
@property (class, readonly) NSPredicate *internalPredicateToFilterSyndicatedAssetsEligibleForGuestInferenceProcessing;
@property (class, readonly) NSPredicate *internalPredicateToIncludeOnlyReceivedSyndicatedAssets;

+ (BOOL)assetIsSafeForWidgetDisplay:(id)a0;
+ (id)internalPredicateToIncludeOnlySentSyndicatedAssets;
+ (id)internalPredicateToIncludeReceivedNotAnalyzedSyndicatedAssets;
+ (id)internalPredicateToIncludeReceivedNotEligibleSyndicatedAssets;
+ (double)assetIconicScoreForSceneClassifications:(id)a0 assetLatitude:(double)a1 assetLongitude:(double)a2 sceneGeography:(id)a3 sceneTaxonomy:(id)a4;
+ (BOOL)assetIsSafeForDisplay:(id)a0 modelSet:(id)a1;
+ (BOOL)_assetIsSafeForWidgetDisplay:(id)a0 sceneClassifications:(id)a1 modelSet:(id)a2;
+ (id)_internalPredicateToFilterSyndicatedAssetsEligibleWithCurationScore:(double)a0;
+ (BOOL)_isSupportedTabooEventIdentifier:(unsigned int)a0;
+ (double)absolutePopularityOfPOI:(double)a0 assetLongitude:(double)a1 sceneGeography:(id)a2;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)a0 POIGeoHash:(id)a1 sceneGeography:(id)a2;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)a0 POIGeoHash:(id)a1 sceneGeography:(id)a2 maxScenesCount:(long long)a3;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)a0 POIGeoHash:(id)a1 sceneGeography:(id)a2 maxScenesCount:(long long)a3 popularityWeight:(double)a4;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)a0 assetLatitude:(double)a1 assetLongitude:(double)a2;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)a0 assetLatitude:(double)a1 assetLongitude:(double)a2 sceneGeography:(id)a3;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)a0 assetLatitude:(double)a1 assetLongitude:(double)a2 sceneGeography:(id)a3 maxScenesCount:(long long)a4;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)a0 assetLatitude:(double)a1 assetLongitude:(double)a2 sceneGeography:(id)a3 maxScenesCount:(long long)a4 popularityWeight:(double)a5;
+ (BOOL)assetIsSafeForWidgetDisplay:(id)a0 sceneClassifications:(id)a1;
+ (id)assetsShowcasingFoodWithoutFacesInAssets:(id)a0;
+ (id)predicateForSourcingAssetsFromHighlightExtendedCuration;
+ (id)predicateForSourcingAssetsFromHighlightSummaryCuration;
+ (double)relativePopularityOfPOI:(double)a0 assetLongitude:(double)a1 sceneGeography:(id)a2;
+ (id)safeAssetsForWidgetDisplay:(id)a0;
+ (id)sceneIdentifiersByScoreForPOI:(double)a0 assetLongitude:(double)a1 sceneGeography:(id)a2;
+ (id)syndicationEligibilityForAssets:(id)a0;

@end
