@class NSArray, SiriDeviceResolutionResult, ResumeTimerIntentResponse, ResumeTimerIntent;

@interface SiriTimeTimerInternal.ResumeTimerIntentHandlerSingle : NSObject <ResumeTimerIntentHandling> {
    void /* unknown type, empty encoding */ siriTimerManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmResumeTimer:(ResumeTimerIntent *)a0 completion:(void (^)(ResumeTimerIntentResponse *))a1;
- (void)handleResumeTimer:(id)a0 completion:(id /* block */)a1;
- (void)resolveTargetTimerForResumeTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveAllAvailableTargetsForResumeTimer:(ResumeTimerIntent *)a0 withCompletion:(void (^)(NSArray *))a1;
- (void)resolveAssociatedDeviceTargetForResumeTimer:(ResumeTimerIntent *)a0 withCompletion:(void (^)(SiriDeviceResolutionResult *))a1;

@end
