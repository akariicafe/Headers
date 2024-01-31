@class NSString, NSMutableDictionary, NPSDomainAccessor, NPSManager, NSObject;
@protocol OS_dispatch_queue, DNDSWorkoutTriggerManagerDataSource, DNDSBiomeTriggerManagerDataSource;

@interface DNDSWorkoutTriggerManager : NSObject <DNDSBiomeTriggerManager> {
    NSObject<OS_dispatch_queue> *_biomeQueue;
    NSMutableDictionary *_sinks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NPSDomainAccessor *_accessor;
    NPSManager *_npsManager;
    NSObject<OS_dispatch_queue> *_npsQueue;
}

@property (weak, nonatomic) id<DNDSWorkoutTriggerManagerDataSource, DNDSBiomeTriggerManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_refresh;
- (id)init;
- (void)dealloc;
- (void)_migrateWorkoutDNDNanoPreference;
- (void)pairedDeviceDidChange;
- (void)refresh;
- (void)_refreshForNanoPreferenceChange;
- (void)_setWorkoutDNDNanoPreferenceEnabled:(BOOL)a0;
- (void)_refreshWithMode:(id)a0 event:(id)a1;
- (void)_updateNanoPreferencesForRefreshWithModeConfiguration:(id)a0;
- (BOOL)_isWorkoutDNDNanoPreferenceEnabled;
- (void)_refreshMigratingIfNecessary;
- (void)_npsQueue_refreshForNanoPreferenceChange;
- (void).cxx_destruct;
- (BOOL)_isWorkoutTriggerEnabledForModeConfiguration:(id)a0;
- (void)refreshMigratingIfNecessary;
- (void)_configureWorkoutTriggerWithMode:(id)a0;
- (id)_accessor;
- (id)_assertionIdentifierForHealthKitWorkoutEvent:(id)a0;

@end
