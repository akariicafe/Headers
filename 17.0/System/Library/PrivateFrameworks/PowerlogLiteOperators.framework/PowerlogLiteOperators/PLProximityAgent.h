@class PLTimer, PLXPCListenerOperatorComposition, PLEntryNotificationOperatorComposition, NSDate;

@interface PLProximityAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *radioStateListener;
@property (retain) PLXPCListenerOperatorComposition *clientStateListener;
@property (retain) PLXPCListenerOperatorComposition *radioPowerListener;
@property (retain) PLXPCListenerOperatorComposition *timerStateListener;
@property (retain) PLXPCListenerOperatorComposition *maintenanceListener;
@property (retain) PLXPCListenerOperatorComposition *deviceConnectionListener;
@property (retain) PLXPCListenerOperatorComposition *radioHeartbeatListener;
@property (retain) PLTimer *runTimeAggregatorTimer;
@property unsigned long long numBTLines;
@property unsigned long long numConnects;
@property unsigned long long numDisconnects;
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) NSDate *lastSBCTimestamp;

+ (id)defaults;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (BOOL)isProximityLiteSupported;
+ (id)entryEventPointDefinitionRadioHeartbeat;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionClientState;
+ (id)entryEventIntervalDefinitionBinnedDeviceConnection;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionDeviceConnection;
+ (id)entryEventForwardDefinitionRadioState;
+ (id)entryEventPointDefinitionMaintainedDevices;
+ (id)entryEventBackwardDefinitionRadioPower;
+ (id)entryEventPointDefinitionTimerState;
+ (BOOL)isProximitySupported;

- (void)logEventForwardClientState:(id)a0;
- (void)logEventIntervalBinnedDeviceConnection;
- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventPointRadioHeartbeat:(id)a0;
- (void)logEventPointMaintenance:(id)a0;
- (void)logEventBackwardPowerStats:(id)a0;
- (void)logEventPointTimerState:(id)a0;
- (void)logEventForwardRadioState:(id)a0;
- (void).cxx_destruct;
- (void)logEventPointDeviceConnection:(id)a0;

@end
