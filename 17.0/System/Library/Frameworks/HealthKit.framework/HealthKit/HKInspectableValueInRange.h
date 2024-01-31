@class HKInspectableValue, NSString, HKInspectableValueCollection, NSDate, NSNumber;

@interface HKInspectableValueInRange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKInspectableValue *lowValue;
@property (readonly, nonatomic) HKInspectableValue *highValue;
@property (readonly, nonatomic) HKInspectableValueCollection *currentValue;
@property (readonly, copy, nonatomic) NSString *unitString;
@property (readonly, nonatomic) NSNumber *lowValueNumberRepresentation;
@property (readonly, nonatomic) NSNumber *highValueNumberRepresentation;
@property (readonly, nonatomic) long long currentValueRelation;
@property (readonly, nonatomic) BOOL hasRenderableContent;
@property (retain, nonatomic) NSDate *date;

+ (id)valueInRangeWithLow:(id)a0 high:(id)a1 currentValue:(id)a2 unit:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_setUnitString:(id)a0;
- (void)_assertValidRange;
- (id)_currentValueDoubleRepresentation;
- (id)_initValueInRangeWithLow:(id)a0 high:(id)a1 currentValue:(id)a2 unit:(id)a3;
- (id)_numberForValue:(id)a0;
- (id)_numberForValueCollection:(id)a0;

@end
