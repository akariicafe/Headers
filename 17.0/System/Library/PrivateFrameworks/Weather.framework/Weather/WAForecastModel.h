@class NSDate, WFAirQualityConditions, NSURL, NSArray, WFNextHourPrecipitation, WFWeatherConditions, WFLocation, WACurrentForecast, City;

@interface WAForecastModel : NSObject <NSCopying>

@property (retain, nonatomic) City *city;
@property (nonatomic) int unit;
@property (retain, nonatomic) WFLocation *location;
@property (retain, nonatomic) WACurrentForecast *currentConditions;
@property (retain, nonatomic) WFAirQualityConditions *airQualityConditions;
@property (copy, nonatomic) NSArray *hourlyForecasts;
@property (copy, nonatomic) NSArray *dailyForecasts;
@property (retain, nonatomic) NSDate *sunrise;
@property (retain, nonatomic) NSDate *sunset;
@property (retain, nonatomic) NSURL *deepLink;
@property (retain, nonatomic) NSURL *link;
@property (copy, nonatomic) NSArray *severeWeatherEvents;
@property (copy, nonatomic) NSArray *changeForecasts;
@property (copy, nonatomic) WFNextHourPrecipitation *nextHourPrecipitation;
@property (retain, nonatomic) WFWeatherConditions *underlyingCurrentConditions;
@property (retain, nonatomic) NSArray *underlyingHourlyConditions;
@property (retain, nonatomic) NSArray *underlyingDailyConditions;
@property (readonly, nonatomic) BOOL isPopulated;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
