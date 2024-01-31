@class NSString, PGLandscapeWallpaperSuggesterFilteringContext;

@interface PGAmbientNatureWallpaperSuggester : PGLandscapeWallpaperSuggester <PGLandscapeWallpaperSuggesterProtocol>

@property (retain, nonatomic) PGLandscapeWallpaperSuggesterFilteringContext *primaryFilteringContext;
@property (retain, nonatomic) PGLandscapeWallpaperSuggesterFilteringContext *secondaryFilteringContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suggestionTypes;
+ (BOOL)filtersForAmbientSuggestions;
+ (id)suggestionSubtypes;

- (void)setupFilteringContexts;

@end
