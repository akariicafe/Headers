@class NSDictionary, BMSource;

@interface _DKBatteryMonitor : _DKMonitor {
    unsigned int _powerService;
    unsigned int _batteryNotification;
    struct IONotificationPort { } *_notifyPort;
    BMSource *_source;
}

@property (nonatomic) int immediateShutdownThreshold;
@property (nonatomic) BOOL hasInternalBattery;
@property (retain, nonatomic) NSDictionary *previousBatteryState;
@property (nonatomic) double previousPercentage;
@property (nonatomic) BOOL previouslyFullyCharged;

+ (id)eventStream;
+ (id)_BMEventWithBatteryPercentage:(double)a0 isFullyCharged:(BOOL)a1;
+ (id)_eventWithBatteryPercentage:(double)a0 isFullyCharged:(BOOL)a1;
+ (id)entitlements;
+ (void)setCurrentBatteryPercentage:(double)a0;

- (void)completeStart;
- (BOOL)newBatteryState:(id)a0 differsSignificantlyFromState:(id)a1 currentBatteryPercentage:(double)a2 previousBatteryPercentage:(double)a3;
- (void)dealloc;
- (void)start;
- (BOOL)externalConnected:(id)a0 differsFrom:(id)a1;
- (BOOL)adapterType:(id)a0 differsFrom:(id)a1;
- (void)stop;
- (void)_handleBatteryNotification;
- (void)batteryStateChangeHandler;
- (void)synchronouslyReflectCurrentValue;
- (double)batteryPercentageFromPowerSourceDictionary:(id)a0;
- (void).cxx_destruct;
- (double)currentBatteryPercentage;
- (BOOL)voltage:(id)a0 differsFrom:(id)a1;
- (void)_queue_handleNotification;
- (id)getBatteryProperties;
- (BOOL)percentage:(double)a0 differsFrom:(double)a1;
- (void)postImminentShutdownNotification:(double)a0;
- (BOOL)fullyCharged:(id)a0 differsFrom:(id)a1;
- (void)updateBatteryStateDictionary:(id)a0 currentBatteryPercentage:(double)a1;
- (BOOL)temperature:(id)a0 differsFrom:(id)a1;
- (BOOL)isCharging:(id)a0 differsFrom:(id)a1;
- (void)deactivate;
- (BOOL)fullyChargedFromPowerSourceDictionary:(id)a0;

@end
