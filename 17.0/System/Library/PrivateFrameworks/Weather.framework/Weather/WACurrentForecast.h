@class NSString, WFTemperature;

@interface WACurrentForecast : NSObject <NSCopying>

@property (retain, nonatomic) WFTemperature *temperature;
@property (retain, nonatomic) WFTemperature *feelsLike;
@property (nonatomic) float windSpeed;
@property (nonatomic) float windDirection;
@property (nonatomic) float humidity;
@property (nonatomic) float dewPoint;
@property (nonatomic) float visibility;
@property (nonatomic) float pressure;
@property (nonatomic) unsigned long long pressureRising;
@property (nonatomic) unsigned long long UVIndex;
@property (nonatomic) float precipitationPast24Hours;
@property (nonatomic) long long conditionCode;
@property (nonatomic) unsigned long long observationTime;
@property (copy, nonatomic) NSString *providerName;

+ (id)currentForecastForLocation:(id)a0 conditions:(id)a1;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
