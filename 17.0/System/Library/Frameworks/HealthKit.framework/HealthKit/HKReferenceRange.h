@class NSString, HKInspectableValueCollection;

@interface HKReferenceRange : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *referenceRangeIdentifier;
@property (readonly, nonatomic) HKInspectableValueCollection *valueRange;

+ (id)referenceRangeWithIdentifier:(id)a0 inspectableValueRange:(id)a1;
+ (id)referenceRangeWithIdentifier:(id)a0 maxValue:(id)a1;
+ (id)referenceRangeWithIdentifier:(id)a0 minValue:(id)a1;
+ (id)referenceRangeWithIdentifier:(id)a0 minValue:(id)a1 maxValue:(id)a2;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
