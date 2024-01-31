@class NSString, HKProfileIdentifier;

@interface HKHealthStoreConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sourceBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceVersion;
@property (readonly, copy, nonatomic) NSString *debugIdentifier;
@property (readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly, nonatomic) unsigned int applicationSDKVersion;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSourceBundleIdentifier:(id)a0 sourceVersion:(id)a1 debugIdentifier:(id)a2 profileIdentifier:(id)a3 applicationSDKVersion:(unsigned int)a4;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
