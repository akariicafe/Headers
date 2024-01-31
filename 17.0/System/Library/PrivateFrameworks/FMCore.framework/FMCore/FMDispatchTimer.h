@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FMDispatchTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (nonatomic) double leewayTimeInterval;

- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithQueue:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;

@end
