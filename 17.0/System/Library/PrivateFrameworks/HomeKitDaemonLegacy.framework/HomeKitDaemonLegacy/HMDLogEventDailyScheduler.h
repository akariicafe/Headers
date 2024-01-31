@class NSString, NSHashTable, NSDate;
@protocol HMDXPCActivityInterfacing, HMMLogEventSubmitting;

@interface HMDLogEventDailyScheduler : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy) id /* block */ dateFactory;
@property (retain, nonatomic) NSDate *lastRunTime;
@property (readonly, nonatomic) NSString *xpcActivityIdentifier;
@property (readonly, nonatomic) NSString *preferencesKey;
@property (retain, nonatomic) NSHashTable *mutableTaskRunners;
@property (retain, nonatomic) id<HMDXPCActivityInterfacing> xpcActivityInterface;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)createSchedulerWithLogEventSubmitter:(id)a0;

- (void)_registerActivity;
- (void).cxx_destruct;
- (void)_runActivity:(id)a0;
- (id)_criteriaForActivity;
- (void)_handleCheckInForActivity:(id)a0;
- (id)initWithIdentifier:(id)a0 preferencesKey:(id)a1 logEventSubmitter:(id)a2 xpcActivityInterface:(id)a3 dateFactory:(id /* block */)a4;
- (void)registerDailyTaskRunner:(id)a0;
- (void)runDailyTasks;
- (void)runHomeutilTasks;
- (id)statusSummary;
- (id)taskRunners;

@end
