@class PlayVideoIntent, PlayVideoIntentResponse, PlayVideoContentResolutionResult;

@interface SiriVideoIntents.PlayVideoIntentHandler : NSObject <PlayVideoIntentHandling> {
    void /* unknown type, empty encoding */ contentResolver;
    void /* unknown type, empty encoding */ analyticsService;
    void /* unknown type, empty encoding */ backgroundFetch;
    void /* unknown type, empty encoding */ signalRecorder;
    void /* unknown type, empty encoding */ userDefaultsProvider;
    void /* unknown type, empty encoding */ contentWith3pAppsProviding;
    void /* unknown type, empty encoding */ deviceState;
    void /* unknown type, empty encoding */ tipService;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmPlayVideo:(PlayVideoIntent *)a0 completion:(void (^)(PlayVideoIntentResponse *))a1;
- (void)handlePlayVideo:(PlayVideoIntent *)a0 completion:(void (^)(PlayVideoIntentResponse *))a1;
- (void)resolveContentForPlayVideo:(PlayVideoIntent *)a0 withCompletion:(void (^)(PlayVideoContentResolutionResult *))a1;

@end
