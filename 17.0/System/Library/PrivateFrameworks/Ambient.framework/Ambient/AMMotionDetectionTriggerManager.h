@class AWAttentionAwarenessClient, NSString, AMMotionDetectionSettings, NSTimer, _AMMotionDetectionDataSample, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AMMotionDetectionTriggerManager : NSObject <PTSettingsKeyObserver> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    AWAttentionAwarenessClient *_awClient;
    AWAttentionAwarenessClient *_awClientOverride;
    _AMMotionDetectionDataSample *_dataSample;
    _AMMotionDetectionDataSample *_motionDensityBackground;
    _AMMotionDetectionDataSample *_filteredMotionDensity;
    BOOL _motionDetectionEnabled;
    NSMutableArray *_observerContexts;
    unsigned long long _triggerState;
    unsigned long long _enabledTriggers;
    unsigned long long _publishedTriggers;
    AMMotionDetectionSettings *_settings;
    double _watchdogTimeout;
    NSTimer *_watchdogTimer;
}

@property (nonatomic) double watchdogTimeout;
@property (nonatomic, getter=isMotionDetectionEnabled) BOOL motionDetectionEnabled;
@property (readonly, nonatomic) unsigned long long triggerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0 queue:(id)a1;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)setMotionDetectionEnabled:(BOOL)a0;
- (void)_accessQueue_setPublishedTriggers:(unsigned long long)a0;
- (void)_accessQueue_updatePublishedTriggers;
- (unsigned long long)_computeThresholdMaskFromMotionData:(id)a0 filtered:(BOOL)a1;
- (id)_firstOrderLowPassArray:(id)a0 last:(id)a1 dt:(float)a2 tau:(float)a3;
- (void)_handleMotionDataSample:(id)a0;
- (void)_injectSyntheticMotionData:(id)a0 timestampSeconds:(double)a1;
- (void)_notifyObserversUpdateMotionDetectionTriggerState:(unsigned long long)a0;
- (void)_setEnabledTriggers:(unsigned long long)a0;
- (void)_setMotionDetectionMonitoringEnabled:(BOOL)a0;
- (id)_subtractArrayX:(id)a0 andY:(id)a1;
- (id)_unitIntervalClipArray:(id)a0;
- (void)_updateFilteredMotionDensity:(id)a0;
- (void)_updateMotionDetectionTriggerMaskWithDataSample:(id)a0 andFilteredDataSample:(id)a1;
- (void)_updateWatchdogTimer;
- (id)initWithAWClientOverride:(id)a0;

@end
