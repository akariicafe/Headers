@class NSMutableDictionary, SFDeviceAssetManager, NSObject;
@protocol OS_dispatch_queue;

@interface PCAssetManager : NSObject {
    NSMutableDictionary *_bundles;
    NSMutableDictionary *_alternateBundles;
    NSObject<OS_dispatch_queue> *_internalQueue;
    SFDeviceAssetManager *_sfAssetManager;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (class, readonly, nonatomic) PCAssetManager *sharedInstance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)alternateAssetQueryForAssetType:(long long)a0;
- (id)alternateBundleForAssetType:(long long)a0;
- (id)assetQueryForAssetType:(long long)a0;
- (id)assetQueryForAssetType:(long long)a0 alternate:(BOOL)a1;
- (id)assetRequestConfiguration:(long long)a0 alternate:(BOOL)a1;
- (id)bundleForAssetType:(long long)a0;
- (unsigned char)colorCodeForAssetType:(long long)a0;
- (void)handleDownloadCompletion:(id)a0 assetType:(long long)a1 error:(id)a2;
- (void)handleQueryResult:(id)a0 assetType:(long long)a1 productType:(id)a2 isFallback:(BOOL)a3 error:(id)a4 isAlternateBundle:(BOOL)a5;
- (id)imageForAssetType:(long long)a0;
- (id)imageNameForAssetType:(long long)a0;
- (void)initiateQuery:(id)a0 config:(id)a1;
- (void)prewarmAlternateBundleForAssetType:(long long)a0;
- (void)prewarmBundleForAssetType:(long long)a0;
- (void)prewarmBundleForAssetType:(long long)a0 alternate:(BOOL)a1;
- (unsigned int)productVersionForAssetType:(long long)a0;
- (void)sfAssetManagerEnsureStarted;

@end
