@class NSString, NSUUID, MCMFSNode, MCMContainerPath, NSNumber, MCMUserIdentityCache;
@protocol MCMMetadata, MCMContainerCacheUpdatable;

@interface MCMContainerCacheEntry : NSObject <MCMContainerCacheControlsXattrs, MCMContainerCacheEntry_Internal, MCMContainerCacheEntry>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MCMFSNode *fsNode;
@property (retain, nonatomic) id<MCMMetadata> metadata;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) MCMContainerPath *containerPath;
@property (retain, nonatomic) NSNumber *schemaVersion;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (weak, nonatomic) id<MCMContainerCacheUpdatable> cache;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL corrupt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifierForFileHandle:(id)a0;
+ (id)UUIDForURL:(id)a0;
+ (void)setSchemaVersion:(id)a0 forFileHandle:(id)a1;
+ (void)clearAttributesForURL:(id)a0;
+ (id)_fileHandleForURL:(id)a0 writeable:(BOOL)a1;
+ (void)setSchemaVersion:(id)a0 forURL:(id)a1;
+ (void)clearAttributesForFileHandle:(id)a0;
+ (void)setIdentifier:(id)a0 forFileHandle:(id)a1;
+ (void)setIdentifier:(id)a0 forURL:(id)a1;
+ (void)setUUID:(id)a0 forFileHandle:(id)a1;
+ (id)UUIDForFileHandle:(id)a0;
+ (id)schemaVersionForURL:(id)a0;
+ (id)identifierForURL:(id)a0;
+ (id)schemaVersionForFileHandle:(id)a0;
+ (void)setUUID:(id)a0 forURL:(id)a1;

- (id)fullDescription;
- (id)initFromContainerPath:(id)a0 identifier:(id)a1 uuid:(id)a2 schemaVersion:(id)a3 userIdentityCache:(id)a4;
- (id)containerIdentity;
- (void)setXattrs;
- (id)metadataMinimal;
- (id)metadataWithError:(id *)a0;
- (id)initWithIdentifier:(id)a0 containerPath:(id)a1 schemaVersion:(id)a2 uuid:(id)a3 metadata:(id)a4 userIdentityCache:(id)a5;
- (BOOL)isEqualToContainerCacheEntry:(id)a0;
- (id)_metadataFromContainerPath:(id)a0 identifier:(id)a1 uuid:(id)a2 schemaVersion:(id)a3 userIdentityCache:(id)a4;
- (id)_readMetadataForIdentifier:(id)a0 containerPath:(id)a1 error:(id *)a2;
- (void)setXattrsWithFileHandle:(id)a0;
- (BOOL)verify;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0 userIdentityCache:(id)a1;
- (id)_identifierForContainerPath:(id)a0;
- (id)_findUserManagedAssetsDirectoryAtContainerRootURL:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_fabricateMetadataForContainerPath:(id)a0 identifier:(id)a1 uuid:(id)a2 schemaVersion:(id)a3 userIdentityCache:(id)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
