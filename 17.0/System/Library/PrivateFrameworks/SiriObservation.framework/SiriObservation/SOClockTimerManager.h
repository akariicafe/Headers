@class MTTimerManager, AFInstanceContext, NSMutableDictionary;

@interface SOClockTimerManager : NSObject {
    AFInstanceContext *_instanceContext;
    NSMutableDictionary *_registeredObservations;
    MTTimerManager *_mtTimerManager;
}

+ (void)warmUp;

- (id)addTimer:(id)a0;
- (id)timers;
- (id)initWithInstanceContext:(id)a0;
- (void)checkIn;
- (id)init;
- (void)dealloc;
- (id)removeTimer:(id)a0;
- (void)addHandler:(id /* block */)a0 forEvent:(long long)a1;
- (void)removeHandlerForEvent:(long long)a0;
- (void).cxx_destruct;
- (id)updateTimer:(id)a0;
- (id)_registeredObservations;
- (id)dismissTimerWithIdentifier:(id)a0;

@end
