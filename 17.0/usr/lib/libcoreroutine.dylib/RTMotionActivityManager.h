@class RTPlatform, RTVehicleStore;

@interface RTMotionActivityManager : RTService

@property (readonly, nonatomic) RTPlatform *platform;
@property (readonly, nonatomic) RTVehicleStore *vehicleStore;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsNotificationName:(id)a0;
+ (id)activityAlarmTriggerToString:(long long)a0;
+ (id)motionActivityVehicleConnectedStateToString:(unsigned long long)a0;
+ (id)motionSettledStateToString:(unsigned long long)a0;
+ (double)ratioOfMotionActivityType:(unsigned long long)a0 forActivities:(id)a1 startDate:(id)a2 endDate:(id)a3;
+ (void)removeActivities:(id)a0 stoppedBeforeDate:(id)a1;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (id)init;
- (void)_fetchPredominantMotionActivityWithHandler:(id /* block */)a0;
- (void)_subscribeForPedometerDataWithStartDate:(id)a0 handler:(id /* block */)a1;
- (void)_fetchPredominantMotionActivityTypeFromStartDate:(id)a0 toEndDate:(id)a1 withHandler:(id /* block */)a2;
- (void)_fetchMotionActivitiesFromStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)_unsubscribeForPedometerData:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlatform:(id)a0 vehicleStore:(id)a1;
- (void)fetchMotionActivitiesFromStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)fetchPredominantMotionActivityTypeFromStartDate:(id)a0 toEndDate:(id)a1 withHandler:(id /* block */)a2;
- (void)fetchPredominantMotionActivityWithHandler:(id /* block */)a0;
- (void)subscribeForPedometerDataWithStartDate:(id)a0 handler:(id /* block */)a1;
- (void)unsubscribeForPedometerData:(id)a0;

@end
