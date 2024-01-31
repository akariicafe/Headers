@interface PUTopPeopleWallpaperSuggestionsScoringContext : NSObject

@property (nonatomic) double favoriteFactor;
@property (nonatomic) double aestheticFactor;
@property (nonatomic) double peopleFactor;
@property (nonatomic) double interactionFactor;
@property (nonatomic) double meaningFactor;
@property (nonatomic) double atHomeOrWorkFactor;
@property (nonatomic) double wallpaperFactor;
@property (nonatomic) double croppingFactor;
@property (nonatomic) double maximumSizeAllowedForFaces;

- (id)init;
- (id)dictionaryRepresentation;

@end
