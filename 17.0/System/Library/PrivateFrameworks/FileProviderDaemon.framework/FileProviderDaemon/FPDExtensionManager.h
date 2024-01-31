@class FPDServer, NSString, FPDPushConnection, NSSet, NSMutableDictionary, NSObject, NSMapTable, LSObserver;
@protocol OS_dispatch_queue;

@interface FPDExtensionManager : NSObject <LSObserverDelegate> {
    NSMutableDictionary *_providersByIdentifier;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id _matchingContext;
    LSObserver *_observer;
    NSSet *_providerUUIDs;
    NSMutableDictionary *_alternateContentsURLDictionary;
    NSMapTable *_sessionQueueForExtensionIdentifier;
    id /* block */ _updateHandler;
}

@property (weak, nonatomic) FPDServer *server;
@property (readonly, nonatomic) FPDPushConnection *pushConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)purge:(id)a0;
- (id)uniquedExtensions:(id)a0;
- (void)garbageCollectDomainsExceptIdentifiers:(id)a0 fromDirectory:(id)a1 isUserData:(BOOL)a2;
- (void)afterFirstDiscovery;
- (id)clouddocsExtensionIdentifier;
- (void)_loadAlternateContentsDictionary;
- (id)defaultProviderWithTopLevelBundleIdentifier:(id)a0;
- (void)_updateProviderListForFilteredFPDExtensions:(id)a0;
- (id)domainsForAppBundleIdentifier:(id)a0;
- (void)_serializeAlternateContentsURLDictionary:(id)a0;
- (id)providerDomainsByID;
- (id)providerDomainsByIDFromExtensionsByID:(id)a0;
- (id)domainForActionOperationLocator:(id)a0;
- (void)accountsChanged:(id)a0;
- (id)extensionPointRecords;
- (id)domainFromItemID:(id)a0;
- (id)_deserializedAlternateContentsDictionary;
- (id)providersWithTopLevelBundleIdentifier:(id)a0;
- (id)providersWithGroupContainers:(id)a0 bundleIdentifier:(id)a1;
- (void)providerUpdateOnVolume:(id)a0;
- (id)alternateContentsDictionaryForProviderIdentifier:(id)a0;
- (void)dropLegacyDaemonCoreSpotlightIndexIfNeeded;
- (void)setAlternateContentsURL:(id)a0 forItemID:(id)a1;
- (void)observerDidObserveDatabaseChange:(id)a0;
- (void)legacy_loadProvidersAndMonitor;
- (id)providerWithIdentifier:(id)a0;
- (id)domainWithID:(id)a0;
- (id)initWithServer:(id)a0 updateHandler:(id /* block */)a1;
- (id)domainForURL:(id)a0;
- (void)handleAllExtensionsStarted:(id)a0;
- (void)helena_loadProvidersAndMonitor;
- (void).cxx_destruct;
- (id)extensionTypes;
- (id)_domainForURL:(id)a0;
- (void)loadProvidersAndMonitor;
- (void)legacy_updateProviderListForMatchingExtensions:(id)a0;
- (id)extensionsByID:(id)a0;
- (void)_updateProviderListForMatchingExtensionRecords:(id)a0;
- (id)_matchingAttributes;
- (id)allProviders;
- (void)forceSynchronousProviderUpdate;
- (void)garbageCollectOnFirstLaunch;
- (void)_garbageCollectRemovedProvidersForInstalledProviderIdentifiers:(id)a0;
- (id)alternateContentsURLForItemID:(id)a0;
- (void)migrateEnabledStateIfNecessary:(id)a0;
- (id)nonEvictableSizeByProviderDomain;

@end
