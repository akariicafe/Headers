@class NSString;
@protocol PXDisplayAssetCollection, PXDisplayAsset;

@interface PXAssetReference : PXSectionedObjectReference <PXAssetReferenceProtocol>

@property (readonly, nonatomic) id asset;
@property (readonly, nonatomic) id assetCollection;
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; } simpleIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;


@end
