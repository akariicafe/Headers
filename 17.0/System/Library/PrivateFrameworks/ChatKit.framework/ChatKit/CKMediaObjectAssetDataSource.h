@class NSString, NSArray, NSDictionary, NSURL;
@protocol PXDisplayAssetCollection;

@interface CKMediaObjectAssetDataSource : PXAssetsDataSource {
    BOOL _hasCheckedForMomentShareURL;
    BOOL _hasCollectedItemsCount;
}

@property (retain, nonatomic) NSString *parentChatItemGUID;
@property (retain, nonatomic) NSArray *chatItems;
@property (retain, nonatomic) NSDictionary *chatItemGUIDMap;
@property (retain, nonatomic) NSArray *displayAssets;
@property (retain, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, nonatomic) NSArray *mediaObjects;
@property (readonly, nonatomic) struct { unsigned long long photosCount; unsigned long long videosCount; unsigned long long othersCount; } assetTypeCounts;
@property (readonly, nonatomic) NSURL *momentShareURL;

- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_indexPathForMediaObject:(id)a0;
- (id)assetReferenceForMediaObject:(id)a0;
- (id)chatItemForAsset:(id)a0;
- (id)chatItemForAssetReference:(id)a0;
- (id)copyRefreshingAssetsAtIndexes:(id)a0;
- (id)initWithChatItems:(id)a0 parentChatItemGUID:(id)a1;
- (id)initWithChatItems:(id)a0 parentChatItemGUID:(id)a1 displayAssets:(id)a2 chatItemGUIDMap:(id)a3;
- (id)temporaryChatItemForAssetReference:(id)a0;

@end
