@class NSMutableArray, NSMutableDictionary, PLEntryNotificationOperatorComposition;

@interface PLPMUAgent : PLAgent {
    struct __IOHIDEventSystemClient { } *hidEventSystem;
    NSMutableDictionary *matchingSensors;
    NSMutableArray *sensorNamesC;
    NSMutableArray *sensorNamesV;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;

+ (id)defaults;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)accountingGroupDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)railDefinitions;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)logEventPointSensors;

@end
