@class NSString, NSUUID, NSDictionary;

@interface PBFPosterConfigurationStoreArchiveManifest : NSObject {
    NSDictionary *_dictionaryRepsentation;
}

@property (readonly, nonatomic) long long archiveVersion;
@property (readonly, nonatomic) long long dataStoreVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSString *extensionIdentifier;
@property (readonly, nonatomic) NSUUID *configurationUUID;
@property (readonly, nonatomic) NSString *role;
@property (readonly, nonatomic) unsigned long long latestConfigurationVersion;
@property (readonly, nonatomic) unsigned long long latestConfigurationSupplement;

+ (long long)manifestVersion;
+ (BOOL)isManifestDictionaryValid:(id)a0;
+ (id)unsupportedVersions;

- (id)initWithDataRepresentation:(id)a0;
- (id)dataRepresentationWithError:(out id *)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithConfigurationStoreCoordinator:(id)a0;

@end
