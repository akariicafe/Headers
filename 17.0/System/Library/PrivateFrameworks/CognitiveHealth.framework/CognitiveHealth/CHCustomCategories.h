@class CHCoreDataController, NSDictionary, NSError, NSPersistentContainer;

@interface CHCustomCategories : NSObject

@property (retain, nonatomic) NSError *fetchError;
@property (retain, nonatomic) CHCoreDataController *coreDataController;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSDictionary *intToUUIDMapping;

+ (void)databaseAssetAvailableStatusWithCompletion:(id /* block */)a0;
+ (void)downloadDatabaseAssetIfNeeded;
+ (void)downloadDatabaseAssetIfNeededWithCompletion:(id /* block */)a0;

- (id)resetTimer;
- (id)init;
- (void).cxx_destruct;
- (id)categoryForBundleId:(id)a0;
- (void)categoriesForBundleId:(id)a0 completion:(id /* block */)a1;
- (void)categoriesForBundleIdSet:(id)a0 completion:(id /* block */)a1;
- (id)customCategoryVersion;
- (id)extractDataFromCoreDataResult:(id)a0;
- (id)fetchCategoriesForBundleId:(id)a0;
- (id)loadMappingFromFile;
- (id)lockAssetAndReturnAssetPathForFile:(id)a0 withLockReason:(id)a1;
- (void)lockAssetWithLockReason:(id)a0;

@end
