@class NSArray, SiriDeviceResolutionResult, SetTimerAttributeIntent, SetTimerAttributeIntentResponse;

@interface SiriTimeTimerInternal.SetTimerAttributeIntentHandlerSingle : NSObject <SetTimerAttributeIntentHandling> {
    void /* unknown type, empty encoding */ siriTimerManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmSetTimerAttribute:(SetTimerAttributeIntent *)a0 completion:(void (^)(SetTimerAttributeIntentResponse *))a1;
- (void)handleSetTimerAttribute:(id)a0 completion:(id /* block */)a1;
- (void)resolveTargetTimerForSetTimerAttribute:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveToDurationForSetTimerAttribute:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveAllAvailableTargetsForSetTimerAttribute:(SetTimerAttributeIntent *)a0 withCompletion:(void (^)(NSArray *))a1;
- (void)resolveAssociatedDeviceTargetForSetTimerAttribute:(SetTimerAttributeIntent *)a0 withCompletion:(void (^)(SiriDeviceResolutionResult *))a1;

@end
