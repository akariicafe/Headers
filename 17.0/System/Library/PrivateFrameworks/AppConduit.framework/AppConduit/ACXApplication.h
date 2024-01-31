@class ACXApplicationStatus, NSArray, NSString, NSURL;

@interface ACXApplication : ACXRemoteApplication <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) ACXApplicationStatus *deviceStatus;
@property (readonly, nonatomic) unsigned long long autoInstallOverride;
@property (nonatomic) BOOL isTrusted;
@property (readonly, nonatomic) NSURL *watchAppURL;
@property (readonly, nonatomic) unsigned long long lsSequenceNumber;
@property (readonly, copy, nonatomic) NSArray *clockFaceExtensionPaths;
@property (readonly, nonatomic) NSURL *companionAppURL;
@property (readonly, copy, nonatomic) NSString *companionAppName;
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifier;
@property (readonly, nonatomic) BOOL isPurchasedReDownload;
@property (readonly, nonatomic) BOOL isEmbeddedPlaceholder;

+ (BOOL)_isIndeterminateMISError:(int)a0;
+ (int)_systemTrustsApplicationWithBundleURL:(id)a0;
+ (id)gizmoApplicationsFromCompanionAppRecord:(id)a0 databaseUUID:(id)a1 startingSequenceNumber:(unsigned long long)a2;

- (id)init;
- (BOOL)isLocallyAvailable;
- (id)serialize;
- (void)encodeWithCoder:(id)a0;
- (id)initForTesting;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSerializedDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_URLOfFirstItemWithExtension:(id)a0 inDirectory:(id)a1;
- (id)_URLsOfExtensionsInBundleURL:(id)a0 mayNotExist:(BOOL)a1;
- (void)_evaluateTrustInfoForReevaluation:(BOOL)a0;
- (id)_infoPlistForPluginBundle:(id)a0;
- (id)_mostCurrentWKAppURLInCompanionAppRecord:(id)a0 isPlaceholder:(BOOL *)a1;
- (id)_parseArchitectureSlicesForWatchKitAppExecutableURL:(id)a0;
- (void)_populateStoreMetadata;
- (id)_storeMetadataWithError:(id *)a0;
- (id)_watchKitApplicationNameFromWKAppInfoPlist:(id)a0 containerRecord:(id)a1;
- (id)appWithReevaluatedTrust;
- (id)initWithApplicationRecord:(id)a0 databaseUUID:(id)a1 sequenceNumber:(unsigned long long)a2;
- (id)initWithApplicationRecord:(id)a0 gizmoBundleIdentifier:(id)a1 databaseUUID:(id)a2 sequenceNumber:(unsigned long long)a3;
- (id)initWithBundleID:(id)a0 databaseUUID:(id)a1 sequenceNumber:(unsigned long long)a2;
- (id)initWithSerializedDictionary:(id)a0 reevaluatingTrust:(BOOL)a1;
- (id)serializeAsRemoteApplication;

@end
