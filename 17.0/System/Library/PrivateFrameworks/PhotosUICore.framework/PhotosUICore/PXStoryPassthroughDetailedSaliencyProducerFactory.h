@protocol PXStoryDetailedSaliencyProducer;

@interface PXStoryPassthroughDetailedSaliencyProducerFactory : NSObject <PXStoryDetailedSaliencyProducerFactory>

@property (retain, nonatomic) id<PXStoryDetailedSaliencyProducer> detailedSaliencyProducer;

- (id)init;
- (void).cxx_destruct;
- (id)detailedSaliencyProducerForConfiguration:(id)a0;
- (id)initWithDetailedSaliencyProducer:(id)a0;

@end
