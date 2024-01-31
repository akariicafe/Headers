@class MCMConcreteContainerIdentityForLibsystem, NSString, NSURL, NSUUID, MCMFSNode, NSDictionary, MCMUserIdentity, MCMContainerPath, NSNumber;

@interface MCMMetadata : MCMMetadataMinimal <MCMMetadata>

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *userManagedAssetsDirName;
@property (readonly, nonatomic) NSDictionary *info;
@property (readonly, nonatomic) int dataProtectionClass;
@property (readonly, nonatomic) MCMFSNode *fsNode;
@property (readonly, nonatomic) MCMContainerPath *containerPath;
@property (readonly, nonatomic) NSNumber *schemaVersion;
@property (readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *containerIdentity;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) BOOL existed;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct container_object_s { } *)createLibsystemContainerWithError:(id *)a0;
- (id)metadataByChangingDataProtectionClass:(int)a0;
- (BOOL)_writeFileURL:(id)a0 dictionary:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)metadataBySettingUserManagedAssetsDirName:(id)a0;
- (id)initWithContainerIdentity:(id)a0 containerPath:(id)a1 schemaVersion:(id)a2 userIdentityCache:(id)a3;
- (BOOL)writeMetadataToFileURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)writeMetadataToDiskWithError:(id *)a0;
- (id)initWithContainerIdentity:(id)a0 info:(id)a1 containerPath:(id)a2 userManagedAssetsDirName:(id)a3 schemaVersion:(id)a4 dataProtectionClass:(int)a5 fsNode:(id)a6 userIdentityCache:(id)a7;
- (BOOL)_initFromMetadataInDictionary:(id)a0 containerPath:(id)a1 userIdentity:(id)a2 containerClass:(unsigned long long)a3 fsNode:(id)a4 fileURL:(id)a5 userIdentityCache:(id)a6 error:(id *)a7;
- (BOOL)verifyWithError:(id *)a0;
- (id)initWithContainerIdentity:(id)a0 info:(id)a1 containerPath:(id)a2 userManagedAssetsDirName:(id)a3 schemaVersion:(id)a4 dataProtectionClass:(int)a5 userIdentityCache:(id)a6;
- (void).cxx_destruct;
- (id)initByReadingAndValidatingMetadataAtFileURL:(id)a0 containerPath:(id)a1 userIdentity:(id)a2 containerClass:(unsigned long long)a3 userIdentityCache:(id)a4 error:(id *)a5;
- (id)metadataBySettingInfoValue:(id)a0 forKey:(id)a1;
- (BOOL)_persisted;
- (void)_clearPersistedStatus;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
