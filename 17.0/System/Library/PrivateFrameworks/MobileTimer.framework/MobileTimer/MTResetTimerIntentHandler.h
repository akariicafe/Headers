@class NSString;

@interface MTResetTimerIntentHandler : MTUpdateTimerIntentHandler <INResetTimerIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmResetTimer:(id)a0 completion:(id /* block */)a1;
- (void)handleResetTimer:(id)a0 completion:(id /* block */)a1;
- (void)resolveTargetTimerForResetTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)_handleResetTimer:(id)a0 dryRun:(BOOL)a1 completion:(id /* block */)a2;
- (id)_responseToResetTimerIntent:(id)a0 withResetTimers:(id)a1 error:(id)a2 dryRun:(BOOL)a3;

@end
