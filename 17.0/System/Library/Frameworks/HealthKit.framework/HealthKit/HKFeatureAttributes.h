@class NSString;

@interface HKFeatureAttributes : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *featureVersion;
@property (readonly, copy, nonatomic) NSString *updateVersion;
@property (readonly, copy, nonatomic) NSString *UDIDeviceIdentifier;
@property (readonly, copy, nonatomic) NSString *yearOfRelease;

+ (id)featureAttributesDerivedFromOSBuildAndFeatureVersion:(id)a0;
+ (id)featureAttributesDerivedFromOSBuildAndFeatureVersion:(id)a0 watchDeviceIdentifier:(id)a1 phoneDeviceIdentifier:(id)a2;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFeatureVersion:(id)a0 updateVersion:(id)a1 UDIDeviceIdentifier:(id)a2 yearOfRelease:(id)a3;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
