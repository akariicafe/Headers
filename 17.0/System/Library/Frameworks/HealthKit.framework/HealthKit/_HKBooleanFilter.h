@interface _HKBooleanFilter : _HKFilter

@property (class, readonly, nonatomic) _HKBooleanFilter *trueFilter;
@property (class, readonly, nonatomic) _HKBooleanFilter *falseFilter;

@property (readonly, nonatomic) BOOL value;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithValue:(BOOL)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)acceptsActivitySummary:(id)a0;
- (BOOL)acceptsDataObject:(id)a0;
- (long long)acceptsDataObjectWithStartTimestamp:(double)a0 endTimestamp:(double)a1 valueInCanonicalUnit:(double)a2;
- (BOOL)acceptsWorkoutActivity:(id)a0;

@end
