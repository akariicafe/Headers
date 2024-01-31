@class CSSearchQuery, CSTopHitSearchQuery, CSSearchableIndex, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PSCoreSpotlightIndexer : NSObject

@property (retain, nonatomic) CSSearchableIndex *prefsSearchableIndex;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *spotlightIndexQueue;
@property (retain, nonatomic) CSTopHitSearchQuery *searchQuery;
@property (retain, nonatomic) CSSearchQuery *hasItemsQuery;
@property (retain, nonatomic) NSMutableArray *indexFromControllerLog;
@property (readonly, nonatomic) BOOL needsIndex;
@property (readonly, nonatomic) NSDate *lastIndexDate;
@property (nonatomic) BOOL skipManifests;

+ (id)sharedInstance;
+ (char *)spotlightIndexQueueIdentifier;
+ (id)searchIndexIdentifier;

- (void)topHitSearchForString:(id)a0 keyboardLanguage:(id)a1 foundItemsHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)reindexSpecifiersIfNeeded:(id)a0 bundle:(id)a1 withURLPrefix:(id)a2 waitForCompletion:(BOOL)a3 setHasIndexed:(BOOL)a4 completion:(id /* block */)a5;
- (void)setLastIndexBuild:(id)a0;
- (void)setNeedsIndex;
- (void)indexThirdPartyAppsWithPrefix:(id)a0 completion:(id /* block */)a1;
- (void)hasfirstPartyIndexItems:(id /* block */)a0;
- (id)searchableItemsFromManifest:(id)a0 specifier:(id)a1 bundle:(id)a2;
- (id)searchableItemsFromSpecifiers:(id)a0 bundle:(id)a1 category:(id)a2 pathURL:(id)a3 withURLPrefix:(id)a4 parentSpecifierNames:(id)a5;
- (id)searchableItemsFromManifestsForSpecifier:(id)a0 bundle:(id)a1;
- (void)setLastIndexLanguage:(id)a0;
- (id)searchableItemClassIdentifier;
- (id)manifestsFromDirectory:(id)a0;
- (id)_bundleForSpecifier:(id)a0 parentBundle:(id)a1;
- (id)blacklistedControllers;
- (id)lastIndexLanguage;
- (void)_indexSearchableItems:(id)a0 completionHandler:(id /* block */)a1;
- (id)_keyValueDictionaryForURL:(id)a0;
- (id)searchableItemForSpecifier:(id)a0 bundleID:(id)a1 category:(id)a2 keywords:(id)a3 url:(id)a4 description:(id)a5;
- (id)_descriptionForSpecifierName:(id)a0 withParentSpecifierNames:(id)a1;
- (id)searchableThirdPartyItemClassIdentifier;
- (id)_specifiersPlistPathForSpecifier:(id)a0 bundle:(id)a1 parentBundle:(id)a2;
- (id)descriptionForCSSearchableItem:(id)a0;
- (void)indexManifestBundlesAtURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)indexManifestBundlesAtURLs:(id)a0 withCompletion:(id /* block */)a1;
- (id)_rankingHintScoreForURL:(id)a0;
- (id)_urlForSpecifier:(id)a0 identifier:(id)a1 category:(id)a2 childCategory:(id *)a3 prefix:(id)a4 path:(id *)a5 baseURL:(id)a6 shouldLinkToRow:(BOOL)a7;
- (void)indexSpecifiers:(id)a0 bundle:(id)a1 withURLPrefix:(id)a2 waitForCompletion:(BOOL)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)searchableItemAttributeSetClassIdenfitier;
- (id)_urlsFromManifestForSpecifier:(id)a0 bundle:(id)a1;
- (void)setHasIndexed;
- (void)deleteIndexWithDomainIdentifiers:(id)a0 completionBlock:(id /* block */)a1;
- (void)_deleteSpecifiers:(id)a0 bundle:(id)a1 category:(id)a2 pathURL:(id)a3 withURLPrefix:(id)a4 completion:(id /* block */)a5;
- (id)manifestFromSpecifiers:(id)a0 bundle:(id)a1 category:(id)a2 pathURL:(id)a3 withURLPrefix:(id)a4 parentSpecifierNames:(id)a5;
- (void)deleteSpecifiers:(id)a0 bundle:(id)a1 withURLPrefix:(id)a2 waitForCompletion:(BOOL)a3 completion:(id /* block */)a4;
- (void)setLastIndexDate:(id)a0;
- (id)_specifiersForSpecifier:(id)a0 bundle:(id)a1 parentBundle:(id)a2;
- (id)searchableFirstPartyItemClassIdentifier;
- (id)descriptionForCSSearchableItems:(id)a0;
- (id)csSearchableItemsFromSpecifiers:(id)a0 bundle:(id)a1 category:(id)a2 pathURL:(id)a3 withURLPrefix:(id)a4 parentSpecifierNames:(id)a5;
- (id)lastIndexBuild;
- (void)_indexChunkOfSearchableItems:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)controllerIsBlacklisted:(id)a0;
- (void)deleteIndexWithCompletionBlock:(id /* block */)a0;
- (void)performYukonManifestMigrationWithCompletion:(id /* block */)a0;
- (void)setNeedsIndex:(BOOL)a0;

@end
