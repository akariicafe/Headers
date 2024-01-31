@class LSExtensionPoint, NSString, NSUUID, NSDate, LSApplicationExtensionRecord, NSDictionary, LSBundleProxy, NSNumber;

@interface LSPlugInKitProxy : LSBundleProxy <LSDetachable, NSSecureCoding> {
    unsigned int _platform;
    unsigned int _pluginFlags;
    LSApplicationExtensionRecord *_appexRecord;
    NSString *_extensionPointID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *pluginIdentifier;
@property (readonly, nonatomic) NSString *originalIdentifier;
@property (readonly, nonatomic) NSString *protocol;
@property (readonly, nonatomic) NSNumber *platform;
@property (readonly, nonatomic) NSUUID *pluginUUID;
@property (readonly, nonatomic) NSDictionary *pluginKitDictionary;
@property (readonly, nonatomic) NSDictionary *infoPlist;
@property (readonly, nonatomic) NSDate *registrationDate;
@property (readonly, nonatomic) LSBundleProxy *containingBundle;
@property (readonly, nonatomic, getter=isOnSystemPartition) BOOL onSystemPartition;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) BOOL pluginCanProvideIcon;
@property (readonly, nonatomic) LSExtensionPoint *extensionPoint;

+ (id)plugInKitProxyForPlugin:(unsigned int)a0 withContext:(struct LSContext { id x0; } *)a1;
+ (id)pluginKitProxyForUUID:(id)a0;
+ (id)pluginKitProxyForURL:(id)a0;
+ (id)containingBundleIdentifiersForPlugInBundleIdentifiers:(id)a0 error:(id *)a1;
+ (id)plugInKitProxyForPlugin:(unsigned int)a0 withContext:(struct LSContext { id x0; } *)a1 applicationExtensionRecord:(id)a2 resolveAndDetach:(BOOL)a3;
+ (id)plugInKitProxyForUUID:(id)a0 bundleIdentifier:(id)a1 pluginIdentifier:(id)a2 effectiveIdentifier:(id)a3 version:(id)a4 bundleURL:(id)a5;
+ (id)pluginKitProxyForIdentifier:(id)a0;

- (id)teamID;
- (id)dataContainerURL;
- (void)detach;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)signerOrganization;
- (id)signerIdentity;
- (id)initWithCoder:(id)a0;
- (id)iconDataForVariant:(int)a0 withOptions:(int)a1;
- (BOOL)UPPValidated;
- (id)_initWithPlugin:(unsigned int)a0 andContext:(struct LSContext { id x0; } *)a1 applicationExtensionRecord:(id)a2 resolveAndDetach:(BOOL)a3;
- (id)_initWithUUID:(id)a0 bundleIdentifier:(id)a1 pluginIdentifier:(id)a2 effectiveIdentifier:(id)a3 version:(id)a4 bundleURL:(id)a5;
- (id)_localizedNameWithPreferredLocalizations:(id)a0 useShortNameOnly:(BOOL)a1;
- (id)_managedPersonas;
- (id)_stringLocalizerForTable:(id)a0;
- (BOOL)_usesSystemPersona;
- (id)_valueForEqualityTesting;
- (id)boundIconsDictionary;
- (id)bundleType;
- (unsigned long long)compatibilityState;
- (id)correspondingApplicationExtensionRecord;
- (BOOL)freeProfileValidated;
- (id)groupContainerURLs;
- (id)objectForInfoDictionaryKey:(id)a0 ofClass:(Class)a1 inScope:(unsigned long long)a2;
- (BOOL)profileValidated;

@end
