@class HDXPCGatedActivity, NSString, HDProfile, NSObject, NSUserDefaults;
@protocol OS_os_log, HDHRAFibBurdenSevenDayAnalysisBreadcrumbManaging, HKHRDatabaseAnalysisSchedulerDelegate, HKHRDatabaseAnalysisSchedulerDatabaseAssertionProvider, HKHRDatabaseAnalysisSchedulerGatedActivityFactory;

@interface HKHRDatabaseAnalysisSchedulerImpl : NSObject <HDHealthDaemonReadyObserver, HKHRDatabaseAnalysisScheduler> {
    HDProfile *_profile;
    NSString *_identifier;
    NSObject<OS_os_log> *_loggingCategory;
    double _maximumDelay;
    double _retryDelay;
    id<HDHRAFibBurdenSevenDayAnalysisBreadcrumbManaging> _breadcrumbManager;
    id<HKHRDatabaseAnalysisSchedulerGatedActivityFactory> _gatedActivityFactory;
    id<HKHRDatabaseAnalysisSchedulerDatabaseAssertionProvider> _assertionProvider;
    NSUserDefaults *_persistentStateDefaults;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _state;
    HDXPCGatedActivity *_lock_gatedActivity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HKHRDatabaseAnalysisSchedulerDelegate> delegate;

- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0 identifier:(id)a1 loggingCategory:(id)a2 maximumDelay:(double)a3 retryDelay:(double)a4 breadcrumbManager:(id)a5;
- (void)_maybeRetryLater;
- (void)_requestGatedActivityRunWithDelay:(double)a0;
- (id)initWithProfile:(id)a0 identifier:(id)a1 loggingCategory:(id)a2 maximumDelay:(double)a3 retryDelay:(double)a4 breadcrumbManager:(id)a5 gatedActivityFactory:(id)a6 assertionProvider:(id)a7 persistentStateDefaults:(id)a8;
- (void)_runActivity:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_enterStateIfPossible:(unsigned long long)a0;
- (double)_retryDelayGivenRetryCount:(long long)a0;
- (void)forceAnalysis;
- (void).cxx_destruct;
- (void)_runMaintenanceOperationForActivity:(id)a0 assertion:(id)a1 withCompletion:(id /* block */)a2;
- (id)retryCountKey;
- (void)_resetRetryCounter;
- (id)_gatedActivity;
- (void)scheduleAnalysis;

@end
