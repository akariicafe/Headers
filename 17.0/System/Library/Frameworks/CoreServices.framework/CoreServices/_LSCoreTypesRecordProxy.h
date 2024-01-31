@class LSBundleRecord;

@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LSBundleRecord *_realRecord;

+ (Class)classForKeyedUnarchiver;
+ (id)description;
+ (id)classFallbacksForKeyedArchiver;

- (id)localizedShortName;
- (id)dataContainerURL;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)executableURL;
- (unsigned int)platform;
- (id)supportedIntents;
- (void)detach;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)applicationIdentifier;
- (id)entitlements;
- (id)URL;
- (BOOL)conformsToProtocol:(id)a0;
- (Class)classForCoder;
- (char)developerType;
- (id)replacementObjectForCoder:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (id)teamIdentifier;
- (id)bundleIdentifier;
- (BOOL)isKindOfClass:(Class)a0;
- (id)localizedName;
- (void).cxx_destruct;
- (id)SDKVersion;
- (id)UIBackgroundModes;
- (id)WKBackgroundModes;
- (id)_personasWithAttributes;
- (id)accentColorName;
- (id)debugDescription;
- (id)associatedPersonas;
- (id)intentDefinitionURLs;
- (id)_loadRealRecord;
- (id)intentsRestrictedWhileLocked;
- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (BOOL)isFreeProfileValidated;
- (BOOL)isProfileValidated;
- (BOOL)isUPPValidated;
- (id)localizedNameWithPreferredLocalizations:(id)a0;
- (id)localizedShortNameWithPreferredLocalizations:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0 preferredLocalizations:(id)a1;
- (id)managedPersonas;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)serviceRecords;
- (id)signerOrganization;
- (id)signerIdentity;
- (id)initWithCoder:(id)a0;
- (id)machOUUIDs;
- (Class)classForKeyedArchiver;
- (BOOL)isMemberOfClass:(Class)a0;
- (id)supportedIntentMediaCategories;
- (BOOL)supportsNowPlaying;
- (BOOL)wasBuiltWithThreadSanitizer;

@end
