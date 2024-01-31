@class NSNumber;

@interface MTRThermostatClusterThermostatScheduleTransition : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *transitionTime;
@property (copy, nonatomic) NSNumber *heatSetpoint;
@property (copy, nonatomic) NSNumber *coolSetpoint;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
