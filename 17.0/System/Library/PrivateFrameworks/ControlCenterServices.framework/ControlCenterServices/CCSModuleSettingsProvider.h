@class NSArray, NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CCSModuleSettingsProvider : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSObject<OS_dispatch_source> *_configurationChangedSource;
    NSHashTable *_observers;
    NSArray *_orderedFixedModuleIdentifiers;
    NSArray *_orderedUserEnabledModuleIdentifiers;
    NSArray *_orderedUserEnabledFixedModuleIdentifiers;
    NSArray *_userDisabledModuleIdentifiers;
}

@property (readonly, copy, nonatomic) NSArray *orderedFixedModuleIdentifiers;
@property (readonly, copy, nonatomic) NSArray *orderedUserEnabledModuleIdentifiers;
@property (readonly, copy, nonatomic) NSArray *orderedUserEnabledFixedModuleIdentifiers;
@property (readonly, copy, nonatomic) NSArray *userDisabledModuleIdentifiers;

+ (void)initialize;
+ (id)sharedProvider;
+ (id)_configurationFileURL;
+ (id)_configurationDirectoryURL;
+ (BOOL)_continuousExposeEnabled;
+ (id)_defaultEnabledModuleOrder;
+ (id)_defaultFixedModuleIdentifiers;
+ (id)_defaultUserEnabledFixedModuleIdentifiers;
+ (id)_defaultUserEnabledModuleIdentifiers;
+ (id)_readSettingsWithVersion:(out unsigned long long *)a0;
+ (void)_writeOrderedIdentifiers:(id)a0 userEnabledFixedIdentifiers:(id)a1 userDisabledIdentifiers:(id)a2;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)setAndSaveOrderedUserEnabledModuleIdentifiers:(id)a0;
- (void)setAndSaveOrderedUserEnabledFixedModuleIdentifiers:(id)a0;
- (void)_queue_stopMonitoringConfigurationUpdates;
- (void)_queue_saveSettings;
- (void)setAndSaveOrderedUserEnabledModuleIdentifiers:(id)a0 previousOrderedUserEnabledModuleIdentifiers:(id)a1;
- (void)_queue_handleConfigurationFileUpdate;
- (void).cxx_destruct;
- (void)_queue_runBlockOnListeners:(id /* block */)a0;
- (void)_queue_loadSettings;
- (void)addObserver:(id)a0;
- (void)_queue_setAndSaveOrderedUserEnabledModuleIdentifiers:(id)a0 previousOrderedUserEnabledModuleIdentifiers:(id)a1;
- (void)_queue_sendConfigurationFileUpdateMessageToObservers;
- (void)_queue_startMonitoringConfigurationUpdates;

@end
