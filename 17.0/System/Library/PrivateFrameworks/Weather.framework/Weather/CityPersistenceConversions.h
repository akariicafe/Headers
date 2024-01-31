@interface CityPersistenceConversions : NSObject

+ (id)cityFromALCity:(id)a0;
+ (id)dictionaryRepresentationOfCity:(id)a0;
+ (BOOL)cityDictionaryHasValidCoordinates:(id)a0;
+ (id)cityFromCloudDictionary:(id)a0;
+ (id)cityFromDictionary:(id)a0;
+ (id)cloudDictionaryRepresentationOfALCity:(id)a0;
+ (id)cloudDictionaryRepresentationOfCity:(id)a0;
+ (id)dayForecastDictionariesFromCity:(id)a0;
+ (id)dictionaryRepresentationOfScaleCategory:(id)a0;
+ (id)dictionaryRepresentationOfTemperature:(id)a0;
+ (id)hourlyForecastDictionariesFromCity:(id)a0;
+ (BOOL)isCityValid:(id)a0;
+ (void)populateCity:(id)a0 withDayForecastDictionaries:(id)a1;
+ (void)populateCity:(id)a0 withHourlyForecastDictionaries:(id)a1;
+ (id)scaleCategoryFromDictionaryRepresentation:(id)a0;
+ (id)temperatureFromDictionaryRepresentation:(id)a0;
+ (id)weatherDetailsDictionaryFromCity:(id)a0;

@end
