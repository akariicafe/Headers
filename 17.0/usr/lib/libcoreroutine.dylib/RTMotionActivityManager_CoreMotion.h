@class NSMutableArray, NSMutableDictionary, RTMotionActivity, NSOperationQueue, NSDate, CMMotionActivityManager, NSObject;
@protocol OS_dispatch_source;

@interface RTMotionActivityManager_CoreMotion : RTMotionActivityManager

@property (retain, nonatomic) CMMotionActivityManager *motionActivityManager;
@property (nonatomic) BOOL motionActivityAvailable;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dominantMotionActivityTimer;
@property (retain, nonatomic) NSMutableDictionary *activityAlarms;
@property (retain, nonatomic) NSDate *lastQueryForMotionActivity;
@property (retain, nonatomic) NSMutableDictionary *uuidToPedometersMap;
@property (nonatomic) BOOL dominantMotionActivityBootstrapped;
@property (retain, nonatomic) NSMutableArray *motionActivities;
@property (retain, nonatomic) RTMotionActivity *dominantMotionActivity;
@property (nonatomic) unsigned long long settledState;
@property (nonatomic) long long interestedInActivity;
@property (nonatomic) unsigned long long vehicleConnectedState;

+ (double)durationForTrigger:(unsigned int)a0;
+ (long long)activityAlarmTriggerFromCMActivityAlarmTrigger:(unsigned int)a0;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)onVehicleExitNotification;
- (void)_fetchPredominantMotionActivityWithHandler:(id /* block */)a0;
- (void)_subscribeForPedometerDataWithStartDate:(id)a0 handler:(id /* block */)a1;
- (void)_fetchPredominantMotionActivityTypeFromStartDate:(id)a0 toEndDate:(id)a1 withHandler:(id /* block */)a2;
- (void)_resetMotionActivitiesIfNeeded;
- (void)_processActivityAlarm:(id)a0 error:(id)a1;
- (void)onActivity:(id)a0;
- (void)onVehicleConnectedNotification;
- (void)onVehicleDisconnectedNotification;
- (void)_resubscribeForActivityAlarms;
- (void)_fetchMotionActivitiesFromStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)_unsubscribeForPedometerData:(id)a0;
- (void)_bootstrapDominantActivityWithMotionActivites:(id)a0;
- (void)_subscribeForMotionAlarmTypes:(id)a0;
- (id)_rtAlarmForTrigger:(unsigned int)a0;
- (void).cxx_destruct;
- (id)initWithPlatform:(id)a0 vehicleStore:(id)a1;
- (void)_onVehicleDisconnectedNotification;
- (void)_fetchMotionActivitiesIfNeeded;
- (void)_onActivity:(id)a0;
- (void)_processSettledState;
- (void)_invalidateAlarm:(id)a0;
- (void)_onVehicleConnectedNotification;
- (void)_processDominantActivity;
- (void)_invalidateActivityAlarms;

@end
