@class PHAssetCollection, NSArray, PHAsset;

@interface PXStoryPHAssetCollectionAssetsProducer : NSObject <PXStoryAssetsProducer>

@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) NSArray *referencePersons;
@property (readonly, nonatomic) PHAsset *keyAsset;
@property (readonly, nonatomic) unsigned long long options;

+ (BOOL)shouldEnableCurationForAssetCollection:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0 keyAsset:(id)a1 referencePersons:(id)a2 options:(unsigned long long)a3;
- (id)requestAssetsWithOptions:(unsigned long long)a0 storyQueue:(id)a1 resultHandler:(id /* block */)a2;

@end
