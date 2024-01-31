@protocol PXDisplayAssetFetchResult, PXDisplayAsset;

@interface PXStoryAssetsConfiguration : NSObject

@property (readonly, nonatomic) id<PXDisplayAsset> keyAsset;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> curatedAssets;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> allAssets;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithKeyAsset:(id)a0 curatedAssets:(id)a1 allAssets:(id)a2;

@end
