@interface REMAlarmTimeIntervalTrigger : REMAlarmTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timeInterval;

+ (id)cdEntityName;

- (id)initWithTimeInterval:(double)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_deepCopy;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithObjectID:(id)a0 timeInterval:(double)a1;
- (BOOL)isTemporal;

@end
