@class NSString, WKContentRuleListStore, NSSet, NSMutableDictionary, WBSPersistentPropertyListStore, WBSWebExtensionsController, NSObject, NSMutableSet, WKUserContentController;
@protocol OS_dispatch_queue, SFContentBlockerManagerDelegate;

@interface SFContentBlockerManager : NSObject <WBSCloudExtensionStateProvider> {
    id _extensionMatchingContext;
    NSSet *_extensions;
    NSMutableSet *_observers;
    BOOL _lastExtensionDiscoveryHadError;
    NSMutableDictionary *_extensionsRecompiledAfterBackup;
    NSObject<OS_dispatch_queue> *_recompilationInformationAccessQueue;
    WBSPersistentPropertyListStore *_contentBlockerStateStore;
    BOOL _contentBlockerStateStoreRequiresReload;
    WKUserContentController *_userContentController;
    WBSWebExtensionsController *_webExtensionsController;
    id<SFContentBlockerManagerDelegate> _delegate;
}

@property (class, readonly, nonatomic) WKContentRuleListStore *contentBlockerStore;

@property (retain, nonatomic) WBSWebExtensionsController *webExtensionsController;
@property (readonly, nonatomic) NSSet *extensions;
@property (readonly, nonatomic) NSSet *enabledExtensions;
@property (readonly, nonatomic) unsigned long long recentlyInstalledExtensionCount;
@property (weak, nonatomic) id<SFContentBlockerManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *profileServerID;
@property (readonly, nonatomic) BOOL hasPopulatedExtensionsFromExtensionDiscoveryAtLeastOnce;

+ (void)getStateOfContentBlockerWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_contentBlockerLoaderConnection;
+ (void)_loadContentBlockerWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_createContentExtensionsDirectoryWithURL:(id)a0;
+ (void)reloadContentBlockerWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

- (void)loadDeclarativeNetRequestContentBlockerWithIdentifier:(id)a0 rules:(id)a1 completionHandler:(id /* block */)a2;
- (void)copyEnabledExtensionStateFromContentBlockerManager:(id)a0;
- (id)init;
- (void)setExtension:(id)a0 isEnabled:(BOOL)a1 byUserGesture:(BOOL)a2;
- (void)_addContentRuleList:(id)a0 forWebExtension:(id)a1;
- (void)removeObserver:(id)a0;
- (void)_contentBlockerEnabledStateDidChange:(id)a0;
- (void)_noteRecompilationWasAttemptedForExtension:(id)a0;
- (id)_findNewExtensionsAdded:(id)a0 toExistingExtensions:(id)a1;
- (id)extensionStateKeysToCopy;
- (void)_saveContentBlockerRecompilationInformation;
- (BOOL)_hasRecompilationBeenAttemptedForExtension:(id)a0;
- (id)_contentBlockerManagerForDefaultProfile;
- (void)_removeAllContentRuleLists;
- (void)setExtensionWithComposedIdentifier:(id)a0 isEnabledInCloud:(BOOL)a1;
- (void)_applyContentBlockerInPrivateBrowsing:(id)a0;
- (void)setExtension:(id)a0 isEnabledInPrivateBrowsing:(BOOL)a1;
- (void)reloadUserContentControllerReadingStateFromDisk:(BOOL)a0;
- (BOOL)extensionIsEnabled:(id)a0;
- (id)displayNameForExtension:(id)a0;
- (void)_loadContentBlockerRecompilationInformationIfNeeded;
- (BOOL)hasExtensionWithComposedIdentifier:(id)a0;
- (id)_contentBlockerStateURL;
- (void)_didDiscoverExtensions:(id)a0;
- (void)_contentBlockerStateInPrivateBrowsingDidChange:(id)a0;
- (void)unloadAndDeleteStateForAllExtensions;
- (void)_loadBuiltInContentBlockers;
- (BOOL)isContentBlockerAllowedInPrivateBrowsing:(id)a0;
- (void).cxx_destruct;
- (BOOL)_supportsExtensionDiscovery;
- (void)savePendingChangesBeforeTermination;
- (void)addContentRuleList:(id)a0 forExtension:(id)a1;
- (void)_loadContentBlockerStateFromDisk;
- (BOOL)_isManagingDefaultProfile;
- (void)_removeContentBlockerInPrivateBrowsing:(id)a0;
- (void)_loadDeclarativeNetRequestContentBlockers;
- (void)_recompileEnabledContentBlockersIfNeeded:(id)a0;
- (void)_populateExtensionsIfNecessaryUsingManagerForDefaultProfile;
- (id)_installationDateForExtension:(id)a0;
- (void)addObserver:(id)a0;
- (id)profileServerIDForStateManager:(id)a0;
- (id)_contentBlockerWithComposedIdentifier:(id)a0;
- (void)_beginContentBlockerDiscovery;
- (id)initWithUserContentController:(id)a0 webExtensionsController:(id)a1;
- (id)cloudExtensionStateForStateManager:(id)a0;
- (void)informObserversThatContentBlockerManagerExtensionListDidChange;
- (void)_commonInit;
- (void)_updateContentBlockerStateFromDiscoveredContentBlockers:(id)a0;

@end
