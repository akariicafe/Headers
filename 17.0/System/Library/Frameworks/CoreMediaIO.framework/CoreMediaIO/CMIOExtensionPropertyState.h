@class NSString, CMIOExtensionPropertyAttributes;

@interface CMIOExtensionPropertyState : NSObject <NSCopying, NSSecureCoding> {
    NSString *_description;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long objectType;
@property (readonly, copy) id value;
@property (readonly) CMIOExtensionPropertyAttributes *attributes;

+ (id)copyPropertyStatesFromXPCDictionary:(id)a0;
+ (id)copyXPCDictionaryFromPropertyStates:(id)a0;
+ (id)copyXPCDictionaryFromPropertyValues:(id)a0;
+ (id)propertyStateWithValue:(id)a0;
+ (id)propertyStateWithValue:(id)a0 attributes:(id)a1;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithValue:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyXPCDictionary;
- (id)initWithValue:(id)a0 attributes:(id)a1;

@end
