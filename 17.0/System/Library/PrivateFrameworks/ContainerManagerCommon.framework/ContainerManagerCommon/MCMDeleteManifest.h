@class MCMConcreteContainerIdentity, NSString, MCMUserIdentityCache, NSURL;

@interface MCMDeleteManifest : NSObject <MCMDeleteManifest>

@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (retain, nonatomic) NSURL *readURL;
@property (readonly, nonatomic) NSURL *writeURL;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deleteManifestsForUserContainersForPOSIXUser:(id)a0 userIdentityCache:(id)a1;
+ (id)managedPathForUserContainersWithUserIdentityCache:(id)a0 forPOSIXUser:(id)a1;
+ (id)_deleteManifestsForManagedPath:(id)a0 userIdentityCache:(id)a1;
+ (id)_deleteManifestsFromFileURLs:(id)a0 userIdentityCache:(id)a1;
+ (id)_deleteManifestsFromURL:(id)a0 userIdentityCache:(id)a1 error:(id *)a2;
+ (id)_materializeContainerIdentityFromManifestPlist:(id)a0 userIdentityCache:(id)a1 error:(id *)a2;
+ (id)_materializeContainerIdentityFromManifestPlistV1:(id)a0 userIdentityCache:(id)a1 error:(id *)a2;
+ (id)deleteManifestsForGlobalContainersWithUserIdentityCache:(id)a0;
+ (id)deleteManifestsForUserContainersWithUserIdentityCache:(id)a0;
+ (id)managedPathForGlobalContainers;
+ (id)managedPathForUserContainersWithUserIdentityCache:(id)a0;

- (id)fullDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_stableFileNameForDeleteOperationPlistWithContainerIdentity:(id)a0;
- (id)_urlForDeleteManifestWithContainerIdentity:(id)a0;
- (id)deleteManifestAfterRemovingUsingLibraryRepairForUser:(id)a0 error:(id *)a1;
- (id)deleteManifestAfterWritingUsingLibraryRepairForUser:(id)a0 error:(id *)a1;
- (id)initFromURL:(id)a0 userIdentityCache:(id)a1 error:(id *)a2;
- (id)initWithConcreteContainerIdentity:(id)a0 userIdentityCache:(id)a1;
- (BOOL)isEqualToDeleteManifest:(id)a0;

@end
