@class NSString, HDCoalescedTaskPoolQuota, NSObject, NSMutableArray;
@protocol OS_xpc_object, OS_os_log;

@interface HDXPCGatedActivity : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _handler;
    NSObject<OS_xpc_object> *_criteria;
    double _nextScheduledFireDeadline;
    BOOL _inProgress;
    NSMutableArray *_pendingCompletions;
    double _nextFireTime;
    NSMutableArray *_nextCompletions;
    id /* block */ unitTest_ActivityCompletion;
}

@property (retain) NSObject<OS_xpc_object> *currentActivity;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingCategory;
@property (readonly) BOOL shouldDefer;
@property BOOL rescheduleWhileInProgress;
@property BOOL waitingForTrigger;
@property (copy, nonatomic) HDCoalescedTaskPoolQuota *quota;

- (void)_runRequestWithMaximumDelay:(double)a0 requiredDelay:(double)a1 completion:(id /* block */)a2;
- (void)requestRunWithMaximumDelay:(double)a0 completion:(id /* block */)a1;
- (void)_lock_resetNextActivityFireDate;
- (void)_handleXPCActivityCallback:(id)a0;
- (void)_lock_setNextScheduledFireDeadline:(double)a0;
- (void)_performActivity:(id)a0 completion:(id /* block */)a1;
- (id)description;
- (void)runUngatedWithCompletion:(id /* block */)a0;
- (void)unitTest_setActivityCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_activityFinishedWithResult:(long long)a0 error:(id)a1;
- (id)initWithName:(id)a0 criteria:(id)a1 loggingCategory:(id)a2 handler:(id /* block */)a3;
- (void)_registerActivityWithCriteria:(id)a0;
- (void)_registerActivityWithCriteria:(id)a0 delay:(double)a1 gracePeriod:(double)a2;

@end
