@class HKAnchoredObjectQuery, HDProfile, NSObject, ACHAchievementProgressEngine, ACHEarnedInstanceAwardingEngine, HKHealthStore, NSDictionary, NSString, ACHMonthlyChallengeDataSource, ACHCurrentActivitySummaryQuery, NSNumber, NSArray, ACHTemplateStore, ACHEarnedInstanceStore;
@protocol OS_dispatch_queue;

@interface ACHMonthlyChallengeAwardingSource : NSObject <HDHealthDaemonReadyObserver, HDCurrentActivitySummaryHelperObserver, HDDataObserver, ACHEarnedInstanceAwarding, ACHAchievementProgressProviding>

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) ACHEarnedInstanceAwardingEngine *engine;
@property (weak, nonatomic) ACHAchievementProgressEngine *progressEngine;
@property (weak, nonatomic) ACHTemplateStore *templateStore;
@property (weak, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;
@property (weak, nonatomic) ACHMonthlyChallengeDataSource *monthlyDataSource;
@property (nonatomic) unsigned char creatorDevice;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSNumber *overrideIsAppleWatch;
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (retain, nonatomic) ACHCurrentActivitySummaryQuery *summaryQuery;
@property (retain, nonatomic) HKAnchoredObjectQuery *workoutQuery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly, nonatomic) NSArray *dataStorePropertyKeys;
@property (retain, nonatomic) NSDictionary *dataStoreProperties;

- (id)providerIdentifier;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)daemonReady:(id)a0;
- (id)_queue_progressQuantityForTemplate:(id)a0;
- (id)_evaluationEnvironmentForTemplate:(id)a0;
- (id)_earnedDateComponentsForTemplate:(id)a0;
- (id)_evaluationEnvironmentForTemplate:(id)a0 andDateComponentInterval:(id)a1;
- (id)_monthlyChallengeTemplatesForHistoricalInterval:(id)a0;
- (id)earnedInstancesForHistoricalInterval:(id)a0 error:(id *)a1;
- (BOOL)providesProgressForTemplate:(id)a0;
- (void)currentActivitySummaryHelper:(id)a0 didUpdateYesterdayActivitySummary:(id)a1 changedFields:(unsigned long long)a2;
- (void)currentActivitySummaryHelper:(id)a0 didUpdateTodayActivitySummary:(id)a1 changedFields:(unsigned long long)a2;
- (id)initWithHealthStore:(id)a0 awardingEngine:(id)a1 templateStore:(id)a2 earnedInstanceStore:(id)a3 monthlyDataSource:(id)a4 creatorDevice:(unsigned char)a5 progressEngine:(id)a6;
- (id)earnedInstancesForHistoricalInterval:(id)a0 databaseContext:(id)a1;
- (void)_startQueries;
- (void)dataStoreDidClearAllProperties:(id)a0 completion:(id /* block */)a1;
- (id)_earnedInstancesForInterval:(id)a0;
- (id)initWithProfile:(id)a0 awardingEngine:(id)a1 templateStore:(id)a2 earnedInstanceStore:(id)a3 monthlyDataSource:(id)a4 creatorDevice:(unsigned char)a5 progressEngine:(id)a6;
- (void).cxx_destruct;
- (id)_queue_goalQuantityForTemplate:(id)a0;
- (void)_requestIncrementalEvaluation;
- (void)requestAchievementProgressUpdatesForTemplates:(id)a0;

@end
