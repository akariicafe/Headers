@class AXDispatchTimer, NSDate, HKHealthStore, ADAMAudioDataReceiver, HKCategorySample, NSMutableArray, NSObject, HKDataCollector, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface HUNoiseController : NSObject {
    int _measurementSuspensionNotifyToken;
}

@property (retain, nonatomic) AXDispatchTimer *edDummyDataTimer;
@property (retain, nonatomic) AXDispatchTimer *adamSuspendedTimer;
@property (retain, nonatomic) NSMutableArray *leqBuffer;
@property (retain, nonatomic) NSMutableArray *attenuationBuffer;
@property (nonatomic) float slowLeq;
@property (nonatomic) float fastLeq;
@property (nonatomic, getter=isMeasurementEnabled) BOOL measurementEnabled;
@property (nonatomic) unsigned long long thresholdLevel;
@property (retain, nonatomic) NSDate *timeNotified;
@property (nonatomic) float sampleDuration;
@property (nonatomic, getter=isNotified) BOOL notified;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (retain, nonatomic) NSMutableArray *leqBuffer80Threshold;
@property (retain, nonatomic) NSMutableArray *leqBuffer85Threshold;
@property (retain, nonatomic) NSMutableArray *leqBuffer90Threshold;
@property (nonatomic, getter=isNotified80) BOOL notified80;
@property (nonatomic, getter=isNotified85) BOOL notified85;
@property (nonatomic, getter=isNotified90) BOOL notified90;
@property (retain, nonatomic) NSDate *timeNotified80;
@property (retain, nonatomic) NSDate *timeNotified85;
@property (retain, nonatomic) NSDate *timeNotified90;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;
@property (retain, nonatomic) ADAMAudioDataReceiver *edDataReceiver;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKCategorySample *notificationSample;
@property (retain, nonatomic) HKDataCollector *attenuationDataCollector;
@property (readonly, nonatomic) UNUserNotificationCenter *userNotificationCenter;

+ (id)sharedController;
+ (BOOL)deviceSupportsEnvironmentalDosimetry;

- (id)init;
- (void)dealloc;
- (void)lowPowerModeChanged:(id)a0;
- (void).cxx_destruct;
- (void)_clearCachedValues;
- (void)maintainCircularBuffer:(id)a0 forTime:(float)a1;
- (void)stopReceivingAudioDosageSamples;
- (void)checkToResetNotificationsForSPL:(float)a0 withDuration:(float)a1 andBuffer:(id)a2 forTime:(float)a3;
- (void)writeAttentuationSampleToHealth;
- (struct { long long x0; long long x1; })_fetchDeviceState;
- (void)_logNoiseEnabledStateToPowerlog:(BOOL)a0;
- (void)_sendUpdateMessageForCurrentValues;
- (unsigned long long)alertTypeFromLevel:(float)a0;
- (void)applyAnalyticsNotificationLogicForSPL:(float)a0 withDuration:(float)a1;
- (void)applyNotificationLogicForSPL:(float)a0 withDuration:(float)a1;
- (float)calculateLeqForBuffer:(id)a0;
- (void)checkToResetAnalyticsNotificationsForSPL:(float)a0 withDuration:(float)a1 andBuffer:(id)a2 forTime:(float)a3 andThreshold:(long long)a4;
- (void)checkToSurfaceAnalyticsNotificationForSPL:(float)a0 withDuration:(float)a1 andBuffer:(id)a2 forTime:(float)a3 andThreshold:(long long)a4;
- (void)checkToSurfaceNotificationForSPL:(float)a0 withDuration:(float)a1 andBuffer:(id)a2 forTime:(float)a3;
- (BOOL)isWearingAirpods;
- (id)measurementConfigurationWithDuration:(unsigned int)a0 period:(unsigned int)a1 config:(unsigned long long)a2;
- (void)processMeasurement:(id)a0 withMetadata:(id)a1;
- (void)readEnvironmentalDosimetryLevels;
- (id)registerForEnvironmentalDosimetryUpdates:(id)a0;
- (void)restartADAMTimer;
- (void)showNotificationForAlertType:(unsigned long long)a0;
- (void)subscribeToSharedNotifications;
- (void)writeNotificationSampleToHKWithSPL:(float)a0 startDate:(id)a1 endDate:(id)a2;

@end
