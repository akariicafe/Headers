@class PGPeopleWallpaperSuggesterFilteringContext, NSString, NSDictionary, PGSinglePersonWallpaperAssetSuggesterDistancingContext, PGWallpaperSuggestionAssetGater, PGSinglePersonWallpaperAssetSuggesterScoringContext;

@interface PGPeopleWallpaperSuggester : PGAbstractSuggester <PGPeopleWallpaperSuggesterProtocol> {
    NSDictionary *_suggesterByPersonLocalIdentifier;
    PGSinglePersonWallpaperAssetSuggesterScoringContext *_scoringContext;
    PGSinglePersonWallpaperAssetSuggesterDistancingContext *_distancingContext;
    PGWallpaperSuggestionAssetGater *_assetGater;
}

@property (retain, nonatomic) PGPeopleWallpaperSuggesterFilteringContext *primaryFilteringContext;
@property (retain, nonatomic) PGPeopleWallpaperSuggesterFilteringContext *secondaryFilteringContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suggestionTypes;
+ (BOOL)enableSettlingEffect;
+ (BOOL)filtersForTopSuggestions;
+ (BOOL)passesFilteringWithAsset:(id)a0 curationContext:(id)a1 orientation:(long long)a2 reason:(id *)a3;
+ (id)suggestionSubtypes;

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)_buildSuggestersWithProgress:(id /* block */)a0;
- (id)personLocalIdentifiersByOriginalPersonLocalIdentifierWithProgress:(id /* block */)a0;
- (void)setupFilteringContexts;
- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;

@end
