@class NSString, PGPeopleWallpaperSuggesterFilteringContext;

@interface PGMeWallpaperSuggester : PGTopPeopleWallpaperSuggester <PGPeopleWallpaperSuggesterProtocol>

@property (retain, nonatomic) PGPeopleWallpaperSuggesterFilteringContext *primaryFilteringContext;
@property (retain, nonatomic) PGPeopleWallpaperSuggesterFilteringContext *secondaryFilteringContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableSettlingEffect;
+ (id)suggestionSubtypes;

- (id)personLocalIdentifiersByOriginalPersonLocalIdentifierWithProgress:(id /* block */)a0;

@end
