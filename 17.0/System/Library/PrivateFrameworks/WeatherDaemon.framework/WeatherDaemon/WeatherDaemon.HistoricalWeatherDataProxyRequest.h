@interface WeatherDaemon.HistoricalWeatherDataProxyRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ dateInterval;
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ options;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
