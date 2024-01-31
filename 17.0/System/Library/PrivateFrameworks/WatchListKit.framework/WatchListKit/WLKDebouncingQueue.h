@class NSOperationQueue;

@interface WLKDebouncingQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *queue;
@property unsigned int delay;

- (id)init;
- (void).cxx_destruct;
- (void)addOperationWithBlock:(id /* block */)a0;

@end
