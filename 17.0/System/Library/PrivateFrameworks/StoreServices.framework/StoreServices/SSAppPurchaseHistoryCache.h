@class SSAccount, SSDatabaseCache, SSAppPurchaseHistoryDatabase;

@interface SSAppPurchaseHistoryCache : NSObject {
    SSAccount *_account;
    SSDatabaseCache *_databaseCache;
    SSAppPurchaseHistoryDatabase *_purchaseHistoryDatabase;
}

- (unsigned long long)purge:(unsigned long long)a0;
- (id)init;
- (id)initWithAccount:(id)a0;
- (id)allUncachedImages:(id)a0;
- (id)imageDataForAdamID:(id)a0;
- (unsigned long long)purgeableSpace;
- (void)clearCacheForAdamID:(id)a0;
- (BOOL)setImageData:(id)a0 forAdamID:(id)a1 imageToken:(id)a2;
- (void).cxx_destruct;
- (id)allUncachedImages;

@end
