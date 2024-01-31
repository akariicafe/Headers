@class CKDLogicalDeviceContext;

@interface CKDSQLiteCache : CKSQLite

@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext;

+ (id)cacheDirectory;
+ (id)dbFileName;
+ (id)cacheDatabaseSchema;
+ (id)sharedCache;

- (id)initWithDeviceContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithCacheDir:(id)a0;
- (id)initOrExitWithPath:(id)a0 isSharedCache:(BOOL)a1;

@end
