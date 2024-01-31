@class NSObject;
@protocol OS_dispatch_queue;

@interface TUDispatcher : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)dispatcherWithIdentifier:(id)a0;
+ (id)dispatcherWithQueue:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (id)initWithQueue:(id)a0;
- (id)init;
- (id /* block */)qosUserInteractiveDispatchBlockForBlock:(id /* block */)a0;
- (void)dispatchSynchronousBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)boostQualityOfService;
- (void)dispatchAsynchronousBlock:(id /* block */)a0;

@end
