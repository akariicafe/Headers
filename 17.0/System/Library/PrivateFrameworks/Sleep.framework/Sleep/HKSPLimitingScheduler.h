@class NSMutableSet;
@protocol HKSPMutexProvider, NAScheduler;

@interface HKSPLimitingScheduler : NSObject {
    id<NAScheduler> _orderPreservingScheduler;
    id<HKSPMutexProvider> _mutexProvider;
    NSMutableSet *_identifiers;
    BOOL _ignoreDelays;
}

- (id)initWithScheduler:(id)a0;
- (void).cxx_destruct;
- (void)_withLock:(id /* block */)a0;
- (void)scheduleTask:(id)a0;
- (id)initWithScheduler:(id)a0 mutexGenerator:(id /* block */)a1;
- (id)initWithScheduler:(id)a0 mutexGenerator:(id /* block */)a1 ignoreDelays:(BOOL)a2;

@end
