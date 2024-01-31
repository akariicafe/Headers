@class NSDate, NSString, NSArray, NSURL, ICStoreHLSAssetInfo, NSDictionary, ICURLBag, ICStoreFinanceItemMetadata;

@interface ICStoreMediaResponseItem : NSObject <NSCopying> {
    NSDictionary *_itemResponseDictionary;
    ICURLBag *_urlBag;
}

@property (copy, nonatomic) NSDate *assetExpirationDate;
@property (readonly, nonatomic) long long storeAdamID;
@property (readonly, copy, nonatomic) NSURL *artworkURL;
@property (readonly, copy, nonatomic) NSURL *cancelDownloadURL;
@property (readonly, copy, nonatomic) NSString *downloadIdentifier;
@property (readonly, nonatomic) BOOL isPurchasedRedownload;
@property (readonly, copy, nonatomic) ICStoreFinanceItemMetadata *metadata;
@property (readonly, copy, nonatomic) NSDate *purchaseDate;
@property (readonly, copy, nonatomic) NSString *redownloadParameters;
@property (readonly, copy, nonatomic) NSArray *fileAssets;
@property (readonly, copy, nonatomic) ICStoreHLSAssetInfo *hlsAsset;
@property (readonly, nonatomic) id suzeLeaseID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)downloadableAsset;
- (id)downloadableAssetMatchingFlavorType:(long long)a0;
- (id)initWithItemResponseDictionary:(id)a0 urlBag:(id)a1;

@end
