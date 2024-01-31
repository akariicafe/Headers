@class NSString, HMFSoftwareVersion;

@interface HMFProductInfo : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long productPlatform;
@property (readonly) long long productClass;
@property (readonly) long long productVariant;
@property (readonly, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (readonly, nonatomic) long long productColor;
@property (readonly, nonatomic) NSString *modelIdentifier;

+ (void)encodeSoftwareVersion:(id)a0 withCoder:(id)a1;
+ (id)decodeSoftwareVersionWithCoder:(id)a0;
+ (id)shortDescription;
+ (id)productInfo;

- (id)init;
- (unsigned long long)hash;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (id)privateDescription;
- (id)initWithPlatform:(long long)a0 class:(long long)a1 variant:(long long)a2 softwareVersion:(id)a3 color:(long long)a4;
- (id)initWithPlatform:(long long)a0 class:(long long)a1 variant:(long long)a2 softwareVersion:(id)a3;
- (id)description;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithPlatform:(long long)a0 class:(long long)a1 softwareVersion:(id)a2 modelIdentifier:(id)a3;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlatform:(long long)a0 class:(long long)a1 variant:(long long)a2 softwareVersion:(id)a3 color:(long long)a4 modelIdentifier:(id)a5;
- (id)initWithCoder:(id)a0;
- (id)initWithPlatform:(long long)a0 class:(long long)a1 softwareVersion:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
