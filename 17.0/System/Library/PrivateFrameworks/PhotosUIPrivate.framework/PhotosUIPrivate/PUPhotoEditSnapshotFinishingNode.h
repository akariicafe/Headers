@class PUEditableMediaProviderAdjustmentDataNode, PUPhotoEditBaseMediaNode, PUEditableMediaProviderImageDataNode, PUEditableMediaProviderVideoAssetNode;

@interface PUPhotoEditSnapshotFinishingNode : PXRunNode

@property (readonly, nonatomic) PUEditableMediaProviderAdjustmentDataNode *adjustmentNode;
@property (readonly, nonatomic) PUPhotoEditBaseMediaNode *baseMediaNode;
@property (readonly, nonatomic) PUEditableMediaProviderImageDataNode *currentImageNode;
@property (readonly, nonatomic) PUEditableMediaProviderVideoAssetNode *currentVideoNode;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;

- (void)run;
- (void).cxx_destruct;
- (id)initWithAdjustmentNode:(id)a0 baseMediaNode:(id)a1 currentImageNode:(id)a2 currentVideoNode:(id)a3 completionHandler:(id /* block */)a4;

@end
