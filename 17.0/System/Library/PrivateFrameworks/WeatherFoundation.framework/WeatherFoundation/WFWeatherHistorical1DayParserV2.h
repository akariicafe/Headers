@class NSString;

@interface WFWeatherHistorical1DayParserV2 : NSObject <WFForecastDataParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)parseForecastData:(id)a0 types:(unsigned long long)a1 location:(id)a2 locale:(id)a3 date:(id)a4 error:(id *)a5 rules:(id)a6;
- (id)parseForecastData:(id)a0 types:(unsigned long long)a1 location:(id)a2 locale:(id)a3 date:(id)a4 error:(id *)a5;
- (id)parseForecastConditionsFromObservations:(id)a0;
- (id)parseHistoricalForecast:(id)a0 location:(id)a1 date:(id)a2 error:(id *)a3;
- (id)parseHistoricalForecastConditionsFromObservations:(id)a0 forDate:(id)a1;

@end
