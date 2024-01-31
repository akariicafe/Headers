@class PGPetWallpaperSuggesterFilteringContext, NSString;

@interface PGTopPetWallpaperSuggester : PGPetWallpaperSuggester <PGPetWallpaperSuggesterProtocol>

@property (retain, nonatomic) PGPetWallpaperSuggesterFilteringContext *primaryFilteringContext;
@property (retain, nonatomic) PGPetWallpaperSuggesterFilteringContext *secondaryFilteringContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)filtersForTopSuggestions;
+ (id)suggestionSubtypes;

- (void)setupFilteringContexts;

@end
