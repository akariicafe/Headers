@class HKQuantity;

@interface NLSessionActivityGoal : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long goalTypeIdentifier;
@property (copy, nonatomic) HKQuantity *value;

+ (id)goalWithGoalTypeIdentifier:(unsigned long long)a0 value:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (double)doubleValue;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToNLSessionActivityGoal:(id)a0;
- (id)_quantityForDoubleValue:(double)a0;
- (id)initWithGoalTypeIdentifier:(unsigned long long)a0 value:(id)a1;

@end
