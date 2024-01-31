@interface REMAlarmVehicleTrigger : REMAlarmTrigger

@property (nonatomic) long long event;

+ (BOOL)supportsSecureCoding;
+ (id)cdEntityName;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEvent:(long long)a0;
- (id)_deepCopy;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithObjectID:(id)a0 event:(long long)a1;
- (BOOL)isTemporal;

@end
