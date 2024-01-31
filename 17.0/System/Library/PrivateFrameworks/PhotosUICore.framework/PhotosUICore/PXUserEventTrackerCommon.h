@interface PXUserEventTrackerCommon : NSObject {
    id _currentSessionSender;
    unsigned long long _currentSessionSource;
    unsigned long long _currentSessionTab;
    double _currentLogStateStartDate;
    double _currentLogSubStateStartDate;
    double _currentLogSubSubStateStartDate;
    BOOL _applicationIsInForeground;
}

@property (nonatomic) unsigned long long currentLogState;
@property (nonatomic) unsigned long long currentLogSubState;
@property (nonatomic) unsigned long long currentLogSubSubState;
@property (nonatomic, setter=setCurrentTab:) unsigned long long currentTab;
@property (readonly, nonatomic) BOOL enableDetailedDebugLogging;

- (void)applicationWillEnterForeground:(id)a0;
- (id)init;
- (void)logViewCountForLogSubSubState:(unsigned long long)a0;
- (void)willViewMemoriesFeedView;
- (void)logViewCountForLogState:(unsigned long long)a0;
- (void)logCounterValuesForLogState:(unsigned long long)a0 duration:(double)a1;
- (void)didFinishViewingMemoriesFeedView;
- (void).cxx_destruct;
- (BOOL)isEventSourceSenderAppearingForTheFirstTime:(id)a0;
- (void)logViewCountForLogSubState:(unsigned long long)a0;
- (void)logImpressionCountForEventSource:(unsigned long long)a0;
- (void)logCounterValuesForLogSubSubState:(unsigned long long)a0 duration:(double)a1;
- (void)logCounterValuesForLogSubState:(unsigned long long)a0 duration:(double)a1;
- (void)applicationDidEnterBackground:(id)a0;
- (id)PXLogSubStateDescription:(unsigned long long)a0;
- (void)eventSourceDidDisappear:(unsigned long long)a0 sender:(id)a1;
- (id)PXLogStateDescription:(unsigned long long)a0;
- (id)PXLogSubSubStateDescription:(unsigned long long)a0;
- (void)_setCurrentSessionSource:(unsigned long long)a0 sender:(id)a1 isInForeground:(BOOL)a2;
- (void)aggregateSetMemoryFeedNumberOfDaysSinceLastVisit:(long long)a0;
- (void)eventSourceDidChange:(unsigned long long)a0 sender:(id)a1;
- (void)eventSourceWillAppear:(unsigned long long)a0 sender:(id)a1;
- (void)setCurrentLogState:(unsigned long long)a0 logSubState:(unsigned long long)a1 logSubSubState:(unsigned long long)a2 forceLogging:(BOOL)a3;

@end
