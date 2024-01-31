@class CLRegion;

@interface UNLocationNotificationTrigger : UNNotificationTrigger

@property (readonly, copy, nonatomic) CLRegion *region;

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithRegion:(id)a0 repeats:(BOOL)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithRegion:(id)a0 repeats:(BOOL)a1;
- (BOOL)willTriggerAfterDate:(id)a0 withRequestedDate:(id)a1;

@end
