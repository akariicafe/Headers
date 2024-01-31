@class NSArray, NSDictionary;
@protocol PUDisplayAssetCollection;

@interface PUCameraTransientAssetsDataSource : PUAssetsDataSource

@property (readonly, nonatomic) id<PUDisplayAssetCollection> _transientAssetCollection;
@property (readonly, nonatomic) NSArray *_assetUUIDs;
@property (readonly, nonatomic) NSDictionary *_assetsByUUID;
@property (readonly, nonatomic) NSDictionary *_representativeAssetsByBurstIdentifier;

- (id)assetReferenceAtIndexPath:(id)a0;
- (id)convertIndexPath:(id)a0 fromAssetsDataSource:(id)a1;
- (id)indexPathForAssetReference:(id)a0;
- (id)assetAtIndexPath:(id)a0;
- (id)assetCollectionAtIndexPath:(id)a0;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)indexPathForAssetCollection:(id)a0;
- (long long)numberOfSubItemsAtIndexPath:(id)a0;
- (id)startingAssetReference;
- (BOOL)isEmpty;
- (id)assetReferenceForAssetReference:(id)a0;
- (id)_uuidAtIndexPath:(id)a0;
- (id)initWithUUIDs:(id)a0 mapping:(id)a1 representativeMapping:(id)a2 inAssetCollection:(id)a3;

@end
