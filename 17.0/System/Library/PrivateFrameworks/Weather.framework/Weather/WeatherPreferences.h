@class NSString, City, NSArray, NSDate, WeatherCloudPreferences;
@protocol SynchronizedDefaultsDelegate, WeatherPreferencesPersistence;

@interface WeatherPreferences : NSObject <WFTemperatureUnitObserver, NSURLConnectionDelegate> {
    NSString *_UUID;
    BOOL _serviceDebugging;
    NSArray *_lastUbiquitousWrittenDefaults;
    id<WeatherPreferencesPersistence> _persistence;
    NSString *_cacheDirectoryPath;
    BOOL _logUnitsAndLocale;
}

@property (nonatomic) BOOL userGroupPrefsLockedWhenInit;
@property (readonly) int userTemperatureUnit;
@property (retain) WeatherCloudPreferences *cloudPreferences;
@property (weak, nonatomic) id<SynchronizedDefaultsDelegate> syncDelegate;
@property (nonatomic, getter=isLocalWeatherEnabled, setter=setLocalWeatherEnabled:) BOOL isLocalWeatherEnabled;
@property (readonly, nonatomic) City *localWeatherCity;
@property (readonly, weak, nonatomic) NSDate *lastUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPreferences;
+ (id)serviceDebuggingPath;
+ (id)readInternalDefaultValueForKey:(id)a0;
+ (BOOL)performUpgradeOfPersistence:(id)a0 fileManager:(id)a1 error:(id *)a2;
+ (id)preferencesWithPersistence:(id)a0;
+ (id)userDefaultsPersistence;

- (id)init;
- (id)initWithPersistence:(id)a0;
- (void)resetLocale;
- (void).cxx_destruct;
- (void)_clearCachedObjects;
- (id)UUID;
- (void)setDefaultCities:(id)a0;
- (void)setCelsius:(BOOL)a0;
- (id)_cacheDirectoryPath;
- (id)_defaultCities;
- (BOOL)isCelsius;
- (void)temperatureUnitObserver:(id)a0 didChangeTemperatureUnitTo:(int)a1;
- (BOOL)serviceDebugging;
- (id)readInternalDefaultValueForKey:(id)a0;
- (void)synchronizeStateToDiskDoNotify:(BOOL)a0;
- (id)loadSavedCities;
- (void)saveToDiskWithLocalWeatherCity:(id)a0;
- (BOOL)_defaultsAreValid;
- (BOOL)_defaultsCurrent;
- (void)adjustPrefsForLocalWeatherEnabled:(BOOL)a0;
- (BOOL)areCitiesDefault:(id)a0;
- (id)citiesByConsolidatingDuplicates:(id)a0 originalOrder:(id)a1;
- (id)citiesByConsolidatingDuplicatesInBucket:(id)a0;
- (id)cityFromPreferencesDictionary:(id)a0;
- (BOOL)ensureValidSelectedCityID;
- (void)forceSyncCloudPreferences;
- (int)loadActiveCity;
- (int)loadDefaultSelectedCity;
- (id)loadDefaultSelectedCityID;
- (id)preferencesDictionaryForCity:(id)a0;
- (id)readDefaultValueForKey:(id)a0;
- (BOOL)readTemperatureUnits;
- (void)registerTemperatureUnits;
- (void)saveToDiskWithCities:(id)a0;
- (void)saveToDiskWithCities:(id)a0 activeCity:(unsigned long long)a1;
- (void)saveToDiskWithCity:(id)a0 forActiveIndex:(unsigned long long)a1;
- (void)saveToUbiquitousStore;
- (void)setActiveCity:(unsigned long long)a0;
- (void)setDefaultSelectedCity:(unsigned long long)a0;
- (void)setDefaultSelectedCityID:(id)a0;
- (void)setupUbiquitousStoreIfNeeded;
- (void)synchronizeStateToDisk;
- (id)twcLogoURL;
- (id)twcLogoURL:(id)a0;
- (void)writeDefaultValue:(id)a0 forKey:(id)a1;

@end
