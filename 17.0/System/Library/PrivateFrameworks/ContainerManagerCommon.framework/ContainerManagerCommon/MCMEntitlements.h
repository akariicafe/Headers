@class NSDictionary, NSString, NSSet;

@interface MCMEntitlements : NSObject <MCMEntitlements> {
    NSDictionary *_sanitizedLookup;
    NSSet *_sanitizedWipe;
    BOOL _isSimulatorTestClient;
}

@property (retain, nonatomic) NSDictionary *rawEntitlements;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *lookup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL privileged;
@property (readonly, nonatomic) BOOL proxyAllowed;
@property (readonly, nonatomic) BOOL testabilityAllowed;
@property (readonly, nonatomic) BOOL hasSystemContainer;
@property (readonly, nonatomic) BOOL allowed;
@property (readonly, nonatomic) BOOL otherIDLookup;
@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL canManageUserManagedAssets;
@property (readonly, nonatomic) BOOL canControlCaches;
@property (readonly, nonatomic) BOOL canRepair;
@property (readonly, nonatomic) BOOL canStageSharedContent;
@property (readonly, nonatomic) BOOL canPerformDataMigration;
@property (readonly, nonatomic) BOOL canDeleteContainerContent;
@property (readonly, nonatomic) BOOL requestsNoContainer;
@property (readonly, nonatomic) BOOL canReadReferences;
@property (readonly, nonatomic) BOOL canReadWriteReferences;
@property (readonly, nonatomic) BOOL hasDaemonContainer;

+ (id)appGroupIdentifiersForIdentifier:(id)a0 entitlements:(id)a1;
+ (id)publicAppGroupIdentifiersForIdentifier:(id)a0 entitlements:(id)a1;
+ (id)protectedAppGroupIdentifiersForIdentifier:(id)a0 entitlements:(id)a1;
+ (id)systemGroupIdentifiersForIdentifier:(id)a0 entitlements:(id)a1;
+ (id)publicEntitlementForGroupContainerClass:(unsigned long long)a0;
+ (id)copyGroupEntitlementForIdentifier:(id)a0 entitlements:(id)a1 groupKey:(id)a2;

- (BOOL)isOwnerOfProtectedAppGroupContainerWithIdentifier:(id)a0;
- (BOOL)isAllowedToLookupAllContainersOfClass:(unsigned long long)a0;
- (BOOL)isAllowedToStageSharedContent;
- (int)intendedDataProtectionClass;
- (BOOL)isAllowedToAccessInfoMetadata;
- (BOOL)isAllowedToControlCaches;
- (BOOL)isAllowedToWipePlugInDataContainerWithIdentifier:(id)a0;
- (BOOL)isAllowedToRestoreContainer;
- (id)initForPrivilegedAnonymous;
- (BOOL)isAllowedToRecreateContainerStructure;
- (BOOL)isAllowedToStartDataMigration;
- (BOOL)isAllowedToReplaceContainers;
- (id)copyEntitlementsDictionaryByRemovingGroupContainerOfClass:(unsigned long long)a0 groupIdentifier:(id)a1;
- (void)prune;
- (BOOL)isAllowedToAccessCodesignMapping;
- (BOOL)isOwnerOfContainerWithClass:(unsigned long long)a0 identifier:(id)a1;
- (BOOL)isAllowedToLookupGroupContainersOfClass:(unsigned long long)a0 ownedByIdentifier:(id)a1;
- (BOOL)isAllowedToRegenerateDirectoryUUIDs;
- (BOOL)isAllowedToLookupViaPrivateEntitlementWithClass:(unsigned long long)a0 identifier:(id)a1;
- (id)publicAppGroupIdentifiers;
- (id)protectedAppGroupIdentifiers;
- (id)_setOfStringsFromArray:(id)a0;
- (BOOL)isAllowedToAccessUserAssets;
- (BOOL)isAllowedToWipeAnyDataContainer;
- (void).cxx_destruct;
- (BOOL)isAllowedToStartUserDataMigration;
- (id)systemGroupIdentifiers;
- (BOOL)isAllowedToChangeReferences;
- (id)lookupForContainerClass:(unsigned long long)a0;
- (id)containerRequiredIdentifier;
- (id)appGroupIdentifiers;
- (id)copyEntitlementsDictionaryByAddingGroupContainerOfClass:(unsigned long long)a0 groupIdentifier:(id)a1;
- (id)initWithEntitlements:(id)a0 clientIdentifier:(id)a1;
- (BOOL)isEntitledForLookupWithClass:(unsigned long long)a0 identifier:(id)a1;
- (id)copyEntitlementsDictionaryByRemovingAppGroupContainerWithIdentifier:(id)a0;
- (BOOL)isAllowedToReadReferences;
- (BOOL)isAllowedToDelete;
- (BOOL)isAllowedToLookupContainerIdentity:(id)a0;
- (id)copyEntitlementsDictionaryByRemovingSystemGroupContainerWithIdentifier:(id)a0;
- (BOOL)isAllowedToSetDataProtection;
- (BOOL)isAllowedToTest;

@end
