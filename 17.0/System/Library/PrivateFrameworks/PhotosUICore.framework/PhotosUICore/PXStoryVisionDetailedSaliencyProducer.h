@class PXMediaProvider, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface PXStoryVisionDetailedSaliencyProducer : NSObject <PXStoryDetailedSaliencyProducer>

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) long long overlappingTileCount;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;

+ (id)effectiveSaliencyAreasFromTiledVisionSaliencyAreas:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_requestDetailedSaliencyForDisplayAssets:(id)a0 options:(unsigned long long)a1 progress:(id)a2 resultHandler:(id /* block */)a3;
- (id)initWithMediaProvider:(id)a0;
- (id)requestDetailedSaliencyForDisplayAssets:(id)a0 options:(unsigned long long)a1 resultHandler:(id /* block */)a2;
- (void)requestWorkingImageForDisplayAsset:(id)a0 resultHandler:(id /* block */)a1;

@end
