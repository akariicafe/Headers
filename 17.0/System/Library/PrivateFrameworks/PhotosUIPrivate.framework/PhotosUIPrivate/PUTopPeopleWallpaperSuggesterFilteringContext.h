@interface PUTopPeopleWallpaperSuggesterFilteringContext : NSObject

@property (nonatomic) double normalizedDeviationForVeryImportantPersons;
@property (nonatomic) double normalizedDeviationForImportantPersons;
@property (nonatomic) BOOL favoritePersonsAreVIPs;
@property (nonatomic) unsigned long long minimumNumberOfCandidatesForEligiblePerson;
@property (nonatomic) double timeIntervalForCandidateDeduping;
@property (nonatomic) BOOL requiresSmile;
@property (nonatomic) BOOL requiresNoBlink;
@property (nonatomic) double minimumFaceQuality;
@property (nonatomic) double minimumFaceSize;
@property (nonatomic) double maximumFaceSize;
@property (nonatomic) double maximumFaceRoll;
@property (nonatomic) double minimumWallpaperScore;
@property (nonatomic) double minimumCropScore;
@property (nonatomic) BOOL requiresOutdoor;

- (id)init;
- (id)dictionaryRepresentation;

@end
