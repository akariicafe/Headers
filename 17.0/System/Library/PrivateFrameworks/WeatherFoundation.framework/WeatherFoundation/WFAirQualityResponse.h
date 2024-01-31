@class NSData, WFAirQualityConditions;

@interface WFAirQualityResponse : WFResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL responseWasFromCache;
@property (retain, nonatomic) NSData *rawAPIData;
@property (retain, nonatomic) WFAirQualityConditions *airQualityConditions;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
