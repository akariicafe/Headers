@class NSUnit;

@interface NSMeasurement : NSObject <NSCopying, NSSecureCoding> {
    NSUnit *_unit;
    double _doubleValue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUnit *unit;
@property (readonly) double doubleValue;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)measurementByAddingMeasurement:(id)a0;
- (id)_performOperation:(long long)a0 withMeasurement:(id)a1;
- (BOOL)canBeConvertedToUnit:(id)a0;
- (id)initWithDoubleValue:(double)a0 unit:(id)a1;
- (id)measurementByConvertingToUnit:(id)a0;
- (id)measurementBySubtractingMeasurement:(id)a0;

@end
