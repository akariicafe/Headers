@class FPDProviderDescriptor, NSString, NSArray, NSURL, NSSet, FPDExtension, FPDServer, FPDExtensionManager, NSObject, NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FPDProvider : NSObject {
    NSObject<OS_dispatch_queue> *_domainQueue;
}

@property (retain, nonatomic) NSArray *requestedExtendedAttributes;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *presentersQueue;
@property (readonly, nonatomic) FPDProviderDescriptor *descriptor;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *purposeIdentifier;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSArray *extensionStorageURLs;
@property (readonly, nonatomic) BOOL supportsEnumeration;
@property (readonly, nonatomic) BOOL invalidated;
@property (readonly, nonatomic) BOOL supportsFPFS;
@property (readonly, nonatomic) BOOL testingProvider;
@property (readonly, nonatomic) BOOL isAppExtensionReachable;
@property (readonly, nonatomic) FPDExtension *asAppExtensionBackedProvider;
@property (copy, nonatomic) NSSet *blockedProcessNames;
@property (readonly, nonatomic) NSURL *supportURL;
@property (readonly, nonatomic) NSURL *localDomainsPlistURL;
@property (readonly, nonatomic) NSURL *providerPlistURL;
@property (readonly, nonatomic) FPDServer *server;
@property (readonly, nonatomic) FPDExtensionManager *manager;
@property (readonly, nonatomic) NSDictionary *relevantDomainsByID;
@property (readonly, nonatomic) NSDictionary *nsDomainsByID;
@property (readonly, nonatomic) BOOL shouldHideDomainDisplayName;
@property (readonly, nonatomic) NSMutableDictionary *domainsByID;
@property (readonly, nonatomic) NSMutableDictionary *domainsByRootPath;
@property (readonly, nonatomic) NSArray *providedItemsURLs;

+ (void)_garbageCollectFoldersWithNoRelatedDomain:(id)a0 supportDir:(id)a1;
+ (id)defaultNSDomainForDescriptor:(id)a0;
+ (void)dumpXattrsForContentsOfDirectoryAtURL:(id)a0 dumper:(id)a1;
+ (void)dumpXattrsForItemAtURL:(id)a0 to:(id)a1;
+ (void)dumpXattrsForSyncRootDirectoryOfVolume:(id)a0 dumper:(id)a1;
+ (void)dumpXattrsForSystemDirectoryOfVolume:(id)a0 dumper:(id)a1;
+ (id)fpfsDomainURLIsRootOf:(id)a0;
+ (id)fpfsDomainXattrForURL:(id)a0;
+ (id)getXattr:(const char *)a0 at:(const char *)a1;
+ (id)onDiskProvidersForServer:(id)a0;
+ (id)parseDomainProperties:(id)a0 descriptor:(id)a1 volume:(id)a2 replicatedByDefault:(BOOL)a3;

- (id)description;
- (void)invalidateWithReason:(id)a0;
- (id)domainForURL:(id)a0;
- (void).cxx_destruct;
- (id)domainForIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)startWithCompletion:(id /* block */)a0;
- (id)defaultNSDomain;
- (id)_recreateDefaultDomainIfNeeded;
- (void)_setEnabledOrHiddenByUser:(BOOL)a0 forDomainIdentifier:(id)a1 newValue:(BOOL)a2 request:(id)a3 completionHandler:(id /* block */)a4;
- (void)_startOrClearDomain:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
- (BOOL)_supportsFPFS;
- (void)_writeDomainPropertiesIntoLibrary:(id)a0 ifChangedFrom:(id)a1;
- (void)addDomain:(id)a0 byImportingDirectoryAtURL:(id)a1 knownFolders:(id)a2 request:(id)a3 completionHandler:(id /* block */)a4;
- (void)addDomain:(id)a0 byImportingDirectoryAtURL:(id)a1 knownFolders:(id)a2 unableToStartup:(BOOL)a3 needsReimport:(BOOL)a4 startupError:(id)a5 reloadDomain:(BOOL)a6 request:(id)a7 completionHandler:(id /* block */)a8;
- (id)domainForRealPathURLFast:(id)a0;
- (id)domainForRealPathURLSlow:(id)a0;
- (void)dumpStateTo:(id)a0 providerFilter:(id)a1 limitNumberOfItems:(BOOL)a2;
- (void)dumpValue:(id)a0 forKey:(id)a1 to:(id)a2;
- (void)dumpXattrsForDomains:(id)a0 dumper:(id)a1;
- (void)enableAllDomainsIfNoUserElection;
- (id)importDomainsFromLibrary:(id)a0 updatePlist:(BOOL)a1;
- (id)initWithDescriptor:(id)a0 server:(id)a1;
- (void)invalidateSingleDomain:(id)a0 reason:(id)a1;
- (id)loggerForDomainWithIdentifier:(id)a0;
- (void)materializeRootForDomain:(id)a0;
- (id)newDomainFromNSDomain:(id)a0 volumeManager:(id)a1;
- (id)providerDomainForDomain:(id)a0;
- (void)reloadDomain:(id)a0 unableToStartup:(BOOL)a1 needsReimport:(BOOL)a2 startupError:(id)a3 completionHandler:(id /* block */)a4;
- (void)removeAllDomainsForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeDomain:(id)a0 mode:(unsigned long long)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)setDomainUserInfo:(id)a0 forDomainIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setEjectable:(BOOL)a0 forDomainIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setEnabled:(BOOL)a0 forDomainIdentifier:(id)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)setHiddenByUser:(BOOL)a0 forDomainIdentifier:(id)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)startDomains:(id)a0 completion:(id /* block */)a1;
- (void)writeAllDomainProperties;

@end
