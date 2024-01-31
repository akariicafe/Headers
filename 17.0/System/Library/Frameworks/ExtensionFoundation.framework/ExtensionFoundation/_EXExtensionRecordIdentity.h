@class LSApplicationExtensionRecord, LSExtensionPointRecord;

@interface _EXExtensionRecordIdentity : _EXExtensionIdentity

@property (readonly) LSApplicationExtensionRecord *record;
@property (readonly) LSExtensionPointRecord *extensionPoint;

+ (BOOL)supportsSecureCoding;

- (id)extensionDictionary;
- (unsigned char)userElection;
- (id)attributes;
- (id)entitlementNamed:(id)a0 ofClass:(Class)a1;
- (unsigned int)platform;
- (id)bundleVersion;
- (id)initWithApplicationExtensionRecord:(id)a0;
- (id)extensionPointIdentifier;
- (id)extensionSettingsKey;
- (id)applicationExtensionRecord;
- (id)entitlements;
- (unsigned char)defaultUserElection;
- (id)sdkDictionary;
- (Class)classForCoder;
- (id)containingURL;
- (id)initWithPlugInKitProxy:(id)a0;
- (id)bundleIdentifier;
- (BOOL)setUserElection:(unsigned char)a0 error:(id *)a1;
- (id)localizedName;
- (void).cxx_destruct;
- (id)containingBundleRecord;
- (id)UUID;
- (id)url;
- (id)initWithCoder:(id)a0;

@end
