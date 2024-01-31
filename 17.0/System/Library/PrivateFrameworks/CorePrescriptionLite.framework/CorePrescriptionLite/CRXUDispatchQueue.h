@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CRXUDispatchQueue : NSObject

@property (class, readonly, nonatomic) CRXUDispatchQueue *main;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *name;

+ (id)serialQueueWithName:(id)a0;
+ (id)concurrentQueueWithName:(id)a0;
+ (id)dispatchQueueWithQueue:(id)a0;

- (void)dispatchSync:(id /* block */)a0;
- (void)dispatchAsync:(id /* block */)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithQueue:(id)a0 name:(id)a1;
- (void)afterDelay:(double)a0 dispatchAsync:(id /* block */)a1;
- (void)dispatchBarrierAsync:(id /* block */)a0;
- (void)dispatchBarrierSync:(id /* block */)a0;

@end
