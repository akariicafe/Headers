@class NSDateComponents;

@interface REMAlarmDateTrigger : REMAlarmTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDateComponents *dateComponents;

+ (id)cdEntityName;

- (unsigned long long)hash;
- (id)initWithDateComponents:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_deepCopy;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithObjectID:(id)a0 dateComponents:(id)a1;
- (BOOL)isTemporal;

@end
