@class NSArray, NSString, NSMutableDictionary, NSMutableSet, BLSHEngineRequestDatesOperation, NSDateInterval, NSDate;
@protocol BLSBacklightSceneEnvironment, BLSHOSTimerProviding;

@interface BLSHLocalHostSceneEnvironmentUpdaterTimelinesCalculator : NSObject <BLSHEngineRequestDatesOperationDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_lock_timelines;
    NSMutableDictionary *_lock_incompleteTimelineEntriesForDateInterval;
    BLSHEngineRequestDatesOperation *_lock_requestDatesOperation;
    BOOL _lock_requestDatesOperationComplete;
    BOOL _lock_localHostEnvTimelinesComplete;
    NSDateInterval *_dateInterval;
    NSDate *_previousPresentationDate;
    id<BLSBacklightSceneEnvironment> _localHostEnvironment;
    NSArray *_subHostedHostEnvironments;
    id<BLSHOSTimerProviding> _osTimerProvider;
    BOOL _shouldReset;
    id /* block */ _completion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)lock_completeAllTimelineEntries;
- (void)calculateWithCompletion:(id /* block */)a0;
- (void)callCompletionIfDone;
- (void)requestDatesOperation:(id)a0 didTimeoutPendingEnvironments:(id)a1;
- (void)requestDatesOperation:(id)a0 environment:(id)a1 didProvideSpecifiers:(id)a2 forPresentationInterval:(id)a3 isComplete:(BOOL)a4;

@end
