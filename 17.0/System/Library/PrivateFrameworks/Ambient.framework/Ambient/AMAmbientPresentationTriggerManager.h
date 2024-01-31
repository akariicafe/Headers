@class CMMagicMountState, AMAmbientDefaults, CMMagicMountManager, NSHashTable, NSNumber, NSDate;

@interface AMAmbientPresentationTriggerManager : NSObject {
    NSDate *_batteryStateChangeTimestamp;
    NSDate *_magicMountEventTimestamp;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) CMMagicMountManager *magicMountManager;
@property (retain, nonatomic) CMMagicMountState *cachedMagicMountState;
@property (retain, nonatomic) CMMagicMountManager *overridenMagicMountManager;
@property (nonatomic) NSNumber *overriddenBatteryChargingState;
@property (nonatomic, getter=isPresentationDetectionEnabled) BOOL presentationDetectionEnabled;
@property (readonly, nonatomic) long long presentationState;
@property (weak, nonatomic) AMAmbientDefaults *ambientDefaults;

- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_updateAmbientPresentationState;
- (void)testSetOverrideBatteryCharging:(BOOL)a0;
- (BOOL)_analogousTriggerEvents;
- (long long)_currentPresentationState;
- (void)_deviceBatteryStateChanged;
- (void)_disableMagicMountDetection;
- (BOOL)_ignoreBatteryChargingForPresentation;
- (BOOL)_isDeviceBatteryCharging;
- (void)_notifyObserversUpdatedAmbientPresentationState:(long long)a0;
- (void)_setDeviceBatteryMonitoringEnabled:(BOOL)a0;
- (void)_setupMagicMountDetectionIfNecessary;
- (id)initWithMagicMountManager:(id)a0;

@end
