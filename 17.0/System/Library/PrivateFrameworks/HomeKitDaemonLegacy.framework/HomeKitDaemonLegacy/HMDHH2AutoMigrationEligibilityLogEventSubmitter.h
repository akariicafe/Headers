@class NSObject, NSString, HMMDateProvider, NSUserDefaults;
@protocol OS_dispatch_queue, HMMLogEventSubmitting, HMDHH2AutoMigrationEligibilityLogEventSubmitterDataSource;

@interface HMDHH2AutoMigrationEligibilityLogEventSubmitter : HMDLogEventAnalyzer <HMDLogEventDailyTaskRunner>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, weak, nonatomic) id<HMDHH2AutoMigrationEligibilityLogEventSubmitterDataSource> eligibilityStatusDataSource;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) HMMDateProvider *dateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (id)initWithEligibilityStatusDataSource:(id)a0 analyzerDataSource:(id)a1 workQueue:(id)a2;
- (void)runDailyTask;
- (void)submitHH2AutoMigrationEligibilityStatus;

@end
