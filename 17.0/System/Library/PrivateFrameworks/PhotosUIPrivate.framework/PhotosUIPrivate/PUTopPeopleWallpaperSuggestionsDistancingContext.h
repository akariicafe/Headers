@interface PUTopPeopleWallpaperSuggestionsDistancingContext : NSObject

@property (nonatomic) double timePivot;
@property (nonatomic) double locationPivot;
@property (nonatomic) double peoplePivot;
@property (nonatomic) double sceneprintPivot;
@property (nonatomic) double timeFactor;
@property (nonatomic) double locationFactor;
@property (nonatomic) double peopleFactor;
@property (nonatomic) double sceneprintFactor;
@property (nonatomic) unsigned long long maximumNumberOfSuggestionsWithPeople;
@property (nonatomic) unsigned long long maximumNumberOfSuggestionsWithoutPeople;

- (id)init;
- (id)dictionaryRepresentation;

@end
