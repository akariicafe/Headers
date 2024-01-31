@class NSObject;
@protocol OS_dispatch_queue;

@interface CATConcreteTimerSource : NSObject <CATTimerSource> {
    NSObject<OS_dispatch_queue> *mWorkQueue;
}

- (id)init;
- (void).cxx_destruct;
- (id)scheduleInfiniteTimerWithIdentifier:(id)a0 timeInterval:(double)a1 queue:(id)a2 fireHandler:(id /* block */)a3;
- (id)scheduleOneShotTimerWithIdentifier:(id)a0 timeInterval:(double)a1 queue:(id)a2 fireHandler:(id /* block */)a3;
- (id)scheduleRepeatTimerWithIdentifier:(id)a0 timeInterval:(double)a1 queue:(id)a2 totalFires:(unsigned long long)a3 fireHandler:(id /* block */)a4;

@end
