@class IMBalloonPluginManagerModel;

@interface IMBalloonPluginManager : NSObject

@property (class, nonatomic) BOOL isRunningPPT;

@property (retain, nonatomic) IMBalloonPluginManagerModel *model;
@property (readonly, retain, nonatomic) Class richLinksDataSourceClass;

+ (id)sharedInstance;
+ (BOOL)_allowExtensionWithIdentifier:(id)a0;
+ (id)_extensionBlocklist;
+ (BOOL)_isExtensionBlocklisted:(id)a0;
+ (BOOL)_isServerBlocklistedBundleIdentifier:(id)a0 serverBag:(id)a1;
+ (BOOL)_shouldAddFindMyToBlockList;
+ (BOOL)_shouldAddSafetyMonitorToBlockList;
+ (id)balloonProviderBundlePathURL;
+ (void)disableExtensionDiscovery;
+ (void)enableAlternatePathPlugins;
+ (id)precacheBalloonAppExtensionsForExtensions:(id)a0;
+ (id)signpostLogHandle;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_extensionWithIdentifier:(id)a0;
- (id)allPlugins;
- (id)balloonPluginForBundleID:(id)a0;
- (Class)dataSourceClassForBundleID:(id)a0;
- (id)dataSourceForPluginPayload:(id)a0;
- (id)existingDataSourceForMessageGUID:(id)a0 bundleID:(id)a1;
- (void)insertDataSource:(id)a0 forGUID:(id)a1;
- (void)insertPlugin:(id)a0;
- (void)loadExtensionWithIdentifierIfNeeded:(id)a0;
- (void)pluginChatItem:(id)a0 didRelenquishNonResuableController:(id)a1 contextIdentifier:(id)a2;
- (void)pluginChatItem:(id)a0 didRelinquishReusableController:(id)a1 contextIdentifier:(id)a2;
- (void)removePluginWithBundleID:(id)a0;
- (void)setPluginEnabled:(BOOL)a0 identifier:(id)a1;
- (id)_appProxyBundleIdentifiersForAppPlugins;
- (void)_clearPluginMetadataForUninstalledApps;
- (id)_currentlyInstalledExtensionsExcludingExtensionPoint:(id)a0;
- (void)_deleteMetaDataForPlugins:(id)a0;
- (id)_fallBackMessagesExtensionPluginForBundleID:(id)a0;
- (void)_findPluginsInPathInternal:(id)a0;
- (void)_findPluginsInPaths:(id)a0;
- (id)_identifiersForAppPlugins;
- (id)_infoPlistPathForPluginCreatingFolderIfNeeded:(id)a0;
- (id)_insertPluginForAppBundle:(id)a0 balloonProviderBundle:(id)a1;
- (id)_insertPluginForExtension:(id)a0 balloonProviderBundle:(id)a1 precachedBalloonAppExtensions:(id)a2 timingCollection:(id)a3;
- (void)_loadAllDataSources;
- (void)_loadAppBundleDataSources;
- (void)_loadAppExtensionDataSources;
- (id)_loadAppExtensionDataSourcesForExtensionPoint:(id)a0;
- (id)_metadataForPluginIdentifier:(id)a0;
- (void)_moveExtensionDataSourcesFromMessagesExtensionPluginToAppExtensions;
- (id)_pluginPlistPath:(id)a0;
- (id)_pluginsForWhichWeHaveMetadata;
- (void)_postDeferredInstalledAppsChangedNotificationIfNecessary;
- (void)_postInstalledAppsChangedNotification;
- (id)_proxyIdentifiersForPlugins;
- (void)_removePluginsForIdentifiers:(id)a0;
- (void)_removePluginsWithDelay;
- (void)_setPluginsToRemoveAndCallSelectorWithDelay:(id)a0;
- (BOOL)_shouldSkipUpdatingPluginBundleIdentifier:(id)a0;
- (void)_storeMetadata:(id)a0 _forPlugin:(id)a1;
- (void)_transferUpdated:(id)a0;
- (void)_updatePluginsForBundles:(id)a0;
- (void)_updatePluginsForExtensions:(id)a0 extensionPoint:(id)a1;
- (void)_updatePluginsForExtensions:(id)a0 extensionPoint:(id)a1 precachedBalloonAppExtensions:(id)a2;
- (id)conversationID:(id)a0 appID:(id)a1;
- (id)localParticipantIdentifierForAppID:(id)a0 conversationID:(id)a1;
- (id)recipientIDForRecipient:(id)a0 appID:(id)a1;
- (id)signpostLogHandle;
- (id)systemBundleIdentifierForPluginIdentifier:(id)a0;

@end
