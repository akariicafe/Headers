@interface CLReductiveFilterOptions : NSObject

@property (nonatomic) double biasRateInMeasurement;
@property (nonatomic) double applyRangeEstimation;
@property (readonly, nonatomic) unsigned long long beaconType;
@property (readonly, nonatomic) double transmitPower;

- (id)init;
- (id)initWithBeaconType:(unsigned long long)a0;
- (id)initWithBeaconType:(unsigned long long)a0 transmitPower:(double)a1;

@end
