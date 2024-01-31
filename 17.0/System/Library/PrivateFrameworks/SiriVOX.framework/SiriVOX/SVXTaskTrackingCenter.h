@class NSString, NSMutableSet;
@protocol SVXPerforming, SVXTaskTrackingCenterDelegate;

@interface SVXTaskTrackingCenter : NSObject <SVXTaskTrackingDelegate> {
    id<SVXPerforming> _performer;
    NSMutableSet *_contexts;
    id<SVXTaskTrackingCenterDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_beginContext:(id)a0;
- (void)_endContext:(id)a0;
- (void)_endContextsPassingTest:(id /* block */)a0;
- (id)beginTrackingTaskWithContext:(id)a0 instrumentationContext:(id)a1;
- (void)endTrackingAllTasks;
- (void)endTrackingTaskWithContext:(id)a0;
- (void)endTrackingTasksPassingTest:(id /* block */)a0;
- (void)getContextsOfAllTrackedTasksUsingBlock:(id /* block */)a0;
- (void)getContextsOfAllTrackedTasksUsingSyncBlock:(id /* block */)a0;
- (id)initWithPerformer:(id)a0 delegate:(id)a1;
- (void)taskTracker:(id)a0 childWillBegin:(id)a1;
- (void)taskTrackerDidEnd:(id)a0;

@end
