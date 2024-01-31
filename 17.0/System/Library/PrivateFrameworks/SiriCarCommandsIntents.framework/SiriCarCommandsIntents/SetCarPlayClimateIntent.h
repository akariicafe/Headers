@class NSNumber, NSMeasurement;

@interface SetCarPlayClimateIntent : INIntent

@property (nonatomic, retain) NSNumber *enableClimateControl;
@property (nonatomic, copy) NSMeasurement *targetTemperature;
@property (nonatomic) long long relativeTemperatureChange;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
