@interface UNNotificationTrigger : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL repeats;

- (id)init;
- (unsigned long long)hash;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)nextTriggerDate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithRepeats:(BOOL)a0;
- (double)_retroactiveTriggerHysteresis;
- (id)nextTriggerDateAfterDate:(id)a0 withRequestedDate:(id)a1;
- (id)nextTriggerDateAfterLastTriggerDate:(id)a0 withRequestedDate:(id)a1;
- (BOOL)willTriggerAfterDate:(id)a0 withRequestedDate:(id)a1;

@end
