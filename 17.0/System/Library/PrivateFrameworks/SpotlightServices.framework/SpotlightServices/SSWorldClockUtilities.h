@interface SSWorldClockUtilities : NSObject

+ (id)additionalTimeZonesStringForFormattedData:(id)a0;
+ (id)clockImageForDate:(id)a0 timeZone:(id)a1;
+ (id)commandForFormattedData:(id)a0;
+ (id)compactCardSectionForFormattedData:(id)a0 primaryCityFormattedData:(id)a1;
+ (id)formattedLocationForCity:(id)a0 country:(id)a1;
+ (id)formattedTimeForDate:(id)a0 timeZone:(id)a1;
+ (void)getLocationAndTimeZoneForQuery:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getWorldClockResultsForQuery:(id)a0 completionHandler:(id /* block */)a1;
+ (id)inlineCardSectionForFormattedData:(id)a0 primaryCityFormattedData:(id)a1;
+ (id)onDeviceResultsForLocationQuery:(id)a0;
+ (void)parseQueryForWorldClock:(id)a0 completionHandler:(id /* block */)a1;
+ (void)sendResultsForQuery:(id)a0 detectedLocations:(id)a1 shouldEmphasizeTimeZone:(BOOL)a2 completionHandler:(id /* block */)a3;
+ (id)timeZoneOffsetDescriptionForDate:(id)a0 timeZone:(id)a1;

@end
