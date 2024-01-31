@class PLTimer, NSMutableDictionary, PLXPCListenerOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLBLMDebugService : PLService

@property (retain) PLXPCListenerOperatorComposition *xpcListenerBLMDebugTrigger;
@property (retain) PLEntryNotificationOperatorComposition *ioreportCallback;
@property (retain) PLEntryNotificationOperatorComposition *processnetworkCallback;
@property (retain) PLEntryNotificationOperatorComposition *wifiCallback;
@property (retain) PLEntryNotificationOperatorComposition *bbCallback;
@property (retain) PLEntryNotificationOperatorComposition *btCallback;
@property (retain) PLEntryNotificationOperatorComposition *displayAPLCallback;
@property (retain) PLTimer *debugTimers;
@property (retain) NSMutableDictionary *triggers;

+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (BOOL)isModelTriggerRun;
+ (id)entryEventNoneDefinitionBLMDebug;

- (id)init;
- (void)initOperatorDependancies;
- (void)triggerSelectorAtDate:(id)a0 withSelector:(SEL)a1 withUseInfo:(id)a2;
- (void)debugTrigger;
- (id)Testservice:(id)a0;
- (void).cxx_destruct;
- (id)respondBLMDDebugQuery:(id)a0;
- (void)registerTrigger:(id)a0;
- (double)energyForRootNodeID:(int)a0 withRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1;
- (id)logRailData:(int)a0 withTriggerName:(id)a1 inTimeRange:(struct _PLTimeIntervalRange { double x0; double x1; })a2;
- (void)triggerLoggersNow:(id)a0;

@end
