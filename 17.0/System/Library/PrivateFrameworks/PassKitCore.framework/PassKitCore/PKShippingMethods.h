@class NSArray, PKShippingMethod, NSOrderedSet;

@interface PKShippingMethods : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_legacyShippingMethods;
    NSOrderedSet *_methodsSet;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *legacyShippingMethods;
@property (readonly, nonatomic) NSArray *methods;
@property (readonly, nonatomic) PKShippingMethod *defaultMethod;

+ (id)shippingMethodsWithProtobuf:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)protobuf;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLegacyShippingMethods:(id)a0;
- (id)initWithMethods:(id)a0 defaultMethod:(id)a1;
- (BOOL)isEqualToShippingMethods:(id)a0;

@end
