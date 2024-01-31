@class NSMutableArray;

@interface FSWorkQueue : NSObject

@property (retain) NSMutableArray *queues;
@property int index;

- (void)enqueue:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initQueueWithDomain:(id)a0 concurrency:(int)a1;

@end
