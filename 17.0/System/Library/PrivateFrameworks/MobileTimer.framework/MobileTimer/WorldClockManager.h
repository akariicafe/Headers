@class WorldClockPreferences, NSMutableArray, NSDate;

@interface WorldClockManager : NSObject {
    BOOL _dirty;
    WorldClockPreferences *_defaults;
}

@property (retain, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic) NSMutableArray *cities;

+ (id)sharedManager;

- (void)_notifyNano;
- (void)removeAllCities;
- (id)citiesMatchingName:(id)a0;
- (unsigned long long)addCity:(id)a0;
- (id)worldClockCityFromPersistenceDictionary:(id)a0;
- (id)closestCityToLocation:(id)a0 matchingTimeZone:(id)a1 requireTimeZoneEquivalence:(BOOL)a2;
- (id)updateALDataWithCity:(id)a0;
- (void)loadCities;
- (id)worldClockCityFromPersistenceRepresentation:(id)a0;
- (BOOL)checkIfCitiesModified;
- (id)closestCityToLocation:(id)a0 matchingTimeZone:(id)a1;
- (void)pushCityPropertiesToPreferences;
- (id)fixUpCityProperties:(id)a0;
- (id)initWithPreferences:(id)a0;
- (void)addDefaultCitiesIfNeeded;
- (void).cxx_destruct;
- (id)worldClockCityFromPersistenceArray:(id)a0;
- (id)cityWithIdUrl:(id)a0;
- (void)saveCities;
- (id)citiesMatchingIdentifiers:(id)a0;
- (void)removeCity:(id)a0;
- (BOOL)canAddCity;
- (id)updatedTimezoneForCityWithID:(id)a0;
- (id)updatedDataForCityWithID:(id)a0;
- (void)moveCityFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (id)allCities;
- (void)removeCityAtIndex:(unsigned long long)a0;

@end
