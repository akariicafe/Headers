@class NSString, HMMediaSystem, NSCondition, NSDictionary, NSMutableArray, HMHomeManager, MGDaemon;

@interface COHomeKitAdapter : NSObject <HMHomeManagerDelegate, HMHomeDelegatePrivate, _COHomeKitAudioDestinationControllerListenerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _ready;
}

@property (class, retain, nonatomic) COHomeKitAdapter *sharedInstance;

@property (readonly, nonatomic) HMHomeManager *homekit;
@property (readonly, nonatomic) NSCondition *condition;
@property (readonly, nonatomic) MGDaemon *mediaGroupsDaemon;
@property (copy, nonatomic) NSDictionary *audioDestinationControllerListeners;
@property (retain, nonatomic) HMMediaSystem *currentMediaSystem;
@property (readonly, nonatomic) NSMutableArray *mediaSystemUpdateHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prewarm;
- (id)addAlarm:(id)a0 toAccessory:(id)a1 inHome:(id)a2;
- (void)home:(id)a0 didRemoveZone:(id)a1;
- (BOOL)isReady;
- (id)init;
- (void)home:(id)a0 didAddZone:(id)a1;
- (id)settingsForKeyPath:(id)a0 onMediaObject:(id)a1;
- (id)accessoryWithUniqueIdentifier:(id)a0;
- (void)homeManager:(id)a0 didUpdateStatus:(unsigned long long)a1;
- (void)home:(id)a0 didAddRoom:(id)a1;
- (void)_removeAudioDestinationControllerListenerForAccessory:(id)a0 home:(id)a1;
- (id)registerMediaSystemUpdateHandler:(id /* block */)a0;
- (id)updateAlarm:(id)a0 onAccessory:(id)a1 inHome:(id)a2;
- (void)home:(id)a0 didAddAccessory:(id)a1;
- (id)accessoriesForSiriContextTargetReference:(id)a0;
- (id)removeAlarm:(id)a0 fromAccessory:(id)a1 inHome:(id)a2;
- (id)zoneForAccessory:(id)a0 inHome:(id)a1;
- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (void)_addAudioDestinationControllerListenerForAccessory:(id)a0 home:(id)a1;
- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void)homeManager:(id)a0 didUpdateAuthorizationStatus:(unsigned long long)a1;
- (id)identifiersForAccessoriesAssociatedWithAccessory:(id)a0 inHome:(id)a1;
- (void)home:(id)a0 didRemoveUser:(id)a1;
- (BOOL)hasOptedToHH2;
- (void)home:(id)a0 didAddUser:(id)a1;
- (void)unregisterMediaSystemUpdateHandler:(id)a0;
- (void)audioDestinationControllerDidUpdateForAccessory:(id)a0 inHome:(id)a1;
- (BOOL)isAlarmsCollectionSetting:(id)a0 forAccessory:(id)a1 inHome:(id)a2;
- (void)home:(id)a0 didAddMediaSystem:(id)a1;
- (id)accessoriesInRoom:(id)a0 inHome:(id)a1;
- (id)initWithHomeManager:(id)a0;
- (id)homeForAccessory:(id)a0;
- (void)home:(id)a0 didUpdateRoom:(id)a1 forAccessory:(id)a2;
- (void)home:(id)a0 didAddRoom:(id)a1 toZone:(id)a2;
- (void).cxx_destruct;
- (void)homeManager:(id)a0 didAddHome:(id)a1;
- (void)homeManagerDidUpdateCurrentHome:(id)a0;
- (void)home:(id)a0 didRemoveMediaSystem:(id)a1;
- (id)settingsForKeyPath:(id)a0 fromSettings:(id)a1;
- (id)allAccessoriesForSiriContextTargetReference:(id)a0;
- (id)settingsForKeyPath:(id)a0 onAccessory:(id)a1;
- (void)home:(id)a0 didRemoveRoom:(id)a1;
- (id)roomForAccessory:(id)a0 inHome:(id)a1;
- (id)initWithHomeManager:(id)a0 MediaGroupsDaemon:(id)a1;
- (id)alarmsCollectionForAccessory:(id)a0 inHome:(id)a1 isMediaSystem:(BOOL *)a2;
- (id)alarmsForAccessory:(id)a0 inHome:(id)a1;
- (id)accessoriesInMediaSystem:(id)a0 inHome:(id)a1;
- (void)_postUsersChangedNotificationForHome:(id)a0;
- (id)accessoriesInZone:(id)a0 inHome:(id)a1;
- (id)mediaSystemForAccessory:(id)a0 inHome:(id)a1;
- (void)_withLock:(id /* block */)a0;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)currentAccessory;

@end
