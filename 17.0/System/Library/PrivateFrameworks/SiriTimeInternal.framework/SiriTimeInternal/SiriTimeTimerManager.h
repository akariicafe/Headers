@class NSString, NSObject;
@protocol MTTimerManagerIntentSupport;

@interface SiriTimeTimerManager : NSObject <MTTimerManagerIntentSupport>

@property (retain, nonatomic) NSObject<MTTimerManagerIntentSupport> *timerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timerManagerWithEndpointUUIDString:(id)a0;

- (id)addTimer:(id)a0;
- (id)timers;
- (void)removeObserver:(id)a0;
- (id)removeTimer:(id)a0;
- (void).cxx_destruct;
- (id)updateTimer:(id)a0;
- (id)dismissTimerWithIdentifier:(id)a0;
- (id)addObserverForName:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (id)initWithEndpointUUID:(id)a0;

@end
