@class PLMonotonicTimer, NSNumber, NSString, NSMutableDictionary, PLXPCResponderOperatorComposition, PLCFNotificationOperatorComposition, NSMutableArray;

@interface PLAggregateDictionaryService : PLService {
    double remainderUnpluggedEnergy;
    double remainderUnpluggedTime;
}

@property (retain) NSMutableArray *registeredNotifications;
@property (retain) PLMonotonicTimer *dailyTaskTimer;
@property (retain) PLCFNotificationOperatorComposition *blmAggregateCFNotification;
@property struct AggState { int state; double level; double timestamp; } last_state;
@property BOOL firstScreenOnAfterWake;
@property (retain) NSNumber *currentMachWakeTime;
@property (retain) NSString *wakeReasons;
@property (retain) NSString *wakeReasonString;
@property (retain) NSMutableDictionary *validReasonsDictionary;
@property (retain) NSMutableDictionary *localCache;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsForceListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsTodayListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsTodayForceListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics24hrsListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics24hrsForceListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics1hrListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics1hrForceListener;
@property (retain) PLXPCResponderOperatorComposition *metricSummarizationStateResponder;

+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventNoneDefinitionSessionsFile;
+ (BOOL)metrickitClientsAvailable;

- (void)registerForMailNotifications;
- (void)setupMetricsAggregation;
- (id)init;
- (void)registerForCalendarNotifications;
- (void)logAggregateUIKitActivityKey:(id)a0 withInfo:(id)a1 AggDKey:(id)a2;
- (void)initOperatorDependancies;
- (void)logDuration:(double)a0 asDistribution:(id)a1;
- (void)registerForSpringboardNotifications;
- (void)registerForApplicationNotifications;
- (void)registerForBatteryNotifications;
- (void)initValidReasonsDictionary;
- (void)registerForBacklightLatencyNotifications;
- (void)createMetricsFile:(id)a0;
- (void)setupMetricsListeners;
- (void)registerForLocationNotifications;
- (void)updateAggregateStateWithEntry:(id)a0;
- (void)logEventNoneSessionsFile;
- (void)logAggregateUIKitKeyboardActivityKey:(id)a0 withInfo:(id)a1 AggDKey:(id)a2;
- (void)addToDurationScalarKey:(id)a0 withDuration:(double)a1;
- (void).cxx_destruct;
- (void)registerForSCDynamicStoreNotifications;
- (void)registerForBluetoothNotifications;
- (void)registerForSafariNotifications;
- (void)registerForCameraNotifications;
- (void)registerForUIKitNotifications;
- (void)registerForAudioNotifications;
- (unsigned long long)bucketWakeTime:(unsigned long long)a0;
- (void)registerForAssertionNotifications;
- (unsigned long long)abstimeToNanosec:(unsigned long long)a0;
- (void)registerForVideoNotifications;

@end
