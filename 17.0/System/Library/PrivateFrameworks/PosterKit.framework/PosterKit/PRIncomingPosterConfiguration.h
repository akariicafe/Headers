@class NSUUID, NSString, NSURL, PRSServerPosterIdentity, NSDictionary, NSMutableSet, PRSPosterPath, PRPosterConfiguredProperties;

@interface PRIncomingPosterConfiguration : NSObject <PRPosterContents> {
    NSMutableSet *_temporaryState;
}

@property (readonly, nonatomic) unsigned long long incomingPosterType;
@property (readonly, nonatomic) PRSServerPosterIdentity *sourceIdentity;
@property (readonly, nonatomic) PRSPosterPath *path;
@property (readonly, nonatomic) PRPosterConfiguredProperties *configuredProperties;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSUUID *destinationUUID;
@property (readonly, nonatomic) NSUUID *originalPosterUUID;
@property (readonly, nonatomic) NSUUID *parentPosterUUID;
@property (readonly, copy, nonatomic) NSString *descriptorIdentifier;
@property (readonly, copy, nonatomic) NSString *role;
@property (readonly, copy, nonatomic) NSURL *assetDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)objectForUserInfoKey:(id)a0;
- (id)loadUserInfoWithError:(out id *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)assetDirectory;
- (id)initWithConfigurationToDuplicate:(id)a0 destinationPosterUUID:(id)a1;
- (id)initWithNewPath:(id)a0 destinationPosterUUID:(id)a1 parentPosterUUID:(id)a2 sourceIdentity:(id)a3 configuredProperties:(id)a4 attributes:(id)a5;
- (id)initWithNewPath:(id)a0 destinationPosterUUID:(id)a1 sourceIdentity:(id)a2 configuredProperties:(id)a3 attributes:(id)a4;
- (id)initWithType:(unsigned long long)a0 path:(id)a1 sourceIdentity:(id)a2 configuredProperties:(id)a3 attributes:(id)a4;
- (id)initWithUpdatedPath:(id)a0 updatedPosterUUID:(id)a1 parentPosterUUID:(id)a2 sourceIdentity:(id)a3 configuredProperties:(id)a4 attributes:(id)a5;
- (id)initWithUpdatedPath:(id)a0 updatedPosterUUID:(id)a1 sourceIdentity:(id)a2 configuredProperties:(id)a3 attributes:(id)a4;
- (void)trackTemporaryState:(id)a0;

@end
