@class NSMeasurement, NSDate;

@interface HAWristTemperature : NSObject

@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSMeasurement *computedTemperature;
@property (readonly, nonatomic) NSMeasurement *sensor1Temperature;
@property (readonly, nonatomic) NSMeasurement *sensor2Temperature;
@property (readonly, nonatomic) unsigned long long dataValidity;
@property (readonly, nonatomic) NSMeasurement *computedTemperatureErrorEstimate;

- (void).cxx_destruct;
- (id)initWithComputedTemperatureErrorEstimate:(id)a0 computedTemperature:(id)a1 sensor1Temperature:(id)a2 sensor2Temperature:(id)a3 dataValidity:(unsigned long long)a4 timestamp:(id)a5;

@end
