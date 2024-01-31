@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CalIdleTimer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _timeoutBlock;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _timeoutInSeconds;
    unsigned long long _leewayInSeconds;
}

- (void)start;
- (void)poke;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithQueue:(id)a0 timeoutInSeconds:(unsigned long long)a1 leewayInSeconds:(unsigned long long)a2 timeoutBlock:(id /* block */)a3;

@end
