@class NSCache, NSArray, NSString, CKContainer, CKDatabase;

@interface WFGallerySessionManager : NSObject

@property (class, readonly, nonatomic) WFGallerySessionManager *sharedManager;

@property (readonly, nonatomic) CKDatabase *database;
@property (readonly, copy, nonatomic) NSArray *preferredLocalizations;
@property (readonly, copy, nonatomic) NSString *currentRegion;
@property (readonly, copy, nonatomic) NSString *currentIdiom;
@property (readonly, nonatomic) NSCache *workflowSearchCache;
@property (readonly, nonatomic) NSCache *collectionSearchCache;
@property (readonly, nonatomic) NSCache *pageCache;
@property (readonly, nonatomic) NSCache *workflowCache;
@property (readonly, nonatomic) NSCache *bannerImageCache;
@property (readonly, nonatomic) BOOL performExpensiveFetchOperations;
@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) NSString *containerDescription;

+ (id)currentDeviceIdiom;
+ (id)defaultPreferredLocalizations;

- (id)init;
- (long long)version;
- (void).cxx_destruct;
- (id)getWorkflowForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)loadWorkflowInGalleryWorkflow:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteBanner:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)bannerIsRestricted:(id)a0;
- (BOOL)collectionIsRestricted:(id)a0;
- (id)collectionWithoutRestrictedContent:(id)a0;
- (void)createBannerWithName:(id)a0 detailPage:(id)a1 iphone2xImage:(id)a2 iphone3xImage:(id)a3 ipadImage:(id)a4 completionHandler:(id /* block */)a5;
- (void)createCollection:(id)a0 small2xImage:(id)a1 large2xImage:(id)a2 small3xImage:(id)a3 large3xImage:(id)a4 completionHandler:(id /* block */)a5;
- (id)createItemRequest;
- (void)deleteCollection:(id)a0 completionHandler:(id /* block */)a1;
- (void)getCollectionForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getCollectionForPersistentIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getCurrentUserIdentifierWithCompletionHandler:(id /* block */)a0;
- (void)getHomeWithCompletionHandler:(id /* block */)a0;
- (void)getHomeWithPreferredLanguages:(id)a0 completionHandler:(id /* block */)a1;
- (id)getImageForBanner:(id)a0 size:(long long)a1 completionHandler:(id /* block */)a2;
- (void)getPageWithID:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithContainer:(id)a0 preferredLocalizations:(id)a1 currentRegion:(id)a2 currentIdiom:(id)a3 performExpensiveFetchOperations:(BOOL)a4;
- (id)pageWithoutRestrictedContent:(id)a0;
- (id)preferredPageInPages:(id)a0 preferredLanguages:(id)a1;
- (id)queryFilterForTokenizedKey:(id)a0 query:(id)a1;
- (void)reportWorkflow:(id)a0 iCloudIdentifier:(id)a1 reportReason:(id)a2 reportMessage:(id)a3 completionHandler:(id /* block */)a4;
- (id)searchCollections:(id)a0 completionHandler:(id /* block */)a1;
- (id)searchUsingWebServicesForItem:(Class)a0 query:(id)a1 queryFilter:(id)a2 completionHandler:(id /* block */)a3;
- (id)searchWorkflows:(id)a0 completionHandler:(id /* block */)a1;
- (id)searchWorkflowsAndCollections:(id)a0 completionHandler:(id /* block */)a1;
- (id)sortAndFilterSearchResults:(id)a0 query:(id)a1;
- (id)unshareSharedShortcut:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateBanner:(id)a0 withName:(id)a1 detailPage:(id)a2 iphone2xImage:(id)a3 iphone3xImage:(id)a4 ipadImage:(id)a5 completionHandler:(id /* block */)a6;
- (void)updateCollection:(id)a0 small2xImage:(id)a1 large2xImage:(id)a2 small3xImage:(id)a3 large3xImage:(id)a4 completionHandler:(id /* block */)a5;
- (id)updateItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)updatePage:(id)a0 withName:(id)a1 banners:(id)a2 collections:(id)a3 completionHandler:(id /* block */)a4;
- (void)updateWorkflow:(id)a0 withName:(id)a1 shortDescription:(id)a2 longDescription:(id)a3 workflow:(id)a4 completionHandler:(id /* block */)a5;
- (void)uploadWorkflow:(id)a0 withName:(id)a1 shortDescription:(id)a2 longDescription:(id)a3 private:(BOOL)a4 completionHandler:(id /* block */)a5;
- (BOOL)workflowIsRestricted:(id)a0;

@end
