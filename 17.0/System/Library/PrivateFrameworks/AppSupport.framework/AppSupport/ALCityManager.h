@class CPSearchMatcher, NSRecursiveLock, ALSCGreenClient, NSDate;

@interface ALCityManager : NSObject {
    struct sqlite3 { } *_db;
    struct sqlite3 { } *_localizedDb;
    NSRecursiveLock *_databaseAccessRecursiveLock;
    BOOL _greenKey1ValueCache;
    BOOL _greenKey2ValueCache;
    BOOL _greenKey3ValueCache;
    NSDate *_greenKeyValueCacheExpirationDate;
    ALSCGreenClient *_greenClient;
}

@property (readonly) CPSearchMatcher *citySearchMatcher;

+ (struct __CFArray { } *)legacyCityForCity:(id)a0;
+ (id)sharedManager;
+ (id)newCitiesByIdentifierMap:(id)a0;
+ (id)_localeDictionaryFromSQLRow:(char **)a0;
+ (BOOL)willApplyTimeZoneChanges1;

- (id)init;
- (void)dealloc;
- (BOOL)_shouldUseTablesAlternate1;
- (id)citiesMatchingName:(id)a0;
- (id)localeWithCode:(id)a0;
- (void)_whileDatabaseLocked_ensureGreenKeyValueCaches;
- (id)cityForClassicIdentifier:(id)a0;
- (id)bestCityForLegacyCity:(struct __CFArray { } *)a0;
- (id)defaultCitiesForLocaleCode:(id)a0 options:(int)a1;
- (id)_defaultCityForTimeZone:(id)a0 localeCode:(id)a1;
- (id)defaultCityForTimeZone:(id)a0;
- (id)_cityForTimeZone:(id)a0 localeCode:(id)a1;
- (id)defaultCitiesShownInWorldClock;
- (id)_whileDatabaseLocked_localeCodesMatchingQualifier:(id)a0;
- (id)citiesMatchingName:(id)a0 localized:(BOOL)a1;
- (void)_whileDatabaseLocked_modifyCityForGreen:(id)a0;
- (void)localizeCities:(id)a0;
- (id)citiesWithTimeZone:(id)a0;
- (id)citiesWithIdentifiers:(id)a0;
- (id)_cityForClassicIdentifier:(id)a0 commaSearchOptions:(unsigned long long)a1;
- (id)allLocales;
- (id)citiesMatchingQualifier:(id)a0;
- (id)defaultCitiesForLocaleCode:(id)a0;
- (id)defaultCityForTimeZone:(id)a0 localeCode:(id)a1;
- (id)allCities;

@end
