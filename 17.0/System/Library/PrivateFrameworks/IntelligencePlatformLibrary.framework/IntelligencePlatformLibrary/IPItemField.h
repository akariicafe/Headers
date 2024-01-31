@class IPRepeatedEnum, NSError, NSObject, IPRepeatedBool, NSString, IPRepeatedUInt32, IPRepeatedUInt64, IPRepeatedInt32, IPItemMessage, NSArray, NSData, IPRepeatedDouble, IPRepeatedInt64, IPRepeatedFloat;

@interface IPItemField : NSObject

@property (readonly, nonatomic) struct IPItemFieldValueStorage { BOOL hasValue; union IPItemFieldValue { NSString *stringValue; unsigned int uint32Value; unsigned long long uint64Value; int int32Value; long long int64Value; float floatValue; double doubleValue; BOOL boolValue; NSData *bytesValue; IPItemMessage *subMessageValue; NSArray *arrayValue; IPRepeatedUInt32 *repeatedUInt32Value; IPRepeatedUInt64 *repeatedUInt64Value; IPRepeatedInt32 *repeatedInt32Value; IPRepeatedInt64 *repeatedInt64Value; IPRepeatedFloat *repeatedFloatValue; IPRepeatedDouble *repeatedDoubleValue; IPRepeatedBool *repeatedBoolValue; IPRepeatedEnum *repeatedEnumValue; } value; } valueStorage;
@property (readonly, nonatomic) NSObject *boxedJSONValue;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned short fieldIdentifier;
@property (readonly, nonatomic) unsigned char dataType;
@property (readonly, nonatomic) IPItemField *parentMessageField;
@property (readonly, nonatomic) unsigned int repeatedSubMessageIndex;

+ (id)_selectorNameForDataType:(unsigned char)a0;

- (id)stringValue;
- (BOOL)boolValue;
- (long long)int64Value;
- (id)bytesValue;
- (BOOL)hasDoubleValue;
- (float)floatValue;
- (id)description;
- (id)subMessageValue;
- (void).cxx_destruct;
- (unsigned long long)uint64Value;
- (double)doubleValue;
- (int)int32Value;
- (unsigned int)uint32Value;
- (BOOL)hasBoolValue;
- (BOOL)hasInt32Value;
- (BOOL)hasFloatValue;
- (BOOL)hasInt64Value;
- (BOOL)hasRawEnumValue;
- (void)appendInvalidFieldAccessErrorForAccessedDataType:(unsigned char)a0;
- (BOOL)hasUInt32Value;
- (BOOL)hasUInt64Value;
- (id)initWithFieldIdentifier:(unsigned short)a0 boolValue:(BOOL)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 bytesValue:(id)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 dataType:(unsigned char)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 doubleValue:(double)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 enumValue:(unsigned int)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 floatValue:(float)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 int32Value:(int)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 int64Value:(long long)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 repeatedBoolValue:(id)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 repeatedBytesValue:(id)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 repeatedDoubleValue:(id)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 repeatedEnumValue:(id)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 repeatedFloatValue:(id)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 repeatedInt32Value:(id)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 repeatedInt64Value:(id)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 repeatedStringValue:(id)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 repeatedSubMessageValue:(id)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 repeatedUInt32Value:(id)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 repeatedUInt64Value:(id)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 stringValue:(id)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 subMessageValue:(id)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 uint32Value:(unsigned int)a1;
- (id)initWithFieldIdentifier:(unsigned short)a0 uint64Value:(unsigned long long)a1;
- (unsigned int)rawEnumValue;
- (id)repeatedBoolValue;
- (id)repeatedBytesValue;
- (id)repeatedDoubleValue;
- (id)repeatedFloatValue;
- (id)repeatedInt32Value;
- (id)repeatedInt64Value;
- (id)repeatedRawEnumValue;
- (id)repeatedStringValue;
- (id)repeatedSubMessageValue;
- (id)repeatedUInt32Value;
- (id)repeatedUInt64Value;
- (void)setParentMessageField:(id)a0;
- (void)setRepeatedSubMessageIndex:(unsigned int)a0;

@end
