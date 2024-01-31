@class NSOperationQueue;

@interface __HMOperationQueueDelegateCaller : HMDelegateCaller {
    NSOperationQueue *_queue;
}

- (id)initWithQueue:(id)a0;
- (id)init;
- (id)initWithOperationQueue:(id)a0;
- (void)invokeBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
