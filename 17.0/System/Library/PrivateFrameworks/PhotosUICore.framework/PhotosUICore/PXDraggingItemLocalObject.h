@class PXAssetReference;

@interface PXDraggingItemLocalObject : NSObject

@property (readonly, nonatomic) PXAssetReference *assetReference;
@property (readonly, nonatomic) BOOL needsImport;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssetReference:(id)a0;

@end
