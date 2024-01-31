@interface PLSeasonsUtilities : NSObject

+ (id)localizedSeasonNameForDate:(id)a0 calendar:(id)a1 locale:(id)a2;
+ (id)_seasonCountryCodesDictionary;
+ (id)_seasonKeyForMonthNumber:(unsigned long long)a0 locale:(id)a1;
+ (id)_northernMeteorologicalSeasonKeyForMonthNumber:(unsigned long long)a0;
+ (BOOL)isCountryCodePartOfSouthernHemisphere:(id)a0;
+ (id)_southernMeteorologicalSeasonKeyForMonthNumber:(unsigned long long)a0;
+ (id)_seasonNameForKey:(id)a0;
+ (BOOL)isCountryCodePartOfNorthernHemisphere:(id)a0;

@end
