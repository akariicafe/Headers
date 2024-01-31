@class COObserverSet, NSXPCConnection, HMAccessory, COHomeKitAccessoryMemento, NSUUID, NSString;
@protocol COTimerManagerConnectionProvider;

@interface COTimerManager : NSObject <COTimerManagerClientInterface, COObservable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HMAccessory *accessory;
@property (weak, nonatomic) NSXPCConnection *lastConnection;
@property (readonly, nonatomic) id<COTimerManagerConnectionProvider> provider;
@property (readonly, nonatomic) COObserverSet *observers;
@property (readonly, copy, nonatomic) id cluster;
@property (readonly, copy, nonatomic) COHomeKitAccessoryMemento *memento;
@property (readonly, nonatomic) NSUUID *instanceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleNotification:(id)a0;
- (id)addTimer:(id)a0;
- (id)timers;
- (id)_timersForAccessory:(id)a0;
- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)initWithConnectionProvider:(id)a0;
- (id)removeTimer:(id)a0;
- (id)timersForAccessoryMementos:(id)a0;
- (void)_registerObserverWithName:(id)a0;
- (void).cxx_destruct;
- (void)postNotificationName:(id)a0 withUserInfo:(id)a1 callback:(id /* block */)a2;
- (id)timersForAccessories:(id)a0;
- (id)timersForAccessory:(id)a0;
- (BOOL)_canDispatchForAssociatedAccessory;
- (id)updateTimer:(id)a0;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (void)_lostConnectionToService;
- (id)dismissTimerWithIdentifier:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (id)initForAccessory:(id)a0 withConnectionProvider:(id)a1;
- (id)addObserverForName:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;

@end
