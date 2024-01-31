@class PLSemaphore, PLXPCListenerOperatorComposition, PLEventForwardPowerStateEntry;

@interface PLSleepWakeAgent : PLAgent

@property unsigned int rootDomainConnect;
@property unsigned int pmNotifier;
@property struct IONotificationPort { } *systemPowerPortRef;
@property (retain) PLSemaphore *canSleepSemaphore;
@property double apSOCBasePower;
@property (retain) PLXPCListenerOperatorComposition *wakeGestureXPCListener;
@property struct __IOPMConnection { } *pmConnection;
@property (retain) PLEventForwardPowerStateEntry *lastSleepEntry;
@property (retain) PLEventForwardPowerStateEntry *lastWakeEntry;

+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)railDefinitions;
+ (id)entryEventForwardDefinitionPowerState;
+ (id)entryEventForwardDefinitionUserIdle;
+ (id)entryEventNoneDefinitionPowerNapConfig;
+ (id)entryEventPointDefinitionCurrentKernelWakeTime;
+ (id)entryEventPointDefinitionCurrentMachWakeTime;
+ (id)entryEventPointDefinitionKernelState;
+ (id)entryEventPointDefinitionScheduledWake;
+ (id)entryEventPointDefinitionWakeGesture;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (id)wakeReasons;
- (void).cxx_destruct;
- (short)getSleepState;
- (void)registerForUserIdleNotification;
- (void)logWakeEntries:(id)a0 withCurrentTime:(unsigned long long)a1;
- (void)systemPoweredOn;
- (void)capabilitiesChanged:(unsigned int)a0;
- (id)driverWakeReasons;
- (unsigned long long)getCurrentWakeTime;
- (id)getCurrentWakeTimeKey;
- (unsigned int)getIOPMRootDomain;
- (id)getLastSleepEntry;
- (id)getLastWakeEntry;
- (id)getPostWakeEntry:(unsigned long long)a0;
- (id)getSleepStatisticsApps;
- (unsigned long long)getSleepSubclassKey;
- (id)getThisWakeEntry:(id)a0 withCurrentWakeTime:(unsigned long long)a1 withIsDarkwake:(BOOL)a2 withDidSleep:(BOOL)a3;
- (void)logEventForwardUserIdle:(BOOL)a0;
- (void)logEventNonePowerNapConfig;
- (void)logEventPointCurrentScheduledWake;
- (void)logEventPointKernelState;
- (void)logEventPointWakeGesture:(id)a0;
- (void)logSleepEntries:(id)a0;
- (void)registerForCapabilitiesChange;
- (id)sleepTriggers;
- (id)wakeReasonFromIORegistry;
- (id)wakeReasonsAsNSString;
- (id)wakeType;

@end
