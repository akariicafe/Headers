@class NSString, NSDictionary;

@interface AKBundleInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleName;
@property (readonly, copy, nonatomic) NSString *bundleDescription;
@property (readonly, nonatomic) unsigned long long bundleType;
@property (readonly, copy, nonatomic) NSDictionary *otherInfo;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundleIdentifier:(id)a0 bundleName:(id)a1 bundleDescription:(id)a2 bundleType:(unsigned long long)a3 otherInfo:(id)a4;

@end
