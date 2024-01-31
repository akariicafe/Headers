@class STWeatherAttributes, STCity;

@interface STShowWeatherConditionsRequest : AFSiriRequest {
    STWeatherAttributes *_attributes;
    STCity *_city;
}

+ (BOOL)supportsSecureCoding;

- (id)attributes;
- (void)encodeWithCoder:(id)a0;
- (id)city;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (id)_initWithAttributes:(id)a0 city:(id)a1;

@end
