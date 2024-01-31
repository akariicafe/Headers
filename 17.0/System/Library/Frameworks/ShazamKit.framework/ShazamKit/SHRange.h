@interface SHRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double lowerBound;
@property (readonly, nonatomic) double upperBound;

+ (id)rangeWithLowerBound:(double)a0 upperBound:(double)a1;
+ (id)mergedRangesFrom:(id)a0;

- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)contains:(double)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (double)duration;
- (BOOL)intersects:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLowerBound:(double)a0 upperBound:(double)a1;
- (id)initWithStart:(double)a0 duration:(double)a1;
- (BOOL)isEqualToRange:(id)a0 withTolerance:(double)a1;

@end
