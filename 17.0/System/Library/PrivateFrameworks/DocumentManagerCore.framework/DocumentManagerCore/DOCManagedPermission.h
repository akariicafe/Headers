@class NSString, NSDictionary, ACAccountStore, NSCache;

@interface DOCManagedPermission : NSObject {
    BOOL _mayOpenFromManagedToUnmanaged;
    BOOL _mayOpenFromUnmanagedToManaged;
    BOOL _isManagedAppsCloudSyncDisallowed;
    BOOL _hasOpenInRestrictions;
    BOOL _isUSBAccessAllowed;
    BOOL _isNetworkDriveAccessInFilesAllowed;
    BOOL _isLocalStorageAllowed;
    BOOL _didLoadSharedConnectionValues;
}

@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSCache *appContainerIDCache;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (copy, nonatomic) NSString *hostIdentifier;
@property (nonatomic) unsigned long long hostAccountDataOwnerState;
@property (copy, nonatomic) NSDictionary *personaStringForDomainID;
@property (readonly, nonatomic) BOOL hasOpenInRestrictions;
@property (readonly, nonatomic) BOOL isUSBAccessAllowed;
@property (readonly, nonatomic) BOOL isNetworkDriveAllowed;

+ (id)defaultPermission;

- (id)init;
- (void)dealloc;
- (BOOL)isLocalStorageAllowed;
- (BOOL)mayOpenFromManagedToUnmanaged;
- (BOOL)mayOpenFromUnmanagedToManaged;
- (id)queueFileDataForAcceptance:(id)a0 originalFileName:(id)a1 forBundleID:(id)a2 outError:(id *)a3;
- (void).cxx_destruct;
- (BOOL)isCurrentPersonaEnterprise;
- (BOOL)canAppWithBundleIdentifier:(id)a0 performAction:(unsigned long long)a1 bundleIdentifier:(id)a2;
- (BOOL)canCopySourceIsContentManaged:(BOOL)a0;
- (BOOL)canHostAppPerformAction:(unsigned long long)a0 fileProviderDomain:(id)a1;
- (unsigned long long)dataOwnerStateForBundleIdentifier:(id)a0;
- (id)defaultFileProviderForAppBundle:(id)a0;
- (unsigned long long)dataOwnerStateForConfiguration:(id)a0;
- (void)cachePersonaStringForProviders:(id)a0;
- (void)_loadSharedConnectionValues;
- (BOOL)adoptPersona:(id)a0 andPerformBlock:(id /* block */)a1;
- (BOOL)adoptPersonaFromDomain:(id)a0 andPerformBlock:(id /* block */)a1;
- (BOOL)adoptPersonaFromItem:(id)a0 andPerformBlock:(id /* block */)a1;
- (BOOL)adoptPersonaFromItems:(id)a0 andPerformBlock:(id /* block */)a1;
- (BOOL)adoptPersonaliCloudPersonaAndPerformBlock:(id /* block */)a0;
- (id)allowedFileProviderBundleIdentifiersForHostBundleIdentifier:(id)a0;
- (id)appContainerBundleIDForFPItem:(id)a0;
- (BOOL)canAppWithBundleIdentifier:(id)a0 performAction:(unsigned long long)a1 accountIdentifier:(id)a2;
- (BOOL)canAppWithBundleIdentifier:(id)a0 performAction:(unsigned long long)a1 item:(id)a2;
- (BOOL)canAppWithConfiguration:(id)a0 handleNode:(id)a1;
- (BOOL)canAppWithDataOwnerState:(unsigned long long)a0 performAction:(unsigned long long)a1 dataOwnerState:(unsigned long long)a2;
- (BOOL)canAppWithDataOwnerState:(unsigned long long)a0 performAction:(unsigned long long)a1 node:(id)a2;
- (BOOL)canCopyItems:(id)a0;
- (BOOL)canCopyfromContainingBundleIdentifer:(id)a0;
- (BOOL)canHostAppPerformAction:(unsigned long long)a0 accountIdentifier:(id)a1;
- (BOOL)canHostAppPerformAction:(unsigned long long)a0 bundleIdentifier:(id)a1;
- (BOOL)canHostAppPerformAction:(unsigned long long)a0 legacyPickerExtension:(id)a1;
- (BOOL)canHostAppPerformAction:(unsigned long long)a0 targetNode:(id)a1;
- (BOOL)canItem:(id)a0 performAction:(unsigned long long)a1 item:(id)a2;
- (BOOL)canItems:(id)a0 performAction:(unsigned long long)a1 fileProviderDomain:(id)a2;
- (void)cleanAppContainerBundleIDCache;
- (unsigned long long)dataOwnerStateForAccountIdentifier:(id)a0;
- (unsigned long long)dataOwnerStateForFPDomain:(id)a0;
- (unsigned long long)dataOwnerStateForItem:(id)a0;
- (unsigned long long)dataOwnerStateForItems:(id)a0;
- (unsigned long long)dataOwnerStateForNode:(id)a0;
- (unsigned long long)dataOwnerStateForiCloudDomain:(id)a0;
- (BOOL)hasAnyEffectiveRestrictions;
- (BOOL)isManagedAppsCloudSyncAllowed;
- (BOOL)isManagedAppsCloudSyncDisallowed;
- (id)personaStringFromItem:(id)a0;
- (void)resetAllCachedPermissions;
- (unsigned long long)userActionForConfiguration:(id)a0;

@end
