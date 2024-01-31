@class NSMutableDictionary, PLEntryNotificationOperatorComposition, NSObject, PLSemaphore;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

@interface PLNetworkAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *canSleep;
@property (retain) PLSemaphore *canSleepSemaphore;
@property (nonatomic) int wakeSocket;
@property (retain) NSMutableDictionary *lastIsExpensiveProperties;
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorCellular;
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorWiFi;
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorWired;
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorLoopback;
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorOther;
@property (retain) NSObject<OS_dispatch_queue> *nwPathMonitorQueue;

+ (id)defaults;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitionWake;
+ (id)accountingGroupDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitionUnattributedWake;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionNetworkIsExpensive;
+ (id)railDefinitions;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)handleNWPathUpdate:(id)a0;
- (void)logEventPointWake;
- (void).cxx_destruct;
- (void)logEventBackwardCumulativeNetworkUsage;
- (void)initKernelEvent;
- (id)NWPathMonitorWithInterface:(int)a0;

@end
