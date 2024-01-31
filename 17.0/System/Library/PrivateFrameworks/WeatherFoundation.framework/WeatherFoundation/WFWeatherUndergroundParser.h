@class NSSet, NSString;

@interface WFWeatherUndergroundParser : NSObject <WFForecastDataParser>

@property (class, readonly) NSSet *componentsForCurrentForecast;
@property (class, readonly) NSSet *componentsForHourlyForecasts;
@property (class, readonly) NSSet *componentsForDailyForecasts;
@property (class, readonly) unsigned long long expectedHourlyForecastCount;
@property (class, readonly) unsigned long long expectedDailyForecastCount;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)conditionFromWeatherUndergroundPhrase:(id)a0;

- (id)parseForecastData:(id)a0 types:(unsigned long long)a1 location:(id)a2 locale:(id)a3 date:(id)a4 error:(id *)a5 rules:(id)a6;
- (id)parseForecastData:(id)a0 types:(unsigned long long)a1 location:(id)a2 locale:(id)a3 date:(id)a4 error:(id *)a5;
- (void)logParsingErrorAtKeyPath:(id)a0 error:(id *)a1;
- (id)sanitizedNumberForKeyPath:(id)a0 dict:(id)a1;
- (id)dateFromUTCDict:(id)a0 toUnitGranularity:(unsigned long long)a1;
- (id)parseHistoricalForecast:(id)a0 error:(id *)a1;
- (id)sanitizedTemperatureForCelsiusKeyPath:(id)a0 fahrenheitKeyPath:(id)a1 dict:(id)a2;

@end
