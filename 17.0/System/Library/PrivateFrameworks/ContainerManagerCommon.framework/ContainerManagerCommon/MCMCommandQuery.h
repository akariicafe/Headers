@class NSSet, MCMUserIdentity, NSUUID;

@interface MCMCommandQuery : MCMCommand <MCMParametersQuery>

@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) unsigned long long explicitFlags;
@property (readonly, nonatomic) NSSet *identifiers;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) NSSet *groupIdentifiers;
@property (readonly, nonatomic) BOOL createIfNecessary;
@property (readonly, nonatomic) BOOL includeInfoInResult;
@property (readonly, nonatomic) BOOL includePathInResult;
@property (readonly, nonatomic) BOOL issueSandboxExtensions;
@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) BOOL includeUnowned;
@property (readonly, nonatomic) BOOL expectSingleResult;
@property (readonly, nonatomic) BOOL fuzzyMatchTransient;
@property (readonly, nonatomic) BOOL fuzzyMatchInternalUUID;
@property (readonly, nonatomic) NSUUID *internalUUID;
@property (readonly, nonatomic) unsigned long long privateFlags;
@property (readonly, nonatomic) BOOL legacyPersonaPolicy;
@property (readonly, nonatomic) BOOL legacyExtensionPolicy;
@property (readonly, nonatomic) BOOL includeUserManagedAssetsRelPath;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (id)_containerIdentifiersIncludingUnownedForContainerClass:(unsigned long long)a0 canAccessAllContainers:(BOOL *)a1 error:(id *)a2;
- (void)execute;
- (BOOL)_executeQueryPlan:(id)a0 resultContainers:(id)a1 error:(id *)a2;
- (id)_queryPlanWithIdentifiers:(id)a0 isGroupClass:(BOOL)a1 clientIdentity:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)initWithPlatform:(unsigned int)a0 explicitFlags:(unsigned long long)a1 identifiers:(id)a2 containerClass:(unsigned long long)a3 groupIdentifiers:(id)a4 internalUUID:(id)a5 createIfNecessary:(BOOL)a6 includeInfoInResult:(BOOL)a7 includePathInResult:(BOOL)a8 issueSandboxExtensions:(BOOL)a9 UID:(unsigned int)a10 userIdentity:(id)a11 transient:(BOOL)a12 fuzzyMatchTransient:(BOOL)a13 fuzzyMatchInternalUUID:(BOOL)a14 includeUnowned:(BOOL)a15 expectSingleResult:(BOOL)a16 legacyPersonaPolicy:(BOOL)a17 includeUserManagedAssetsRelPath:(BOOL)a18 context:(id)a19 resultPromise:(id)a20;
- (id)_setOfUserIdentities;
- (id)_executeQueryForContainerIdentity:(id)a0 error:(id *)a1;
- (BOOL)preflightClientAllowed;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (id)_setOfUserIdentitiesForIdentifiers:(id)a0 isGroupClass:(BOOL)a1;

@end
