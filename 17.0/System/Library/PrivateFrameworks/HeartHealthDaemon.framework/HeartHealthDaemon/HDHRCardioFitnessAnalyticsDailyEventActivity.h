@class HDPeriodicActivity, HDHRCardioFitnessAnalyticsDailyEventDataSource, HDProfile, HKHRCardioFitnessAnalyticsManager, NSString, NSObject, HDAssertion;
@protocol OS_dispatch_queue;

@interface HDHRCardioFitnessAnalyticsDailyEventActivity : NSObject <HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate> {
    HDAssertion *_preparedDatabaseAccessibilityAssertion;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) double calculationPeriod;
@property (readonly, nonatomic) double retryPeriod;
@property (retain, nonatomic) HDPeriodicActivity *periodicActivity;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) HKHRCardioFitnessAnalyticsManager *analyticsManager;
@property (readonly, nonatomic) HDHRCardioFitnessAnalyticsDailyEventDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (void)daemonReady:(id)a0;
- (void)_queue_submitAnalyticsWithActivityCompletion:(id /* block */)a0;
- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (BOOL)periodicActivityRequiresProtectedData:(id)a0;
- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;

@end
