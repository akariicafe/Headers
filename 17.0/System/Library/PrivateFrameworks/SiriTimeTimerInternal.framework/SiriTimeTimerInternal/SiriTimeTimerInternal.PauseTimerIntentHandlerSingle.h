@class PauseTimerIntent, NSArray, SiriDeviceResolutionResult, PauseTimerIntentResponse;

@interface SiriTimeTimerInternal.PauseTimerIntentHandlerSingle : NSObject <PauseTimerIntentHandling> {
    void /* unknown type, empty encoding */ siriTimerManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmPauseTimer:(PauseTimerIntent *)a0 completion:(void (^)(PauseTimerIntentResponse *))a1;
- (void)handlePauseTimer:(id)a0 completion:(id /* block */)a1;
- (void)resolveTargetTimerForPauseTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveAllAvailableTargetsForPauseTimer:(PauseTimerIntent *)a0 withCompletion:(void (^)(NSArray *))a1;
- (void)resolveAssociatedDeviceTargetForPauseTimer:(PauseTimerIntent *)a0 withCompletion:(void (^)(SiriDeviceResolutionResult *))a1;

@end
