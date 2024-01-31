@class NSString, NSData, NSMutableArray, WAMessageAWD;

@interface WAField : NSObject <NSCopying, NSSecureCoding> {
    id _value;
    NSString *_typeInfoForRepeatableSubmessage;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) BOOL isRepeatable;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableArray *repeatableValues;
@property (nonatomic) double doubleValue;
@property (nonatomic) float floatValue;
@property (nonatomic) int int32Value;
@property (nonatomic) long long int64Value;
@property (nonatomic) unsigned int uint32Value;
@property (nonatomic) unsigned long long uint64Value;
@property (nonatomic) BOOL boolValue;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (retain, nonatomic) WAMessageAWD *subMessageValue;

- (id)stringValue;
- (BOOL)boolValue;
- (long long)int64Value;
- (id)init;
- (void)addRepeatableBoolValue:(BOOL)a0;
- (void)setBytesValue:(id)a0;
- (void)setTypeInformationForRepeatableSubmessage:(id)a0;
- (id)_typeAsString:(long long)a0;
- (void)addRepeatableUInt32Value:(unsigned int)a0;
- (id)bytesValue;
- (void)_addRepeatableValue:(id)a0;
- (void)addRepeatableFloatValue:(float)a0;
- (void)setInt64Value:(long long)a0;
- (id)repeatableValues;
- (void)encodeWithCoder:(id)a0;
- (void)addRepeatableUInt64Value:(unsigned long long)a0;
- (void)setStringValue:(id)a0;
- (void)setFloatValue:(float)a0;
- (float)floatValue;
- (void)addRepeatableBytes:(id)a0;
- (void)setBoolValue:(BOOL)a0;
- (id)typeInformationForRepeatableSubmessage;
- (void)addRepeatableString:(id)a0;
- (void)addRepeatableInt32Value:(int)a0;
- (id)_ownTypeAsString;
- (id)description;
- (void)setInt32Value:(int)a0;
- (id)subMessageValue;
- (void)setDoubleValue:(double)a0;
- (void)setUint64Value:(unsigned long long)a0;
- (BOOL)isNumerical;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 isRepeatable:(BOOL)a1 key:(id)a2 repeatableValues:(id)a3 doubleValue:(double)a4 floatValue:(float)a5 int32Value:(int)a6 int64Value:(long long)a7 uint32Val:(unsigned int)a8 uint64Value:(unsigned long long)a9 boolValue:(BOOL)a10 stringValue:(id)a11 bytesValue:(id)a12 subMessageValue:(id)a13 andTypeInfoForRepeatableSubmessage:(id)a14;
- (unsigned long long)uint64Value;
- (void)setUint32Value:(unsigned int)a0;
- (double)doubleValue;
- (void)addRepeatableInt64Value:(long long)a0;
- (void)_throwIncorrecTypeExceptionForType:(long long)a0 isGet:(BOOL)a1;
- (void)_throwIncorrectRepeatableStateExceptionAsFieldShouldBeRepeatable:(BOOL)a0 isGet:(BOOL)a1 forType:(long long)a2;
- (void)addRepeatableDoubleValue:(double)a0;
- (void)setSubMessageValue:(id)a0;
- (void)setRepeatableValues:(id)a0;
- (int)int32Value;
- (unsigned int)uint32Value;
- (id)initWithType:(long long)a0 isRepeatable:(BOOL)a1 andKey:(id)a2 andTypeInfoForRepeatableSubmessage:(id)a3;
- (id)initWithCoder:(id)a0;
- (void)addRepeatableSubMessageValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
