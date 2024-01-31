@class NSSet, NSArray;

@interface _LTDLanguageAssetService : NSObject

@property (class, readonly) NSSet *_selectedIdentifiers;
@property (class, copy) NSArray *selectedLocales;

+ (void)availableAssetsWithCompletion:(id /* block */)a0;
+ (void)flushCache;
+ (id)queue;
+ (id)_selectedAssets;
+ (void)_purgeUnusedAssetsWithCompletion:(id /* block */)a0;
+ (void)assetsWithCompletion:(id /* block */)a0;
+ (void)assetsWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
+ (id)filterAssets:(id)a0 options:(unsigned long long)a1;
+ (void)installedAssetsWithCompletion:(id /* block */)a0;
+ (void)selectedAssetsWithCompletion:(id /* block */)a0;
+ (void)setAssets:(id)a0 options:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)setInstalledLocales:(id)a0 useCellular:(BOOL)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;

@end
