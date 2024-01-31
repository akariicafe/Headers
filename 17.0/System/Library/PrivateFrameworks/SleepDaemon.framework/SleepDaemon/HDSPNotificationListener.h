@class HDSPEnvironment, NSMutableDictionary, HKSPObserverSet, NSString;

@interface HDSPNotificationListener : NSObject <HDSPEnvironmentAware>

@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly, nonatomic) NSMutableDictionary *launchNotificationRegistrations;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } launchNotificationRegistrationLock;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (void)environmentDidBecomeReady:(id)a0;
- (void)startListening;
- (void)_handleNotificationWithName:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)unregisterForLaunchNotificationWithName:(const char *)a0 key:(id)a1;
- (void)registerForLaunchNotificationWithName:(const char *)a0 key:(id)a1;
- (void)addObserver:(id)a0;
- (void)_registerForStream:(id)a0;
- (void)_withLock:(id /* block */)a0;

@end
