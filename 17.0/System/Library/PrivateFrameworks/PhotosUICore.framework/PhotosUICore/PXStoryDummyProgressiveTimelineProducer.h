@class PXStoryDummyTimelineProducer, NSObject;
@protocol OS_dispatch_queue;

@interface PXStoryDummyProgressiveTimelineProducer : NSObject <PXStoryTimelineProducer>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) PXStoryDummyTimelineProducer *timelineProducer;
@property (nonatomic) long long numberOfIterations;
@property (nonatomic) double delayBetweenIterations;

- (id)init;
- (void).cxx_destruct;
- (id)requestTimelineWithConfiguration:(id)a0 options:(unsigned long long)a1 resultHandler:(id /* block */)a2;

@end
