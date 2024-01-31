@class NSObject, NSString, WCRAppleAllowList, _TtC22WebContentRestrictions15BloomFilterShim, WCRAutoAssetClient;
@protocol OS_dispatch_queue;

@interface WCRBloomFilter : NSObject

@property (retain, nonatomic) WCRAutoAssetClient *autoAsset;
@property (retain, nonatomic) NSString *localPath;
@property (retain) _TtC22WebContentRestrictions15BloomFilterShim *bloomFilter;
@property (retain) WCRAppleAllowList *appleAllowList;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reloadAssetQueue;
@property BOOL useCipherML;

+ (id)_matchingStringsForDomain:(id)a0;
+ (id)_matchingStringsForURL:(id)a0;
+ (id)_nameOfNewestFile:(id)a0;
+ (BOOL)_shouldBlock:(id)a0 withBloomFilter:(id)a1 useCipherML:(BOOL)a2;
+ (void)reportAnalyticsBloomFilterBlocked;
+ (void)reportAnalyticsBloomFilterVersion:(id)a0 withAppleAllowListVersion:(id)a1;

- (id)init;
- (void)_loadAssets;
- (BOOL)shouldBlock:(id)a0;
- (void).cxx_destruct;
- (id)initFromFile:(id)a0;
- (void)_loadFallbackAssets;
- (void)_loadMobileAssets;

@end
