@class STTemperature, NSNumber;

@interface STWeatherAttributes : STSiriModelObject {
    long long _condition;
    STTemperature *_temperature;
    STTemperature *_highTemperature;
    STTemperature *_lowTemperature;
    NSNumber *_chanceOfPrecipitation;
}

+ (BOOL)supportsSecureCoding;

- (long long)condition;
- (id)temperature;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)chanceOfPrecipitation;
- (id)highTemperature;
- (id)lowTemperature;
- (id)_initWithCondition:(long long)a0 temperature:(id)a1 highTemperature:(id)a2 lowTemperature:(id)a3 chanceOfPrecipitation:(id)a4;

@end
