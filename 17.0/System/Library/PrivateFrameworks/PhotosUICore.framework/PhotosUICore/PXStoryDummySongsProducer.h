@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface PXStoryDummySongsProducer : NSObject <PXStorySongsProducer> {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_queue_assets;
}

@property (nonatomic) unsigned long long logContext;

- (id)init;
- (void).cxx_destruct;
- (void)_queue_requestSongsWithOptions:(unsigned long long)a0 resultHandler:(id /* block */)a1;
- (id)requestSongsWithOptions:(unsigned long long)a0 resultHandler:(id /* block */)a1;

@end
