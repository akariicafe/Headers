@interface WeatherDaemon.AvailabilityProxyResponse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ dataSets;
    void /* unknown type, empty encoding */ error;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
