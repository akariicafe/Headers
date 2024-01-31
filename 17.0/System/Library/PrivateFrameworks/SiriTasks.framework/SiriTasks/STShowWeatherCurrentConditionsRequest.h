@class STWeatherCurrentConditions, STCity, STWeatherUnits;

@interface STShowWeatherCurrentConditionsRequest : AFSiriRequest {
    STWeatherCurrentConditions *_currentConditions;
    STCity *_city;
    STWeatherUnits *_units;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)units;
- (id)city;
- (void).cxx_destruct;
- (id)currentConditions;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (id)_initWithCurrentConditions:(id)a0 city:(id)a1 units:(id)a2;

@end
