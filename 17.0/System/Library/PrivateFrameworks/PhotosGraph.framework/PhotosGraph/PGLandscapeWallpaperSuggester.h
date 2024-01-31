@class PGLandscapeWallpaperSuggesterDistancingContext, PGLandscapeWallpaperSuggesterFilteringContext, NSString, CLSSceneConfidenceThresholdHelper, PGLandscapeWallpaperSuggesterScoringContext, PGWallpaperSuggestionAssetGater;

@interface PGLandscapeWallpaperSuggester : PGAbstractSuggester <PGLandscapeWallpaperSuggesterProtocol> {
    PGWallpaperSuggestionAssetGater *_assetGater;
    CLSSceneConfidenceThresholdHelper *_peopleSceneConfidenceThresholdHelper;
}

@property (retain, nonatomic) PGLandscapeWallpaperSuggesterScoringContext *scoringContext;
@property (retain, nonatomic) PGLandscapeWallpaperSuggesterDistancingContext *distancingContext;
@property (retain, nonatomic) PGLandscapeWallpaperSuggesterFilteringContext *primaryFilteringContext;
@property (retain, nonatomic) PGLandscapeWallpaperSuggesterFilteringContext *secondaryFilteringContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suggestionTypes;
+ (BOOL)candidate:(id)a0 passesFilteringWithContext:(id)a1 curationContext:(id)a2 thresholdHelper:(id)a3 statistics:(struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; struct { unsigned int x0; unsigned int x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; struct { unsigned int x0; } x14; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x15; } x11; } *)a4;
+ (id)candidatesFromAssets:(id)a0;
+ (BOOL)filtersForAmbientSuggestions;
+ (BOOL)filtersForTopSuggestions;
+ (BOOL)isPositiveLandscapeAsset:(id)a0;
+ (BOOL)passesFilteringWithAsset:(id)a0 curationContext:(id)a1 orientation:(long long)a2 reason:(id *)a3;
+ (id)prefilteringInternalPredicateWithForbiddenAssetUUIDs:(id)a0;
+ (id)suggestionSubtypes;

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (id)fetchCandidateAssets;
- (id)fetchUnsortedCandidatesWithProgressReporter:(id)a0;
- (void)logPosterFilteringStatistics:(struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; struct { unsigned int x0; unsigned int x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; struct { unsigned int x0; } x14; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x15; } x11; })a0;
- (void)setupFilteringContexts;
- (id)sortedDedupedCandidatesFromCandidates:(id)a0;
- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;

@end
