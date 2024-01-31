@class NSArray, ResetTimerIntent, SiriDeviceResolutionResult, ResetTimerIntentResponse;

@interface SiriTimeTimerInternal.ResetTimerIntentHandlerSingle : NSObject <ResetTimerIntentHandling> {
    void /* unknown type, empty encoding */ siriTimerManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmResetTimer:(ResetTimerIntent *)a0 completion:(void (^)(ResetTimerIntentResponse *))a1;
- (void)handleResetTimer:(id)a0 completion:(id /* block */)a1;
- (void)resolveTargetTimerForResetTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveAllAvailableTargetsForResetTimer:(ResetTimerIntent *)a0 withCompletion:(void (^)(NSArray *))a1;
- (void)resolveAssociatedDeviceTargetForResetTimer:(ResetTimerIntent *)a0 withCompletion:(void (^)(SiriDeviceResolutionResult *))a1;

@end
