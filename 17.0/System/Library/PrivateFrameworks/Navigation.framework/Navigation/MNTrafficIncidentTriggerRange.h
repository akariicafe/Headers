@class MNTrafficIncidentTriggerPoint;

@interface MNTrafficIncidentTriggerRange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MNTrafficIncidentTriggerPoint *showTriggerPoint;
@property (readonly, nonatomic) MNTrafficIncidentTriggerPoint *hideTriggerPoint;
@property (readonly, nonatomic) double displayTime;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTriggerPointShow:(id)a0 hide:(id)a1 displayTime:(double)a2;

@end
