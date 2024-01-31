@class PLTimer, NSSet, NSMutableDictionary, NSDictionary, PLEntryNotificationOperatorComposition, PLCFNotificationOperatorComposition, NSMutableArray, PLNSNotificationOperatorComposition;

@interface PLPowerAssertionAgent : PLAgent

@property (retain) PLCFNotificationOperatorComposition *assertionNotification;
@property (retain) PLCFNotificationOperatorComposition *assertionBufferFullNotification;
@property (retain) PLTimer *assertionBufferFullNotificationRearmTimer;
@property (nonatomic) BOOL assertionBufferFullNotificationActive;
@property (retain) NSMutableArray *assertionBufferNotificationTracking;
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelNotificiations;
@property (retain) PLEntryNotificationOperatorComposition *wakeNotification;
@property (retain) PLEntryNotificationOperatorComposition *canSleepNotification;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property (retain) PLCFNotificationOperatorComposition *flushAssertionBufferCFNotification;
@property (retain) PLTimer *runQueryTimer;
@property (retain) PLTimer *assertionSnapShotTimer;
@property (nonatomic) BOOL assertionSnapshotTimerActive;
@property BOOL firstBufferDrain;
@property long long aggregateMaxPIDCount;
@property long long aggregteZeroDeltaCount;
@property (retain) NSMutableDictionary *assertionAggregatedLastSamplePLDataStructure;
@property (retain, nonatomic) NSMutableDictionary *assertionAggregatedLastSample;
@property (readonly) NSDictionary *startEndActionsToEnum;
@property (readonly) NSDictionary *assertTypeToEnum;
@property (readonly) NSSet *logAssertNameForActions;
@property (nonatomic) BOOL lastActivityOverflow;
@property (retain) NSMutableDictionary *assertionUUIDCache;
@property (retain) NSMutableDictionary *UUIDStartEntryCache;

+ (id)defaults;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitionAggregateReset;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionBufferStatus;
+ (id)entryEventForwardDefinitionAssertion;
+ (BOOL)shouldOptimizeSmallAssertions;
+ (id)entryEventPointDefinitionSnapshotReason;
+ (id)entryEventPointDefinitionTimedOutProcesses;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)setAssertionBufferFullNotificationActive:(BOOL)a0 withReason:(id)a1;
- (void)resetIOPMSetAssertionActivityAggregateWithReason:(short)a0 withPidCount:(int)a1;
- (id)bundleIDForAssertionProcessPID:(int)a0;
- (void)logEventForwardAssertionWithReason:(id)a0 asSnapshot:(BOOL)a1;
- (void)logAggregatedAssertionActivityPLDataStructure;
- (id)sanitizeAssertionNameForEntry:(id)a0;
- (void)logEventPointAggregateResetWithReason:(short)a0 withPidCount:(int)a1;
- (id)startEndActionsToEnumMapping;
- (void)logInterval:(id)a0;
- (void).cxx_destruct;
- (void)logAggregatedAssertionActivity;
- (void)logSnapshotAtMidnight:(id)a0;
- (void)logSnapshot:(id)a0;
- (void)logEventForwardAssertion;
- (void)resetIOPMSetAssertionActivityAggregatePLDataStructureWithReason:(short)a0 withPidCount:(int)a1;
- (id)assertTypeToEnumMapping;
- (void)checkAssertionBufferFullNotificationRate;

@end
