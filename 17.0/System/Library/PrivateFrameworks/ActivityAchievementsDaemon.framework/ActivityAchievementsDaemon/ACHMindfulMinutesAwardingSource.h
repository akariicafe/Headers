@class HKAnchoredObjectQuery, NSDate, NSObject, ACHAchievementProgressEngine, ACHEarnedInstanceAwardingEngine, ACHAwardsWorkoutClient, HKHealthStore, NSDictionary, NSCalendar, NSString, ACHAwardsClient, NSArray, NSNumber, ACHTemplateStore;
@protocol OS_dispatch_queue;

@interface ACHMindfulMinutesAwardingSource : NSObject <ACHEarnedInstanceAwarding, ACHAchievementProgressProviding>

@property (weak, nonatomic) ACHAwardsClient *client;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (weak, nonatomic) ACHAwardsWorkoutClient *workoutClient;
@property (weak, nonatomic) ACHEarnedInstanceAwardingEngine *engine;
@property (weak, nonatomic) ACHAchievementProgressEngine *progressEngine;
@property (weak, nonatomic) ACHTemplateStore *templateStore;
@property (nonatomic) unsigned char creatorDevice;
@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSString *overrideWatchCountryCode;
@property (retain, nonatomic) NSString *watchCountryCode;
@property (retain, nonatomic) NSNumber *overrideIsAppleWatch;
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (retain, nonatomic) NSDate *currentDateOverride;
@property (readonly, nonatomic) NSDate *currentDate;
@property (nonatomic) BOOL isObservingSummaryUpdates;
@property (retain, nonatomic) HKAnchoredObjectQuery *sampleQuery;
@property (nonatomic) int protectedDataToken;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly, nonatomic) NSArray *dataStorePropertyKeys;
@property (retain, nonatomic) NSDictionary *dataStoreProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)providerIdentifier;
- (void)dealloc;
- (id)earnedInstancesForHistoricalInterval:(id)a0 error:(id *)a1;
- (BOOL)providesProgressForTemplate:(id)a0;
- (void)activate;
- (id)earnedInstancesForHistoricalInterval:(id)a0 databaseContext:(id)a1;
- (void)dataStoreDidClearAllProperties:(id)a0 completion:(id /* block */)a1;
- (id)_queue_goalQuantityForTemplate:(id)a0 progressEnvironment:(id)a1;
- (void).cxx_destruct;
- (id)_queue_progressQuantityForTemplate:(id)a0 progressEnvironment:(id)a1;
- (void)requestAchievementProgressUpdatesForTemplates:(id)a0;
- (id)initWithClient:(id)a0 healthStore:(id)a1 workoutClient:(id)a2 awardingEngine:(id)a3 templateStore:(id)a4 creatorDevice:(unsigned char)a5 progressEngine:(id)a6;
- (id)_progressEnvironement;
- (id)_queue_evaluateSession:(id)a0 shouldLog:(BOOL)a1;
- (void)_queue_startSampleQueryIfNecessary;
- (id)_relevantTemplatesForMindfulSession:(id)a0;
- (void)_runIncrementalEvaluation:(id)a0;
- (void)_startSampleQuery;
- (void)_stopSampleQuery;
- (void)sessionAdded:(id)a0;

@end
