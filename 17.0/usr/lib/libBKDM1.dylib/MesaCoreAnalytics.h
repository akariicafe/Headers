@class MesaCoreAnalyticsUnlockEvent, MesaCoreAnalyticsEvent, MesaCoreAnalyticsMatchEvent, MesaCoreAnalyticsEnrollEvent, MesaCoreAnalyticsFingerTouchTimeEvent, BioLog, MesaCoreAnalyticsWeeklyEvent, NSMutableArray, NSObject, CMDeviceOrientationManager, MesaCoreAnalyticsDailyEvent, MesaCoreAnalyticsFingerLiftTimeEvent;
@protocol OS_dispatch_queue;

@interface MesaCoreAnalytics : BiometricKitDStatistics {
    int _currentBioOpType;
    MesaCoreAnalyticsEvent *_currentEvent;
    MesaCoreAnalyticsMatchEvent *_matchEvent;
    MesaCoreAnalyticsUnlockEvent *_unlockEvent;
    MesaCoreAnalyticsEnrollEvent *_enrollEvent;
    MesaCoreAnalyticsFingerTouchTimeEvent *_fingerTouchTimeEvent;
    MesaCoreAnalyticsFingerLiftTimeEvent *_fingerLiftTimeEvent;
    MesaCoreAnalyticsDailyEvent *_dailyEvent;
    MesaCoreAnalyticsWeeklyEvent *_weeklyEvent;
    unsigned char _internalSensorType;
    unsigned long long _lastMatchAttemptTimeOffset;
    BOOL _displayOn;
    MesaCoreAnalyticsMatchEvent *_preArmedMatchEvent;
    BioLog *_bioLog;
    NSMutableArray *_events;
    NSObject<OS_dispatch_queue> *_analyticsDispatchQueue;
    CMDeviceOrientationManager *_orientationManager;
    BOOL _orientationManagerRunning;
    unsigned long long _lastDeviceOrientation;
    unsigned long long _totalScanGroupCount;
    unsigned long long _totalScanCount;
}

+ (id)statistics;

- (id)deviceOrientation;
- (id)init;
- (void)startMatchOperation:(id)a0;
- (void)startEnrollOperation:(id)a0;
- (void).cxx_destruct;
- (void)removeIdentity:(id)a0;
- (void)cancel;
- (void)startBioOperation:(id)a0;
- (void)timestampEvent:(unsigned long long)a0 absoluteTime:(unsigned long long)a1;
- (void)enrollProgress:(id)a0;
- (id)getEnrolledIdentitiesCountTotal;
- (void)addIdentitity:(id)a0;
- (void)catacombCorrupted:(long long)a0;
- (void)displayStatusChanged:(BOOL)a0;
- (void)enrollEventFinished;
- (id)getDaysSinceEnrollment;
- (id)getDaysSinceLastEnrollment;
- (id)getEnrolledIdentitiesCountForUser:(id)a0;
- (id)getEnrolledUserIDs;
- (id)getEnrolledUsersCount;
- (id)getProtectedConfigurationMergedForAllUsers;
- (id)getWakeReason;
- (void)homeButtonStateChanged:(BOOL)a0;
- (void)initSensor;
- (void)lockStateUpdated:(unsigned int)a0;
- (void)matchAttemptFinished:(BOOL)a0;
- (void)matchEventFinished;
- (void)matchOperationFinished:(BOOL)a0;
- (void)matchResult:(id)a0 withDictionary:(id)a1;
- (void)postDailyAndWeeklyUpdates;
- (void)removeAllIdentities;
- (void)resetMatchCounts;
- (void)serviceMatch;
- (void)setInternalSensorType:(unsigned char)a0;
- (void)startMatchAttempt:(id)a0;
- (void)statisticsMessage:(struct { unsigned int x0; union { long long x0; double x1; } x1; } *)a0;
- (void)statusMessage:(unsigned int)a0 withData:(id)a1;
- (void)stopBioOperation;
- (void)templateUpdate:(id)a0 withDictionary:(id)a1;
- (void)unlockAttemptCanceled:(BOOL)a0;
- (void)unlockAttemptFinished;
- (void)unlockAttemptStarted:(BOOL)a0;
- (void)unlockEventFinished;
- (void)unlockedByMesa;
- (void)unlockedByPasscode;
- (void)updateBioLog:(id)a0;
- (void)wakeGestureUpdate:(long long)a0;

@end
