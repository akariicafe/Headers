@interface _HKFilter : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)filter:(id)a0 acceptsActivitySummary:(id)a1;
+ (BOOL)filter:(id)a0 acceptsDataObject:(id)a1;
+ (BOOL)filter:(id)a0 acceptsDataObjectWithStartTimestamp:(double)a1 endTimestamp:(double)a2 valueInCanonicalUnit:(double)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)acceptsActivitySummary:(id)a0;
- (BOOL)acceptsDataObject:(id)a0;
- (long long)acceptsDataObjectWithStartTimestamp:(double)a0 endTimestamp:(double)a1 valueInCanonicalUnit:(double)a2;
- (BOOL)acceptsWorkoutActivity:(id)a0;

@end
