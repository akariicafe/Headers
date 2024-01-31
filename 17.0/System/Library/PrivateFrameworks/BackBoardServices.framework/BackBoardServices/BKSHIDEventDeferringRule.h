@class BKSHIDEventDeferringTarget, BKSHIDEventDeferringPredicate, NSString;

@interface BKSHIDEventDeferringRule : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) BKSHIDEventDeferringPredicate *predicate;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringTarget *target;
@property (readonly, copy, nonatomic) NSString *reason;

+ (id)ruleForDeferringEventsMatchingPredicate:(id)a0 toTarget:(id)a1 withReason:(id)a2;

- (id)init;
- (unsigned long long)hash;
- (id)_initWithPredicate:(id)a0 target:(id)a1 reason:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
