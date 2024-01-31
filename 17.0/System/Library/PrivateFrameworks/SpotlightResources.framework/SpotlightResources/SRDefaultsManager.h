@class SRTrialConfiguration, NSString, NSHashTable, NSMutableDictionary, SRAssetConfiguration, NSMutableSet, NSBundle, NSObject;
@protocol OS_dispatch_queue;

@interface SRDefaultsManager : NSObject <DDSAssetCenterDelegate> {
    SRAssetConfiguration *_assetConfig;
    SRTrialConfiguration *_trialConfig;
    NSMutableDictionary *_assets;
    NSMutableDictionary *_parameters;
    NSMutableSet *_fetchedLocales;
    NSHashTable *_delegates;
}

@property (readonly, nonatomic) NSBundle *customBundle;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ddsQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *defaultsQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegatesQueue;
@property (nonatomic) BOOL forceLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removeKey:(id)a0;
+ (void)setVersionWithValue:(long long)a0;
+ (void)setDefaultWithKey:(id)a0 value:(id)a1;
+ (long long)version;
+ (id)defaultValueWithKey:(id)a0;
+ (id)identifier;
+ (void)removeDefaults;
+ (id)userDefaults;
+ (id)defaultProperties;
+ (id)sharedDefaultsManager;

- (void)registerDelegate:(id)a0;
- (id)init;
- (void)dealloc;
- (void)setOptions:(id)a0;
- (void)didUpdateAssetsWithType:(id)a0;
- (void)unregisterDelegate:(id)a0;
- (void)notifyObservers;
- (void).cxx_destruct;
- (id)resourceBundle;
- (void)_loadAssets:(id)a0 shouldUpdate:(BOOL)a1;
- (void)_unloadAssetsForLocale:(id)a0;
- (void)addFetchForLocale:(id)a0;
- (id)assetBundleForLocale:(id)a0 client:(id)a1;
- (id)currentAssetTypes;
- (id)currentNamespaceDescription;
- (id)currentNamespaces;
- (id)currentNamespacesForClient:(id)a0;
- (id)defaultAssetPathForContentType:(id)a0 contentName:(id)a1;
- (BOOL)didFetchForLanguage:(id)a0;
- (void)didUpdateTrialNamespace:(id)a0;
- (id)fetchedLocales;
- (void)loadDefaultsForLocale:(id)a0;
- (void)loadDefaultsFromDefaultAssets:(id)a0;
- (void)loadFactorsAtPath:(id)a0 namespaceId:(id)a1;
- (id)parametersOfNamespaceWithName:(id)a0;
- (id)parametersOfNamespaceWithName:(id)a0 client:(id)a1;
- (void)removeFetchForLanguage:(id)a0;
- (void)removeFetchForLocale:(id)a0;
- (void)requestAssetsForLanguages:(id)a0;
- (void)requestAssetsForLanguages:(id)a0 resourcePath:(id)a1;
- (void)unloadDefaultsForLocale:(id)a0;
- (void)updateFetchedLocales:(id)a0;
- (void)updateParameter:(id)a0 inNamespace:(id)a1 withValue:(id)a2;

@end
