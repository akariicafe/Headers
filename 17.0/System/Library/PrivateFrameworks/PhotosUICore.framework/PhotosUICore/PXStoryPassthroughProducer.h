@class NSObject;
@protocol OS_dispatch_queue;

@interface PXStoryPassthroughProducer : NSObject

@property (readonly, nonatomic) BOOL prefersAsynchronousDelivery;
@property (readonly, nonatomic) BOOL allowsProgress;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id result;

- (id)init;
- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0 options:(unsigned long long)a1;
- (id)requestResultWithOptions:(unsigned long long)a0 resultHandler:(id /* block */)a1;

@end
