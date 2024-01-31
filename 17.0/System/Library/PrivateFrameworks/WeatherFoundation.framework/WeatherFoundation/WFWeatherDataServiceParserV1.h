@class NSString;

@interface WFWeatherDataServiceParserV1 : NSObject <WFForecastDataParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dateFormatter;
+ (id)dateFormatter;

- (id)parsedGradientStopFromDictionary:(id)a0;
- (id)pollenDictFromData:(id)a0 types:(unsigned long long)a1;
- (id)parseAirQualityFromData:(id)a0 locale:(id)a1;
- (id)nextHourPrecipitationEventDictFromData:(id)a0 types:(unsigned long long)a1;
- (id)parseNextHourPrecipitationFromData:(id)a0 withUnit:(int)a1;
- (id)parsedCategoryFromDictionary:(id)a0;
- (id)dailyAlmanacDictFromData:(id)a0 types:(unsigned long long)a1;
- (id)nowLinksDictFromData:(id)a0 types:(unsigned long long)a1;
- (id)parseSevereWeatherEventsFromData:(id)a0 withUnit:(int)a1;
- (id)dailyForecastDictFromData:(id)a0 types:(unsigned long long)a1;
- (id)hourlyForecastDictFromData:(id)a0 types:(unsigned long long)a1;
- (id)parseForecastData:(id)a0 types:(unsigned long long)a1 location:(id)a2 locale:(id)a3 date:(id)a4 error:(id *)a5 rules:(id)a6;
- (id)parseHourlyForecastFromData:(id)a0 withUnit:(int)a1;
- (id)parseForecastData:(id)a0 types:(unsigned long long)a1 location:(id)a2 locale:(id)a3 date:(id)a4 error:(id *)a5;
- (id)parseAQIScaleNamed:(id)a0 data:(id)a1 error:(id *)a2;
- (id)changeForecastDictFromData:(id)a0 types:(unsigned long long)a1;
- (id)parsePollenFromData:(id)a0;
- (id)dailyHistoryDictFromData:(id)a0 types:(unsigned long long)a1;
- (id)parseAlmanacFromData:(id)a0 withUnit:(int)a1;
- (void)parseWeatherComponentsFromData:(id)a0 intoConditions:(id)a1 withUnit:(int)a2;
- (id)parseHourlyHistoryFromData:(id)a0 withUnit:(int)a1;
- (void)parseNowLinksFromData:(id)a0 intoConditions:(id)a1;
- (id)parseForecastData:(id)a0 types:(unsigned long long)a1 location:(id)a2 units:(int)a3 locale:(id)a4 date:(id)a5 error:(id *)a6 rules:(id)a7;
- (id)hourlyHistoryDictFromData:(id)a0 types:(unsigned long long)a1;
- (id)parseDailyHistoryFromData:(id)a0 withUnit:(int)a1;
- (id)currentObservationsDictFromData:(id)a0 types:(unsigned long long)a1;
- (BOOL)isProviderAttribution:(id)a0 stillValidWithMetadata:(id)a1;
- (id)parseWeatherComponentsFromData:(id)a0 withUnit:(int)a1;
- (id)severeWeatherEventDictFromData:(id)a0 types:(unsigned long long)a1;
- (id)parseDailyForecastFromData:(id)a0 withUnit:(int)a1;
- (id)parseForecastDataFromDict:(id)a0 types:(unsigned long long)a1 location:(id)a2 units:(int)a3 locale:(id)a4 date:(id)a5 error:(id *)a6 rules:(id)a7;
- (id)parsePollutants:(id)a0;
- (id)parseCurrentObservationsFromData:(id)a0 withUnit:(int)a1;
- (id)airQualityDictFromData:(id)a0 types:(unsigned long long)a1;
- (id)parseChangeForecastFromData:(id)a0 withUnit:(int)a1;
- (id)parseMetaDataFromData:(id)a0;

@end
