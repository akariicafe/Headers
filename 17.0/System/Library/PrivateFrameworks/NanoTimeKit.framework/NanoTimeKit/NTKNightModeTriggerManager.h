@class NTKAmbientIlluminationMonitor, NSString, NSHashTable, NTKNightModeTriggerSettings, CLKClockTimerToken;
@protocol NTKMovingStatistic;

@interface NTKNightModeTriggerManager : NSObject <NTKAmbientIlluminationMonitorDelegate> {
    NTKNightModeTriggerSettings *_settings;
    NTKAmbientIlluminationMonitor *_ambientIlluminationMonitor;
    id<NTKMovingStatistic> _luxStatistic;
    id<NTKMovingStatistic> _nitsStatistic;
    CLKClockTimerToken *_clockTimerToken;
    NSHashTable *_observers;
    BOOL _lastIsTriggered;
    double _lastSmoothedLux;
    double _lastThresholdOffset;
    double _lastThresholdLow;
    double _lastThresholdHigh;
    double _lastSmoothedNits;
    BOOL _lastTargetTrigger;
    BOOL _luxIsLive;
    double _lastSensorLux;
    double _lastCurrentNits;
    unsigned long long _lastSampleSize;
    unsigned long long _skippedLogs;
    BOOL _isN199;
}

@property (nonatomic, getter=isNightModeTriggered, setter=_setNightModeTriggered:) BOOL nightModeTriggered;
@property (nonatomic) double thresholdLuxLow;
@property (nonatomic) double thresholdLuxHigh;
@property (nonatomic, getter=isNightModeDetectionEnabled) BOOL nightModeDetectionEnabled;
@property (nonatomic) double currentFaceAPL;
@property (nonatomic) double thresholdOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_notifyObservers;
- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_stopClockTimer;
- (double)_smoothedLux;
- (double)_smoothedNits;
- (void)_startClockTimer;
- (void)_updateAverageWithCurrentLux;
- (void)_updateAverageWithCurrentNits;
- (void)_updateAverageWithLux:(double)a0;
- (void)_updateAverageWithNits:(double)a0;
- (void)_updateTriggerState;
- (void)ambientIlluminationMonitor:(id)a0 receivedAmbientLux:(double)a1;
- (void)ambientIlluminationMonitor:(id)a0 receivedDisplayNits:(double)a1;
- (void)sampleSizeChanged:(id)a0;
- (void)thresholdsChanged:(id)a0;

@end
