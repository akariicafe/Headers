@class PLIntervalData, PLEntryNotificationOperatorComposition;

@interface PLAggregateUsageService : PLService

@property (retain) PLEntryNotificationOperatorComposition *displayOnNotification;
@property (retain) PLEntryNotificationOperatorComposition *displayOffNotification;
@property (retain) PLEntryNotificationOperatorComposition *wakeEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *sleepEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *audioEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *batteryIsChargingEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *batteryExternalConnectedEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *chargingEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *lockStateEntryNotification;
@property (retain) PLIntervalData *intervalData;

+ (id)defaults;
+ (void)load;

- (void)handleExternalConnectedChange:(id)a0;
- (id)init;
- (void)registerForEntryNotifications;
- (void)initOperatorDependancies;
- (void)submitMetricsToAggd;
- (void)testService;
- (void)handleAudioStateChange:(id)a0;
- (void)updateSampledMetrics;
- (void)handleLockStateChange:(id)a0;
- (void)handleLargeTimeGap;
- (void).cxx_destruct;
- (void)instantiateMetrics;
- (int)numIntervalsToFill;
- (void)scheduleSubmissionAfter:(unsigned long long)a0;
- (void)initializeMetrics;
- (void)handleWakeStateChange:(id)a0 withState:(BOOL)a1;
- (void)handleChargingChange:(id)a0;
- (void)handleScreenStateChange:(id)a0 withState:(BOOL)a1;
- (void)handleConnectedChange:(id)a0;

@end
