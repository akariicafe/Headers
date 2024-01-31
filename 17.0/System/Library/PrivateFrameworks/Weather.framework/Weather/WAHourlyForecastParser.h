@interface WAHourlyForecastParser : NSObject

+ (void)addSunEventIntoForecasts:(id)a0 eventType:(unsigned long long)a1 forecastDetail:(id)a2 eventTime:(unsigned long long)a3 currentTime:(unsigned long long)a4;
+ (id)parseForecasts:(id)a0 temperature:(id)a1 currentTime:(unsigned long long)a2 condition:(long long)a3 sunrise:(unsigned long long)a4 sunset:(unsigned long long)a5;
+ (id)parseForecasts:(id)a0 temperature:(id)a1 hour:(long long)a2 condition:(long long)a3 sunrise:(unsigned long long)a4 sunset:(unsigned long long)a5;

@end
