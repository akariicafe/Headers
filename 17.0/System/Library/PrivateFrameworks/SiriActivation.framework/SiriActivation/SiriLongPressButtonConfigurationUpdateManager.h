@class NSMapTable, NSUserDefaults;

@interface SiriLongPressButtonConfigurationUpdateManager : NSObject {
    NSUserDefaults *_internalUserDefaults;
}

@property (nonatomic) long long currentLongPressBehavior;
@property (nonatomic) BOOL monitoringForUpdates;
@property (retain, nonatomic) NSMapTable *delegatesBySource;

- (void)stopManagingAllConfigurations;
- (void)_addDelegate:(id)a0 forSource:(id)a1;
- (id)init;
- (void)dealloc;
- (void)stopManagingConfigurationFromSource:(id)a0;
- (id)userDefaults;
- (void)_setupKVOMonitoring;
- (void)_stopKVOMonitoring;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)startManagingConfigurationFromSource:(id)a0 withDelegate:(id)a1;

@end
