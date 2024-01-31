@class NSString, NSArray, NSDate, NSNumber;

@interface MSDKSignedManifest : NSObject

@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSArray *criticalComponents;
@property (retain, nonatomic) NSArray *installationOrder;
@property (readonly, nonatomic) int version;
@property (readonly, nonatomic) NSNumber *revision;
@property (readonly, nonatomic) NSString *bundleName;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSString *regionCode;
@property (readonly, nonatomic) NSString *localeCode;
@property (readonly, nonatomic) NSString *contentCode;
@property (readonly, nonatomic) NSDate *dateCreated;
@property (readonly, nonatomic) NSDate *validUntil;
@property (readonly, nonatomic) NSString *minimumOSVersion;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSNumber *networkTier;
@property (readonly, nonatomic) NSString *partNumber;
@property (readonly, nonatomic) NSArray *products;
@property (readonly, nonatomic) NSArray *nonSystemAppList;
@property (readonly, nonatomic) NSArray *systemAppList;
@property (readonly, nonatomic) NSArray *backupDataList;
@property (readonly, nonatomic) NSArray *appDataList;
@property (readonly, nonatomic) NSArray *userDataList;
@property (readonly, nonatomic) NSArray *factoryBackupList;
@property (readonly, nonatomic) NSArray *groupDataList;
@property (readonly, nonatomic) NSArray *extensionDataList;
@property (readonly, nonatomic) NSArray *provisioningProfiles;
@property (readonly, nonatomic) NSArray *configurationProfiles;
@property (readonly, nonatomic) NSArray *allFiles;

+ (id)signedManifestAtPath:(id)a0;
+ (id)signedManifestAtPath:(id)a0 verifyManifest:(BOOL)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)_addDependenciesForComponent:(id)a0 withLookupDict:(id)a1;
- (BOOL)_buildAppDepedencies;
- (BOOL)_checkManifestVersion;
- (id)_componentListForSection:(id)a0 fromPayload:(id)a1;
- (id)_manifestDataFromFile:(id)a0;
- (id)_parseAllFiles;
- (id)_parseFactoryBackupList;
- (BOOL)_parseInstallationOrder:(id)a0;
- (BOOL)_parseLocale;
- (BOOL)_parseManifestInfo:(id)a0;
- (id)_toComponentDictionary:(id)a0;
- (id)initFromManifestAtPath:(id)a0 verifyManifest:(BOOL)a1;

@end
