@class AMAmbientDefaults, NSTimer, NSUUID, NSDate, PRSPosterConfiguration;

@interface SBAmbientTelemetryEmitter : NSObject {
    PRSPosterConfiguration *_activePosterConfiguration;
    AMAmbientDefaults *_ambientDefaults;
    NSDate *_ambientPresentationTimestamp;
    NSDate *_ambientActiveFaceTimestamp;
    NSTimer *_ambientEnabledDailyTimer;
    NSUUID *_sessionId;
}

+ (void)_ambientCoreAnalyticsSystemEventForBumpIgnored:(BOOL)a0 sessionIdString:(id)a1;
+ (long long)_ambientActiveFaceTypeForConfiguration:(id)a0;
+ (long long)_ambientClockFaceDescriptorForConfiguration:(id)a0;
+ (void)_ambientCoreAnalyticsActiveFaceDescription:(id)a0 duration:(double)a1 sessionIdString:(id)a2;
+ (void)_ambientCoreAnalyticsAmbientEnabled:(BOOL)a0 userTriggered:(BOOL)a1;
+ (void)_ambientCoreAnalyticsConfigurationUpdateForEventType:(long long)a0 activeFace:(id)a1 metadata:(id)a2 sessionIdString:(id)a3 timeOfDay:(long long)a4;
+ (void)_ambientCoreAnalyticsSystemEventForSleepSuppressionActive:(BOOL)a0 sessionIdString:(id)a1;
+ (void)_ambientCoreAnalyticsTotalAmbientDuration:(double)a0 sessionIdString:(id)a1;
+ (void)_ambientCoreAnalyticsUserSettingsForAmbientDefaults:(id)a0 userTriggered:(BOOL)a1;
+ (long long)_ambientPhotosFaceDescriptorForConfiguration:(id)a0;
+ (void)_ambientPowerLogActiveFaceUpdateWithFaceType:(unsigned long long)a0 activeFaceDescriptor:(unsigned long long)a1;
+ (void)_ambientPowerLogAmbientModeEnabled:(BOOL)a0;
+ (void)_ambientPowerLogAmbientPresented:(BOOL)a0 displayStyle:(long long)a1;
+ (void)_ambientPowerLogLifetimePresentationCounterUpdate:(unsigned long long)a0;
+ (void)_ambientPowerLogWithEventName:(id)a0 dictionary:(id)a1;
+ (long long)_ambientTimeOfDay;
+ (id)_faceDescriptionFromConfiguration:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_updateTotalDurationLoggingForAmbientPresented:(BOOL)a0 sessionIdString:(id)a1;
- (void)_logAmbientEnabled:(BOOL)a0 userTriggered:(BOOL)a1;
- (void)_logAmbientUserSettingsUserTriggered:(BOOL)a0;
- (void)_setupAmbientEnabledDailyTimerForLogging;
- (void)_setupAmbientEnabledLogging;
- (void)_setupUserSettingUpdateLogging;
- (void)_updateActiveFaceDurationForPreviousConfiguration:(id)a0 currentConfiguration:(id)a1 sessionIdString:(id)a2;
- (void)_updateSessionIdForAmbientPresented:(BOOL)a0;
- (id)initWithAmbientDefaults:(id)a0;
- (void)logTelemetryForAmbientConfigurationUpdate:(id)a0 metadata:(id)a1;
- (void)logTelemetryForAmbientPresented:(BOOL)a0 displayStyle:(long long)a1;
- (void)logTelemetryForBumpEventIgnored:(BOOL)a0;
- (void)logTelemetryForSleepSuppressionActive:(BOOL)a0;

@end
