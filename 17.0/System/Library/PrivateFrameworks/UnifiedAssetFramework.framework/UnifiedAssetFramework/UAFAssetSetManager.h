@interface UAFAssetSetManager : NSObject

+ (id)sysdiagnoseInformationWithError:(id *)a0;
+ (unsigned long long)downloadStatus:(id)a0 subscription:(id)a1;
+ (id)getKnownUsagesForAssetSet:(id)a0 usageType:(id)a1;
+ (id)getSubscriptions:(id)a0;
+ (void)subscribe:(id)a0 subscriptions:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)unsubscribe:(id)a0 subscriptions:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)updateAssets:(id)a0 subscription:(id)a1 policies:(id)a2 queue:(id)a3 progressWithStatus:(id /* block */)a4 completion:(id /* block */)a5;
+ (void)updateAssets:(id)a0 policies:(id)a1 queue:(id)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
+ (id)getAssetSetUsages:(id)a0 storeManager:(id)a1;
+ (unsigned long long)coalesceDownloadStatus:(id)a0;
+ (void)configureAssetDelivery:(id)a0 configurationManager:(id)a1;
+ (void)configureAssetDelivery:(id)a0 configurationManager:(id)a1 lockIfUnchanged:(BOOL)a2;
+ (unsigned long long)downloadStatus:(id)a0 subscription:(id)a1 storeManager:(id)a2 configurationManager:(id)a3;
+ (id)downloadStatusToString:(unsigned long long)a0;
+ (id)generateInformationWithError:(id *)a0;
+ (id)getAssetSetUsages:(id)a0;
+ (id)getConcurrentQueue;
+ (id)getSerialQueue;
+ (id)getSubscriptions:(id)a0 storeManager:(id)a1;
+ (id)getSystemUsageAssets:(id)a0;
+ (BOOL)subscribe:(id)a0 subscriptions:(id)a1 storeManager:(id)a2 configurationManager:(id)a3;
+ (BOOL)unsubscribe:(id)a0 subscriptions:(id)a1 storeManager:(id)a2 configurationManager:(id)a3;
+ (void)updateAssets:(id)a0 policies:(id)a1 queue:(id)a2 progress:(id /* block */)a3 completion:(id /* block */)a4 storeManager:(id)a5 configurationManager:(id)a6;
+ (void)updateAssets:(id)a0 subscription:(id)a1 policies:(id)a2 queue:(id)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
+ (void)updateAssets:(id)a0 subscription:(id)a1 policies:(id)a2 queue:(id)a3 progress:(id /* block */)a4 completion:(id /* block */)a5 storeManager:(id)a6 configurationManager:(id)a7;
+ (void)updateAssets:(id)a0 subscription:(id)a1 policies:(id)a2 queue:(id)a3 progressWithStatus:(id /* block */)a4 completion:(id /* block */)a5 storeManager:(id)a6 configurationManager:(id)a7;

@end
