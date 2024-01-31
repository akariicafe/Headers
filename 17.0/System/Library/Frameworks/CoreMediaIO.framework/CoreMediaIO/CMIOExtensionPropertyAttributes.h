@class NSArray, NSString;

@interface CMIOExtensionPropertyAttributes : NSObject <NSCopying, NSSecureCoding> {
    NSString *_description;
    id _sharedStreamDefaultValue;
}

@property (class, readonly) CMIOExtensionPropertyAttributes *readOnlyPropertyAttribute;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long objectType;
@property (readonly, copy) id minValue;
@property (readonly, copy) id maxValue;
@property (readonly, copy) NSArray *validValues;
@property (readonly, getter=isReadOnly) BOOL readOnly;

+ (id)propertyAttributesWithMinValue:(id)a0 maxValue:(id)a1 validValues:(id)a2 readOnly:(BOOL)a3;
+ (id)propertyAttributesWithSharedStreamDefaultValue:(id)a0 minValue:(id)a1 maxValue:(id)a2 validValues:(id)a3;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMinValue:(id)a0 maxValue:(id)a1 validValues:(id)a2 sharedStreamDefaultValue:(id)a3;
- (id)copyXPCDictionary;
- (id)initWithMinValue:(id)a0 maxValue:(id)a1 validValues:(id)a2 readOnly:(BOOL)a3;
- (id)sharedStreamDefaultValue;

@end
