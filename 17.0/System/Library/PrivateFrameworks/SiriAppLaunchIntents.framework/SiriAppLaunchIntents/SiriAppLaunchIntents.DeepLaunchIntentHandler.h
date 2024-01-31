@class DeepLaunchRequestedApplicationResolutionResult, DeepLaunchPageNameResolutionResult, DeepLaunchIntentResponse, DeepLaunchIntent;

@interface SiriAppLaunchIntents.DeepLaunchIntentHandler : NSObject <DeepLaunchIntentHandling> {
    void /* unknown type, empty encoding */ appsSearcher;
    void /* unknown type, empty encoding */ hsqaRunner;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmDeepLaunch:(DeepLaunchIntent *)a0 completion:(void (^)(DeepLaunchIntentResponse *))a1;
- (void)handleDeepLaunch:(DeepLaunchIntent *)a0 completion:(void (^)(DeepLaunchIntentResponse *))a1;
- (void)resolvePageNameForDeepLaunch:(DeepLaunchIntent *)a0 withCompletion:(void (^)(DeepLaunchPageNameResolutionResult *))a1;
- (void)resolveRequestedApplicationForDeepLaunch:(DeepLaunchIntent *)a0 withCompletion:(void (^)(DeepLaunchRequestedApplicationResolutionResult *))a1;

@end
