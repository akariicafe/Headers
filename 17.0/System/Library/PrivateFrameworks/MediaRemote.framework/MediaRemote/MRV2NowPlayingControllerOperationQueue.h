@class NSOperationQueue;

@interface MRV2NowPlayingControllerOperationQueue : NSObject {
    NSOperationQueue *_queue;
    BOOL _invalidated;
}

- (id)initWithQueue:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)addOperationWithBlock:(id /* block */)a0;

@end
