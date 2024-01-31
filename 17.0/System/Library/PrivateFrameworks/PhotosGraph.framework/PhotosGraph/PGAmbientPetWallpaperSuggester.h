@class PGPetWallpaperSuggesterFilteringContext, NSString;

@interface PGAmbientPetWallpaperSuggester : PGPetWallpaperSuggester <PGPetWallpaperSuggesterProtocol>

@property (retain, nonatomic) PGPetWallpaperSuggesterFilteringContext *primaryFilteringContext;
@property (retain, nonatomic) PGPetWallpaperSuggesterFilteringContext *secondaryFilteringContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suggestionTypes;
+ (id)suggestionSubtypes;

- (void)setupFilteringContexts;

@end
