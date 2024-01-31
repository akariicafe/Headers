@class SearchTimerIntent, NSArray, SiriDeviceResolutionResult;

@interface SiriTimeTimerInternal.SearchForTimersIntentHandlerSingle : NSObject <SearchTimerIntentHandling> {
    void /* unknown type, empty encoding */ siriTimerManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmSearchTimer:(id)a0 completion:(id /* block */)a1;
- (void)handleSearchTimer:(id)a0 completion:(id /* block */)a1;
- (void)resolveAllAvailableTargetsForSearchTimer:(SearchTimerIntent *)a0 withCompletion:(void (^)(NSArray *))a1;
- (void)resolveAssociatedDeviceTargetForSearchTimer:(SearchTimerIntent *)a0 withCompletion:(void (^)(SiriDeviceResolutionResult *))a1;

@end
