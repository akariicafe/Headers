@class NSString, PGPeopleWallpaperSuggesterFilteringContext;

@interface PGAmbientPeopleWallpaperSuggester : PGPeopleWallpaperSuggester <PGPeopleWallpaperSuggesterProtocol>

@property (retain, nonatomic) PGPeopleWallpaperSuggesterFilteringContext *primaryFilteringContext;
@property (retain, nonatomic) PGPeopleWallpaperSuggesterFilteringContext *secondaryFilteringContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suggestionTypes;
+ (id)suggestionSubtypes;

- (void)setupFilteringContexts;

@end
