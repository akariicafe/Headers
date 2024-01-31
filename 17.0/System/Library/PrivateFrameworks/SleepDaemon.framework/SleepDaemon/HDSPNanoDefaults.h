@class HKSPAccumulator, NSString, HDSPEnvironment, NPSDomainAccessor, NPSManager, HDSPSyncedDefaultsConfiguration, NSObject;
@protocol HDSPSyncedUserDefaultsExternalChangeDelegate, OS_dispatch_queue;

@interface HDSPNanoDefaults : NSObject <HDSPNotificationObserver, HDSPSyncedUserDefaults> {
    HDSPEnvironment *_environment;
    HDSPSyncedDefaultsConfiguration *_configuration;
    NPSManager *_npsManager;
    NSObject<OS_dispatch_queue> *_npsDomainAccessorQueue;
    HKSPAccumulator *_notifyAccumulator;
}

@property (weak, nonatomic) id<HDSPSyncedUserDefaultsExternalChangeDelegate> delegate;
@property (readonly, nonatomic) NPSDomainAccessor *npsDomainAccessor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_registerForNotifications;
- (id)hksp_objectForKey:(id)a0;
- (void)hdsp_forceSynchronizeWithCompletion:(id /* block */)a0;
- (id)initWithEnvironment:(id)a0 configuration:(id)a1;
- (void)hksp_setFloat:(float)a0 forKey:(id)a1;
- (void)hksp_setBool:(BOOL)a0 forKey:(id)a1;
- (void)_resetNPSDomainAccessor;
- (id)hksp_dataForKey:(id)a0;
- (void)hksp_synchronize;
- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (id)hksp_dictionaryRepresentationForKeys:(id)a0;
- (id)_keysForChangeNotification:(id)a0;
- (void)hdsp_setExternalChangeDelegate:(id)a0;
- (void)_handleActivePairedDeviceDidChange:(id)a0;
- (void)_handleNanoPreferencesSync:(id)a0;
- (void).cxx_destruct;
- (id)hksp_dictionaryRepresentation;
- (void)hksp_reset;
- (void)hksp_removeObjectsForKeys:(id)a0;
- (void)hksp_removeObjectForKey:(id)a0;
- (void)hksp_setInteger:(long long)a0 forKey:(id)a1;
- (void)hksp_saveDictionary:(id)a0;
- (void)hksp_setObject:(id)a0 forKey:(id)a1;
- (void)hksp_synchronizeKeys:(id)a0;
- (float)hksp_floatForKey:(id)a0;
- (BOOL)hksp_boolForKey:(id)a0;
- (long long)hksp_integerForKey:(id)a0;

@end
