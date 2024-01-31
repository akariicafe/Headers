@class NSMutableDictionary, _ATXDuetHelper, NSString, NSDate, _ATXAppDailyDoseCurrentStore, NSObject;
@protocol OS_dispatch_queue;

@interface _ATXAppDailyDose : NSObject {
    _ATXDuetHelper *_duetHelper;
    _ATXAppDailyDoseCurrentStore *_currentDoseStore;
    NSMutableDictionary *_appHistoricalDoseMap;
    NSDate *_duetHistoryTimestamp;
    NSString *_previousAppId;
    NSDate *_previousAppLaunchDate;
}

@property (readonly, nonatomic) double alpha;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)_defaultCurrentDosePath;
+ (void)deleteCurrentDoseFile;
+ (id)_defaultHistoricalDosePath;

- (void)train;
- (id)now;
- (id)init;
- (void)addLaunchForBundleId:(id)a0 date:(id)a1 completion:(id /* block */)a2;
- (void)_backfillAppDurationMapDBForToday;
- (id)initWithDuetHelper:(id)a0;
- (id)previousBundleId;
- (BOOL)_loadHistoricalDoseFrom:(id)a0;
- (id)getDoseForApp:(id)a0;
- (void)_doTrainingOn:(id)a0 timeZone:(id)a1 completion:(id /* block */)a2;
- (void)_writeHistoricalDoseWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithDuetHelper:(id)a0 timeZone:(id)a1 today:(id)a2 alpha:(double)a3 historicalDosePath:(id)a4 completion:(id /* block */)a5;
- (void)_asyncStopAppUsageAtDate:(id)a0 completion:(id /* block */)a1;
- (double)getCurrentDoseForApp:(id)a0;
- (id)currentDoseStore;
- (void)stopAppUsageAtDate:(id)a0;
- (id)todayWithTimeZone:(id)a0;
- (void)_recordAppDurationForApp:(id)a0 withStartTime:(id)a1 andEndTime:(id)a2;

@end
