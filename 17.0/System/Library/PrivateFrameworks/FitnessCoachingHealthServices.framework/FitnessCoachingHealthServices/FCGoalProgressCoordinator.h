@class FCGoalProgressStore, FCCGoalProgressConfiguration, NSString, NSArray, FCTypicalDayProvider, FCGoalProgressDebouncer, HDProfile, NSObject, FCCXPCActivityScheduler, FCCDateProvider;
@protocol OS_dispatch_queue, FCGoalProgressCoordinatorDelegate;

@interface FCGoalProgressCoordinator : NSObject <HDProfileReadyObserver, HDDatabaseProtectedDataObserver, FCGoalProgressEvaluationDelegate, FCCXPCActivitySchedulerDelegate, FCGoalProgressDebouncerDelegate> {
    FCCGoalProgressConfiguration *_currentConfiguration;
    FCCDateProvider *_dateProvider;
    FCGoalProgressDebouncer *_debouncer;
    NSArray *_progressEvents;
    HDProfile *_profile;
    FCCXPCActivityScheduler *_scheduler;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    FCGoalProgressStore *_store;
    FCTypicalDayProvider *_typicalDayProvider;
}

@property (weak, nonatomic) id<FCGoalProgressCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)profileDidBecomeReady:(id)a0;
- (id)lastFiredDateForProgressEventIdentifier:(id)a0;
- (void)dealloc;
- (void)_onqueue_notificationPosted:(id)a0;
- (id)initWithDateProvider:(id)a0 debouncer:(id)a1 profile:(id)a2 scheduler:(id)a3 serviceQueue:(id)a4 store:(id)a5 typicalDayProvider:(id)a6;
- (unsigned long long)currentExperienceType;
- (void)_onqueue_handleGoalProgressConfiguration:(id)a0;
- (void)_onqueue_registerGoalProgressConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)_todayActivityChanged:(id)a0;
- (void)debouncerDidFinishDebounce:(id)a0;
- (id)currentCalendar;
- (void).cxx_destruct;
- (void)_onqueue_runEvaluation;
- (id)currentDate;
- (void)_onqueue_rescheduleEvents;
- (id)_minimumActiveDaysOverride;
- (void)registerGoalProgressConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)scheduler:(id)a0 performActivityWithName:(id)a1 completion:(id /* block */)a2;

@end
