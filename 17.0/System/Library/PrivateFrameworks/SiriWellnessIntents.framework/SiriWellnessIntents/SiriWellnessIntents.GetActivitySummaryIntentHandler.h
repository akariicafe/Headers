@class GetAcitivitySummaryIntent, GetAcitivitySummaryIntentResponse;

@interface SiriWellnessIntents.GetActivitySummaryIntentHandler : NSObject <GetAcitivitySummaryIntentHandling> {
    void /* unknown type, empty encoding */ store;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleGetAcitivitySummary:(GetAcitivitySummaryIntent *)a0 completion:(void (^)(GetAcitivitySummaryIntentResponse *))a1;

@end
