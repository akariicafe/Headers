@class NSString, PGCityscapeWallpaperSuggesterFilteringContext;

@interface PGAmbientCityWallpaperSuggester : PGCityscapeWallpaperSuggester <PGCityscapeWallpaperSuggesterProtocol>

@property (retain, nonatomic) PGCityscapeWallpaperSuggesterFilteringContext *primaryFilteringContext;
@property (retain, nonatomic) PGCityscapeWallpaperSuggesterFilteringContext *secondaryFilteringContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suggestionTypes;
+ (BOOL)filtersForAmbientSuggestions;
+ (id)suggestionSubtypes;

- (void)setupFilteringContexts;

@end
