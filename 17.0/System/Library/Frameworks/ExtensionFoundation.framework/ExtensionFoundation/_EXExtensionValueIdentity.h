@class NSString, LSBundleRecord, NSUUID, NSURL, NSDictionary;

@interface _EXExtensionValueIdentity : _EXExtensionIdentity {
    unsigned char _userElection;
    unsigned char _defaultUserElection;
    unsigned int _platform;
    NSString *_extensionPointIdentifier;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    LSBundleRecord *_containingBundleRecord;
    NSUUID *_UUID;
    NSString *_localizedName;
    NSURL *_url;
    NSURL *_containingURL;
    NSDictionary *_sdkDictionary;
    NSDictionary *_extensionDictionary;
    NSDictionary *_attributes;
    NSDictionary *_entitlements;
}

+ (BOOL)supportsSecureCoding;

- (id)extensionDictionary;
- (unsigned char)userElection;
- (id)attributes;
- (id)entitlementNamed:(id)a0 ofClass:(Class)a1;
- (unsigned int)platform;
- (id)bundleVersion;
- (id)extensionPointIdentifier;
- (id)applicationExtensionRecord;
- (id)entitlements;
- (unsigned char)defaultUserElection;
- (id)sdkDictionary;
- (id)containingURL;
- (id)bundleIdentifier;
- (id)localizedName;
- (void).cxx_destruct;
- (id)containingBundleRecord;
- (id)UUID;
- (id)url;
- (id)initWithCoder:(id)a0;

@end
