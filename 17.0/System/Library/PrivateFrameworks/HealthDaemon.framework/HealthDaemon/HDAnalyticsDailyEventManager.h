@class NSString, HDProfile, HKAnalyticsEventSubmissionManager, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface HDAnalyticsDailyEventManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDHealthDaemonReadyObserver> {
    HDProfile *_profile;
    HKAnalyticsEventSubmissionManager *_eventSubmissionManager;
    id /* block */ _eventConstructor;
    BOOL _queue_isObserving;
    id /* block */ _observationReadyCompletion;
    NSObject<OS_os_log> *_logCategory;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonReady:(id)a0;
- (void)_unitTest_setObservationReadyCompletion:(id /* block */)a0;
- (void)_submitAnalyticsEventWithCompletion:(id /* block */)a0;
- (void)reportDailyAnalyticsWithCoordinator:(id)a0 completion:(id /* block */)a1;
- (id)initWithProfile:(id)a0 eventSubmissionManager:(id)a1 logCategory:(id)a2 eventConstructor:(id /* block */)a3;
- (void).cxx_destruct;

@end
