@class NSString, NSDictionary, NSUUID;

@interface PRSPosterArchiveManifest : NSObject

@property (readonly, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) long long archiveVersion;
@property (readonly, nonatomic) long long dataStoreVersion;
@property (readonly, nonatomic) NSString *extensionIdentifier;
@property (readonly, nonatomic) NSString *role;
@property (readonly, nonatomic) NSUUID *configurationUUID;
@property (readonly, nonatomic) unsigned long long latestConfigurationVersion;
@property (readonly, nonatomic) unsigned long long latestConfigurationSupplement;

+ (long long)manifestVersion;
+ (BOOL)isManifestDictionaryValid:(id)a0;
+ (id)unsupportedVersions;

- (id)initWithDataRepresentation:(id)a0;
- (id)dataRepresentationWithError:(out id *)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithConfigurationAttributes:(id)a0;

@end
