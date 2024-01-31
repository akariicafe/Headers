@class NSString, NSDictionary, WFFileType, WFObjectType;

@interface WFWeatherDataContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;

- (id)temperature;
- (id)location;
- (id)pressure;
- (id)visibility;
- (id)date;
- (id)highTemperature;
- (id)uvIndex;
- (id)lowTemperature;
- (id)pollutants;
- (id)windDirection;
- (id)windSpeed;
- (id)sunriseTime;
- (id)sunsetTime;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)localizedAirQualityCategory;
- (id)localizedAirQualityIndex;
- (id)humidity;
- (id)dewpoint;
- (id)feelsLikeTemperature;
- (id)localizedConditionString;
- (id)precipitationAmount;
- (id)precipitationChance;
- (id)weatherData;

@end
