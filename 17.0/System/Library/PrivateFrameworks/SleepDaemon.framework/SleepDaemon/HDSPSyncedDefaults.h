@class NSString, HDSPEnvironment, NSMutableSet, HKSPAccumulator, HDSPSyncedDefaultsConfiguration;
@protocol HDSPSyncedUserDefaultsExternalChangeDelegate, HDSPSyncedUserDefaults, HKSPUserDefaults;

@interface HDSPSyncedDefaults : NSObject <HDSPSyncedUserDefaultsExternalChangeDelegate, HDSPSyncedUserDefaults> {
    HDSPEnvironment *_environment;
    HDSPSyncedDefaultsConfiguration *_configuration;
    id<HKSPUserDefaults> _localDefaults;
    id<HDSPSyncedUserDefaults> _nanoDefaults;
    id<HDSPSyncedUserDefaults> _cloudDefaults;
    NSMutableSet *_keysNeedingSynchronize;
    HKSPAccumulator *_syncAccumulator;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<HDSPSyncedUserDefaultsExternalChangeDelegate> delegate;
@property (readonly, nonatomic) BOOL syncDisabled;
@property (nonatomic) BOOL needsInitialSync;
@property (nonatomic) BOOL needsSyncFromCloud;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_nanoDefaultsDidReceiveExternalChangeForKeys:(id)a0;
- (id)hksp_objectForKey:(id)a0;
- (void)_syncCloudKitToLocal;
- (id /* block */)_cloudDefaultsProvider;
- (id)cloudKitDefaultsDictionaryRepresentation;
- (void)hdsp_forceSynchronizeWithCompletion:(id /* block */)a0;
- (void)_setDefaultForKey:(id)a0 setBlock:(id /* block */)a1;
- (void)_cloudDefaultsDidReceiveExternalChangeForKeys:(id)a0;
- (id)localDefaultsDictionaryRepresentation;
- (id)initWithEnvironment:(id)a0 configuration:(id)a1;
- (void)hksp_setFloat:(float)a0 forKey:(id)a1;
- (void)syncedUserDefaults:(id)a0 didChangeExternallyForKeys:(id)a1;
- (void)hksp_setBool:(BOOL)a0 forKey:(id)a1;
- (void)_syncKeysFromCloudKit:(id)a0;
- (void)_throttled_synchronizeKeys:(id)a0;
- (void)_syncLocalToCloudKit;
- (id)hksp_dataForKey:(id)a0;
- (void)saveCloudDataVersion;
- (void)hksp_synchronize;
- (id)hksp_dictionaryRepresentationForKeys:(id)a0;
- (void)hdsp_setExternalChangeDelegate:(id)a0;
- (void)_nanoDefaultsDidReceiveExternalChange;
- (void)_hksp_synchronizeKeys:(id)a0;
- (id)_defaultsForKey:(id)a0;
- (void)resetCloudData;
- (void)_cloudDefaultsDidReceiveExternalChange;
- (void)_differentialCloudKitSync;
- (void).cxx_destruct;
- (id)hksp_dictionaryRepresentation;
- (void)_initialCloudKitSync;
- (void)hksp_reset;
- (void)hksp_removeObjectsForKeys:(id)a0;
- (id)initWithEnvironment:(id)a0 configuration:(id)a1 nanoDefaultsProvider:(id /* block */)a2 cloudDefaultsProvider:(id /* block */)a3 throttleInterval:(double)a4;
- (void)saveDataVersion;
- (id /* block */)_nanoDefaultsProvider;
- (void)_setDefaultForKey:(id)a0 setBlock:(id /* block */)a1 syncToCloudKit:(BOOL)a2;
- (void)hksp_removeObjectForKey:(id)a0;
- (void)hksp_setInteger:(long long)a0 forKey:(id)a1;
- (void)hksp_saveDictionary:(id)a0;
- (void)_differentialCloudKitSyncForKeySet:(id)a0;
- (void)hksp_setObject:(id)a0 forKey:(id)a1;
- (void)hksp_synchronizeKeys:(id)a0;
- (void)hksp_removeObjectsForKeys:(id)a0 syncToCloudKit:(BOOL)a1;
- (float)hksp_floatForKey:(id)a0;
- (BOOL)hksp_boolForKey:(id)a0;
- (void)hksp_saveDictionary:(id)a0 syncToCloudKit:(BOOL)a1;
- (long long)hksp_integerForKey:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (void)_syncKeysToCloudKit:(id)a0;
- (void)syncedUserDefaultsDidChangeExternally:(id)a0;

@end
