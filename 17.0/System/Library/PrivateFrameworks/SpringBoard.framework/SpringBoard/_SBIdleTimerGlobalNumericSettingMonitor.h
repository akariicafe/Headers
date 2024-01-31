@class NSNumber;

@interface _SBIdleTimerGlobalNumericSettingMonitor : _SBIdleTimerGlobalSettingMonitor {
    NSNumber *_settingCache;
    id /* block */ _fetchSettingFromSource;
}

@property (readonly, nonatomic) NSNumber *numericValue;

- (void)dealloc;
- (void)_settingChanged:(id)a0;
- (BOOL)_updateCache;
- (id)formattedValue;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 delegate:(id)a1 updatingForNotification:(id)a2 fetchingWith:(id /* block */)a3;

@end
