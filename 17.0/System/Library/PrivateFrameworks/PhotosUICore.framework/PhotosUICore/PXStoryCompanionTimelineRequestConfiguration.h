@class PHAssetCollection, NSObject;
@protocol OS_dispatch_queue;

@interface PXStoryCompanionTimelineRequestConfiguration : NSObject <NSCopying>

@property (nonatomic) long long songsProducerKind;
@property (retain, nonatomic) PHAssetCollection *assetCollection;
@property (nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAssetCollection:(id)a0 viewportSize:(struct CGSize { double x0; double x1; })a1;

@end
