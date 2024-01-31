@interface SKRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property double lowerLimit;
@property double upperLimit;

+ (id)rangeWithLowerLimit:(double)a0 upperLimit:(double)a1;
+ (id)rangeWithConstantValue:(double)a0;
+ (id)rangeWithLowerLimit:(double)a0;
+ (id)rangeWithNoLimits;
+ (id)rangeWithUpperLimit:(double)a0;
+ (id)rangeWithValue:(double)a0 variance:(double)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToRange:(id)a0;
- (id)initWithLowerLimit:(double)a0 upperLimit:(double)a1;

@end
