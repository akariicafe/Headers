@class NSArray, SiriDeviceResolutionResult, DeleteTimerIntentResponse, DeleteTimerIntent;

@interface SiriTimeTimerInternal.DeleteTimerIntentHandlerSingle : NSObject <DeleteTimerIntentHandling> {
    void /* unknown type, empty encoding */ siriTimerManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmDeleteTimer:(DeleteTimerIntent *)a0 completion:(void (^)(DeleteTimerIntentResponse *))a1;
- (void)handleDeleteTimer:(id)a0 completion:(id /* block */)a1;
- (void)resolveTargetTimerForDeleteTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveAllAvailableTargetsForDeleteTimer:(DeleteTimerIntent *)a0 withCompletion:(void (^)(NSArray *))a1;
- (void)resolveAssociatedDeviceTargetForDeleteTimer:(DeleteTimerIntent *)a0 withCompletion:(void (^)(SiriDeviceResolutionResult *))a1;

@end
