@interface PGPeopleWallpaperSuggesterFilteringContext : PGSinglePersonWallpaperAssetSuggesterFilteringContext

@property (nonatomic) double normalizedDeviationForVeryImportantPersons;
@property (nonatomic) double normalizedDeviationForImportantPersons;
@property (nonatomic) BOOL favoritePersonsAreVIPs;
@property (nonatomic) long long minimumPersonImportance;
@property (nonatomic) unsigned long long minimumNumberOfCandidatesForEligiblePerson;

- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_commonInitForPeople;
- (id)initForAmbient;
- (id)initForPeopleInOrientation:(long long)a0;
- (id)initForTopPeople:(BOOL)a0 withDictionary:(id)a1 orientation:(long long)a2;
- (id)initForTopPeopleInOrientation:(long long)a0;
- (void)updateFilteringContextWithDictionary:(id)a0;

@end
