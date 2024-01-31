@class NSDate, NSString, FISleepDataProvider, NSDateInterval, NSMutableArray, NSObject, FISleepUserDay, FISimpleHistogram, HKActivitySummary;
@protocol FITypicalDayActivityModelDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface FITypicalDayActivityModel : NSObject <FISleepDataProviderDelegate> {
    NSDateInterval *_interval;
    HKActivitySummary *_queue_currentActivitySummary;
    FISimpleHistogram *_queue_moveHistogram;
    FISimpleHistogram *_queue_exerciseHistogram;
    NSMutableArray *_queue_bucketDates;
    BOOL _activitySummaryLoaded;
    NSObject<OS_dispatch_group> *_activitySummaryBarrierGroup;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_projectedOffWristDateToday;
    long long _totalActiveDays;
    FISleepDataProvider *_sleepDataProvider;
    FISleepUserDay *_sleepUserDay;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sleepUserDayLock;
}

@property (weak, nonatomic) id<FITypicalDayActivityModelDelegate> delegate;
@property (readonly, nonatomic) long long totalActiveDays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_emptySimpleHistogram;

- (id)userStartOfDay;
- (id)userEndOfDay;
- (BOOL)_queue_enumerateActivitySummariesOrderedByCacheIndexWithCalendar:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (double)valueOfTypicalDayMoveEarnedByNow;
- (BOOL)willCompleteStandGoalOrItIsTooLateWithBufferPercentage:(double)a0;
- (double)currentMoveGoalPercentage;
- (BOOL)isSleepAlarmEnabledForToday;
- (BOOL)shouldSuggestWalkWithActivitySettingsController:(id)a0;
- (void)_updateSleepUserDay;
- (double)valueOfTypicalDayBriskMinutesEarnedByNow;
- (BOOL)willCompletingMoveRingEarnStreakAchievement;
- (void)_waitUntilActivitySummaryLoaded;
- (void)rebuildWithInterval:(id)a0;
- (double)_queue_currentValueForHistogram:(id)a0;
- (double)currentStandGoalPercentage;
- (id)initForDateInterval:(id)a0 delegate:(id)a1 sleepDataProvider:(id)a2;
- (double)_queue_briskWalkTimeToCompleteMoveGoalWithDateOfBirth:(id)a0 biologicalSex:(long long)a1 height:(id)a2 weight:(id)a3 wheelchairUse:(long long)a4 experienceType:(unsigned long long)a5;
- (void)handleUpdatedCurrentActivitySummary:(id)a0;
- (id)sleepUserDay;
- (id)initForDateInterval:(id)a0 delegate:(id)a1;
- (id)_goodMorningAlertDismissedDateForToday;
- (BOOL)willCompleteExerciseGoalWithBufferPercentage:(double)a0;
- (id)userWakeUpDateForToday;
- (id)projectedOffWrist;
- (id)_sleepDataProvider;
- (double)_percentageOfTypicalDayComparedToNowForGoal:(long long)a0;
- (id)_queue_calculateProjectedOffWristDateFromHistogram:(id)a0 activeDays:(long long)a1;
- (id)currentCalendar;
- (void).cxx_destruct;
- (BOOL)projectedToBeatMoveRecordByEndOfDay;
- (double)percentageOfTypicalDayMoveComparedToNow;
- (BOOL)willCompleteMoveGoalWithBufferPercentage:(double)a0;
- (double)percentageOfTypicalDayBriskMinutesEarnedComparedToNow;
- (void)_queue_updateProjectedOffWristDateHistogram:(id)a0 activitySummary:(id)a1 activeDays:(long long *)a2;
- (void)_setProjectedOffWristDateToday:(id)a0;
- (id)currentDate;
- (double)currentExerciseGoalPercentage;
- (double)projectedDayDuration;
- (void)_queue_updateHistogram:(id)a0 goalType:(long long)a1 activitySummary:(id)a2;
- (void)sleepDataProviderLastGoodMorningDismissedDateDidChange;
- (void)sleepDataProviderUserDayDidUpdate;
- (BOOL)_willCompleteGoalWithType:(long long)a0 bufferPercentage:(double)a1;
- (id)_bucketDateForIndex:(unsigned long long)a0 startOfDay:(id)a1;
- (void)_setSleepUserDay:(id)a0;
- (id)startOfToday;
- (double)briskWalkTimeToCompleteMoveGoalWithAcitivitySettingsController:(id)a0;
- (long long)_bucketIndexForDate:(id)a0 startOfDay:(id)a1 bucketDates:(id)a2;
- (void)sleepDataProviderLastAlarmWakeUpDateDidChange;
- (void)_queue_populateHistogramsAndOffWristDateForToday;
- (id)endOfToday;

@end
