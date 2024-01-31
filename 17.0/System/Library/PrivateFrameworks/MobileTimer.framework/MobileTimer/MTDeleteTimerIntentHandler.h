@class NSString;

@interface MTDeleteTimerIntentHandler : MTTimerIntentHandler <INDeleteTimerIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmDeleteTimer:(id)a0 completion:(id /* block */)a1;
- (void)handleDeleteTimer:(id)a0 completion:(id /* block */)a1;
- (void)resolveDeleteMultipleForDeleteTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTargetTimerForDeleteTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)_deleteTimer:(id)a0 multiple:(BOOL)a1 dryRun:(BOOL)a2 completion:(id /* block */)a3;
- (id)_responseToDeleteTimerIntent:(id)a0 withDeletedTimers:(id)a1 error:(id)a2 dryRun:(BOOL)a3;
- (id)_timerFromIntentTargetTimer:(id)a0 defaultState:(long long)a1;

@end
