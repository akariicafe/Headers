@class NSString, NSCalendar;
@protocol _LTActivityLoggerDelegate;

@interface _LTActivityLogger : NSObject <_LTActivityLoggerDelegate> {
    NSCalendar *_calendar;
}

@property (weak, nonatomic) id<_LTActivityLoggerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)registerActivity:(long long)a0;
- (id)_activityDatePreferenceKeyForTask:(long long)a0;
- (id)_featureNameForTask:(long long)a0;
- (void)_logActivityForTask:(long long)a0 interval:(unsigned long long)a1 date:(id)a2;
- (void)_logAllIntervalsForTask:(long long)a0 date:(id)a1;
- (void)_registerActivity:(long long)a0 onDate:(id)a1;
- (void)_sendDailyUsageForTask:(long long)a0 date:(id)a1;
- (void)_sendMonthlyUsageForTask:(long long)a0 date:(id)a1;
- (void)_sendWeeklyUsageForTask:(long long)a0 date:(id)a1;
- (void)_updateLastLoggedDate:(id)a0 forTask:(long long)a1;
- (id)activityLogger:(id)a0 lastLoggedDateForTask:(long long)a1;
- (void)activityLogger:(id)a0 logAggregateUsageForInterval:(unsigned long long)a1 date:(id)a2;
- (void)activityLogger:(id)a0 logUsageForTask:(long long)a1 interval:(unsigned long long)a2 date:(id)a3;
- (void)activityLogger:(id)a0 updateLastAggregateLogDate:(id)a1;
- (void)activityLogger:(id)a0 updateLastLoggedDate:(id)a1 forTask:(long long)a2;
- (id)lastAggregateLogDateForActivityLogger:(id)a0;

@end
