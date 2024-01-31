@class NSUUID;
@protocol NSSecureCoding, NSCopying;

@interface HMSettingConstraint : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *identifier;
@property (readonly) long long type;
@property (readonly, copy) id<NSCopying, NSSecureCoding> value;

+ (id)shortDescription;
+ (id)supportedValueClasses;

- (id)init;
- (unsigned long long)hash;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithType:(long long)a0 value:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithPointer:(BOOL)a0;

@end
