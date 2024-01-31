@class CreateTimerIntent, NSArray, SiriDeviceResolutionResult;

@interface SiriTimeTimerInternal.CreateTimerIntentHandlerSingle : NSObject <CreateTimerIntentHandling> {
    void /* unknown type, empty encoding */ siriTimerManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmCreateTimer:(id)a0 completion:(id /* block */)a1;
- (void)handleCreateTimer:(id)a0 completion:(id /* block */)a1;
- (void)resolveLabelForCreateTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTypeForCreateTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveAllAvailableTargetsForCreateTimer:(CreateTimerIntent *)a0 withCompletion:(void (^)(NSArray *))a1;
- (void)resolveAssociatedDeviceTargetForCreateTimer:(CreateTimerIntent *)a0 withCompletion:(void (^)(SiriDeviceResolutionResult *))a1;
- (void)resolveDurationNumberForCreateTimer:(id)a0 withCompletion:(id /* block */)a1;

@end
