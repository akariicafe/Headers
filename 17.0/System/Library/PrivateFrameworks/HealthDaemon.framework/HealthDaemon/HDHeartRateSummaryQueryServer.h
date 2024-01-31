@class NSString, HKHeartRateSummary, HDActivityCacheManager;

@interface HDHeartRateSummaryQueryServer : HDQueryServer <HDActivityCacheManagerObserver> {
    HKHeartRateSummary *_latestSummary;
    HDActivityCacheManager *_activityCacheManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;
+ (Class)queryClass;

- (void)_queue_start;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (void)_queue_stop;
- (void).cxx_destruct;
- (void)activityCacheManager:(id)a0 changedHeartRateSummary:(id)a1 isToday:(BOOL)a2;
- (void)activityCacheManager:(id)a0 changedTodayActivityCache:(id)a1;

@end
