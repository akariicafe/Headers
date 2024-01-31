@interface TSADEVValue : NSObject

@property (readonly, nonatomic) double observationInterval;
@property (readonly, nonatomic) double adev;

- (id)description;
- (id)initWithObservationInterval:(double)a0 andADEV:(double)a1;

@end
