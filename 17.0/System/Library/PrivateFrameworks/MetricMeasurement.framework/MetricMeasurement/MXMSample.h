@class NSString, NSSet, NSMeasurement, NSData, NSUnit, NSNumber, MXMSampleTag;

@interface MXMSample : NSObject <NSSecureCoding, NSCopying> {
    NSUnit *_unit;
    NSData *_underlyingValue;
    unsigned long long _underlyingValueLength;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSMeasurement *asMeasurementValue;
@property (readonly, copy, nonatomic) NSNumber *asNumberValue;
@property (readonly, nonatomic) double floatValue;
@property (readonly, nonatomic) long long integerValue;
@property (readonly, nonatomic) unsigned long long unsignedValue;
@property (readonly, nonatomic) NSData *date;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, copy, nonatomic) NSSet *attributes;
@property (readonly, nonatomic) unsigned long long valueType;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, copy, nonatomic) NSUnit *unit;
@property (readonly, nonatomic) MXMSampleTag *tag;
@property (readonly, copy, nonatomic) NSString *shortDesc;

- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeWithName:(id)a0;
- (id)convertToUnit:(id)a0;
- (id)initWithTag:(id)a0 attributes:(id)a1 doubleValue:(double)a2;
- (id)initWithTag:(id)a0 attributes:(id)a1 doubleValue:(double)a2 unit:(id)a3;
- (id)initWithTag:(id)a0 attributes:(id)a1 doubleValue:(double)a2 unit:(id)a3 timestamp:(unsigned long long)a4;
- (id)initWithTag:(id)a0 attributes:(id)a1 pixelBufferValue:(struct __CVBuffer { } *)a2;

@end
