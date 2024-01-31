@class PLHIDEventOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLButtonAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLHIDEventOperatorComposition *buttonEvent;
@property (retain) PLHIDEventOperatorComposition *smartCoverEvent;

+ (id)defaults;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitionTrackpadPowerState;

- (id)init;
- (void)logEventPointButton:(struct __IOHIDEvent { } *)a0;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventForwardSmartCover:(struct __IOHIDEvent { } *)a0;
- (void).cxx_destruct;

@end
