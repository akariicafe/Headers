@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCloudAccount : HMFObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) NSOperationQueue *queue;

- (void).cxx_destruct;
- (void)addAccountOperation:(id /* block */)a0;
- (id)initWithClientQueue:(id)a0;

@end
