@class PHAssetCollection, PXTimelineCrop;

@interface PXTimelineDataItem : NSObject

@property (retain, nonatomic) PXTimelineCrop *suggestedCrop;
@property (retain, nonatomic) PHAssetCollection *assetCollection;

- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0 suggestedCrop:(id)a1;

@end
