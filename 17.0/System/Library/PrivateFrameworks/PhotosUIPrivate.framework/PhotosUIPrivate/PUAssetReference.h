@class NSString, NSIndexPath, PXAssetReference;
@protocol PUDisplayAsset, PUDisplayAssetCollection;

@interface PUAssetReference : NSObject <NSCopying, PXAssetReferenceProtocol>

@property (readonly, nonatomic) id<PUDisplayAsset> asset;
@property (readonly, nonatomic) id<PUDisplayAssetCollection> assetCollection;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) NSString *dataSourceIdentifier;
@property (readonly, nonatomic) PXAssetReference *pxAssetReference;
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; } simpleIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAsset:(id)a0 assetCollection:(id)a1 indexPath:(id)a2 dataSourceIdentifier:(id)a3;

@end
