@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DTKTraceTapLocalTimerBasedEventProducer : NSObject <DTKTraceTapLocalEventProducer> {
    long long _currentThermalState;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_timer;
    int _token;
}

+ (BOOL)supportsConfig:(id)a0;

- (void)pause;
- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)unpause;
- (void)_emitThermalState:(long long)a0 currentState:(long long)a1;
- (unsigned long long)_processInfoThermalStateToCLTMPressureLevel:(long long)a0;

@end
