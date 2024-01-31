@class NSObject, NSCache, PHMemory;
@protocol OS_dispatch_queue;

@interface PXStoryMemoryAutoCurationProducer : NSObject <PXStoryAutoCurationProducer> {
    NSCache *_curationCache;
}

@property (readonly, nonatomic) PHMemory *memory;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_optionsForAssets:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMemory:(id)a0;
- (id)requestCuratedAssetsWithOptions:(unsigned long long)a0 targetOverallDurationInfo:(struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x1; })a1 resultHandler:(id /* block */)a2;
- (id)requestCurationLengthsWithOptions:(unsigned long long)a0 allAssets:(id)a1 curatedAssets:(id)a2 resultHandler:(id /* block */)a3;

@end
