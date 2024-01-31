@class NSString, HDSPEnvironment;
@protocol HKSPMutexProvider, HDSPWakeDetectorDelegate;

@interface HDSPSleepScreenUnlockDetector : NSObject <HDSPSleepActionObserver, HDSPSleepModeObserver, HDSPWakeDetector, HDSPEnvironmentAware>

@property (nonatomic) unsigned long long numberOfTimesDismissed;
@property (readonly, nonatomic) id<HKSPMutexProvider> mutexProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isDetecting;
@property (readonly, nonatomic) unsigned long long type;
@property (weak, nonatomic) id<HDSPWakeDetectorDelegate> wakeDetectorDelegate;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)environmentWillBecomeReady:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;
- (void)environmentDidBecomeReady:(id)a0;
- (void)sleepLockWasDismissed;
- (void)startDetecting;
- (void)stopDetecting;
- (void)_resetCounter;
- (void).cxx_destruct;
- (void)_withLock:(id /* block */)a0;

@end
