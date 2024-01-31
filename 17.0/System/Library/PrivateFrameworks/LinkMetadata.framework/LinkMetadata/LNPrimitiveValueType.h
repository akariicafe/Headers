@class NSString;

@interface LNPrimitiveValueType : LNValueType

@property (class, readonly, nonatomic) LNPrimitiveValueType *stringValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *attributedStringValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *boolValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *intValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *int8ValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *int16ValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *int32ValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *int64ValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *doubleValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *dateValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *dateComponentsValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *placemarkValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *URLValueType;

@property (readonly, nonatomic) long long typeIdentifier;
@property (readonly, copy, nonatomic) NSString *typeIdentifierAsString;

+ (BOOL)supportsSecureCoding;
+ (id)supportedClassesByTypeIdentifier;
+ (id)objectClassesForCoding;

- (Class)objectClass;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithTypeIdentifier:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
