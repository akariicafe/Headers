@class PGSettlingEffectWallpaperSuggesterFilteringContext, NSString, PGSettlingEffectWallpaperSuggesterLogger, PGWallpaperSuggestionAssetGater;

@interface PGSettlingEffectWallpaperSuggester : PGAbstractSuggester {
    PGWallpaperSuggestionAssetGater *_assetGater;
    struct { int numberOfLivePhotos; int numberOfLivePhotosWithZeroSettlingEffectScore; int numberOfLivePhotosWithNegativeSettlingEffectScore; int numberOfLivePhotosWithMinMADSettlingEffectScoreGating; int numberOfWallpaperSuggestions; int numberOfWallpaperSuggestionsWithoutSettlingEffect; int numberOfLivePhotoWallpaperSuggestions; struct { int numberOfEliminationsThruSettlingEffectScore; int numberOfSettlingEffectScoresRequested; } postfilteringStatistics; struct { int numberOfEliminationsThruFeatureDisabled; int numberOfEliminationsThruHardwareUnsupported; int numberOfEliminationsThruResourceAvailability; int numberOfEliminationsThruUnsupportedAdjustments; int numberOfEliminationsThruGenericError; int numberOfEliminationsThruMetadataCheck; int numberOfEliminationsThruStabilization; int numberOfEliminationsThruVideoQuality; int numberOfEliminationsThruMetadataIntegrity; int numberOfEliminationsThruFRC; int numberOfEliminationsThruVideoDecision; int numberOfEliminationsThruLayoutDecision; int numberOfEliminationsThruStillTransition; } frcGatingStatistics; struct { int numberOfHighlightSummaryAssets; int numberOfEliminationsThruSettlingEffectScore; int numberOfSettlingEffectScoresRequested; } highlightStatistics; int numberOfFRCEligibleWallpaperCandidates; int numberOfFRCEligibleAssetCandidates; } _filteringStatistics;
    NSString *_loggingPrefix;
    BOOL _noLimit;
    PGSettlingEffectWallpaperSuggesterLogger *_logger;
}

@property (retain, nonatomic) PGSettlingEffectWallpaperSuggesterFilteringContext *filteringContext;

+ (id)suggestionTypes;
+ (id)analyticsPayloadFromFRCFilteringStatistics:(struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; struct { int x0; int x1; } x7; struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; } x8; struct { int x0; int x1; int x2; } x9; int x10; int x11; })a0;
+ (id)analyticsPayloadFromPostFilteringStatistics:(struct { int x0; int x1; })a0;
+ (BOOL)candidate:(id)a0 passesFilteringWithContext:(id)a1 curationContext:(id)a2 statistics:(struct { int x0; int x1; } *)a3;
+ (BOOL)passesFilteringWithAsset:(id)a0 curationContext:(id)a1 orientation:(long long)a2 reason:(id *)a3;
+ (id)prefilteringInternalPredicateWithForbiddenAssetUUIDs:(id)a0;
+ (id)settlingEffectSuggestionAnalyticsPayloadFromPhotoLibrary:(id)a0;
+ (id)suggestionSubtypes;

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)checkAvailableResourcesWithProgressReporter:(id)a0;
- (id)consolidatedCandidatesFromWallpaperCandidates:(id)a0 highlightCandidates:(id)a1;
- (void)deleteLegacySettlingEffectSuggestions;
- (id)fetchCandidateSuggestions;
- (id)fetchSortedWallpaperCandidatesWithProgressReporter:(id)a0;
- (BOOL)hasEnoughSettlingEffectAssets;
- (void)processFRCFromCandidates:(id)a0 withProgressReporter:(id)a1;
- (void)sendSettlingEffectStatisticsEvent;
- (void)setAvailableFeaturesForCandidates:(id)a0 pass:(BOOL)a1;
- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;

@end
