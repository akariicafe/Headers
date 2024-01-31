@class MCMUserIdentity, MCMPOSIXUser, NSURL;
@protocol MCMClientCodeSignInfo;

@interface MCMClientIdentity : NSObject <MCMAllows, NSCopying>

@property (readonly, nonatomic) int posixPID;
@property (readonly, nonatomic) MCMPOSIXUser *posixUser;
@property (readonly, nonatomic, getter=isSandboxed) BOOL sandboxed;
@property (readonly, nonatomic) struct { unsigned int val[8]; } realAuditToken;
@property (readonly, nonatomic) struct { unsigned int val[8]; } effectiveAuditToken;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic, getter=isKernel) BOOL kernel;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) NSURL *sandboxContainerURL;
@property (readonly, nonatomic) id<MCMClientCodeSignInfo> codeSignInfo;
@property (readonly, nonatomic, getter=isExtension) BOOL extension;
@property (readonly, nonatomic) BOOL cached;

+ (id)privilegedClientIdentityWithUserIdentity:(id)a0 kernel:(BOOL)a1;
+ (id)anonymousPrivilegedClientIdentityWithUserIdentity:(id)a0;

- (id)init;
- (BOOL)isAllowedToLookupAllContainersOfClass:(unsigned long long)a0;
- (BOOL)isAllowedToStageSharedContent;
- (id)initInternal;
- (id)shortDescription;
- (id)clientIdentityByChangingCached:(BOOL)a0;
- (id)initWithPOSIXUser:(id)a0 POSIXPID:(int)a1 platform:(unsigned int)a2 userIdentity:(id)a3 effectiveAuditToken:(struct { unsigned int x0[8]; })a4 realAuditToken:(struct { unsigned int x0[8]; })a5 codeSignInfo:(id)a6 extension:(BOOL)a7 sandboxed:(BOOL)a8 sandboxContainerURL:(id)a9 kernel:(BOOL)a10;
- (char *)issueSandboxExtensionWithMetadata:(id)a0 legacyExtensionPolicy:(BOOL)a1 error:(id *)a2;
- (BOOL)isAllowedToAccessInfoMetadata;
- (BOOL)isAllowedToControlCaches;
- (BOOL)isAllowedToWipePlugInDataContainerWithIdentifier:(id)a0;
- (BOOL)isAllowedToRestoreContainer;
- (BOOL)isAllowedToRecreateContainerStructure;
- (BOOL)isAllowedToStartDataMigration;
- (BOOL)isAllowedToReplaceContainers;
- (BOOL)isAllowedToAccessCodesignMapping;
- (BOOL)isAllowedToLookupGroupContainersOfClass:(unsigned long long)a0 ownedByIdentifier:(id)a1;
- (BOOL)isAllowedToRegenerateDirectoryUUIDs;
- (BOOL)isAllowedToLookupViaPrivateEntitlementWithClass:(unsigned long long)a0 identifier:(id)a1;
- (id)description;
- (struct container_client { char *x0; unsigned int x1; char *x2; unsigned int x3; unsigned int x4; struct { unsigned int x0[8]; } x5; int x6; BOOL x7; BOOL x8; BOOL x9; id x10; } *)createLibsystemClient;
- (BOOL)isAllowedToAccessUserAssets;
- (BOOL)isAllowedToWipeAnyDataContainer;
- (void).cxx_destruct;
- (BOOL)isAllowedToStartUserDataMigration;
- (BOOL)needsSandboxExtensionForContainerWithClass:(unsigned long long)a0 identifier:(id)a1;
- (BOOL)isAllowedToChangeReferences;
- (BOOL)isAllowedToAccessContainerIdentity:(id)a0 error:(unsigned long long *)a1;
- (BOOL)isAllowedToReadReferences;
- (BOOL)isAllowedToDelete;
- (BOOL)isAllowedToLookupContainerIdentity:(id)a0;
- (BOOL)isAllowedToSetDataProtection;
- (BOOL)isAllowedToTest;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
