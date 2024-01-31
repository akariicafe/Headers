@class NSArray, INCreateEventIntentResponse, INCreateEventIntent, INPlacemarkResolutionResult, INDateComponentsRangeResolutionResult;

@interface _TtCO19SiriCalendarIntents11CreateEvent13IntentHandler : NSObject <INCreateEventIntentHandling> {
    void /* unknown type, empty encoding */ originalIntentHandler;
    void /* unknown type, empty encoding */ correctionsFlowProvider;
    void /* unknown type, empty encoding */ featureManager;
    void /* unknown type, empty encoding */ eventProvider;
    void /* unknown type, empty encoding */ _correctionsClient;
    void /* unknown type, empty encoding */ inConflictConfirmation;
    void /* unknown type, empty encoding */ previousDateTimeRange;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleCreateEvent:(INCreateEventIntent *)a0 completion:(void (^)(INCreateEventIntentResponse *))a1;
- (void)resolveDateTimeRangeForCreateEvent:(INCreateEventIntent *)a0 withCompletion:(void (^)(INDateComponentsRangeResolutionResult *))a1;
- (void)resolveLocationForCreateEvent:(INCreateEventIntent *)a0 withCompletion:(void (^)(INPlacemarkResolutionResult *))a1;
- (void)resolveParticipantsForCreateEvent:(INCreateEventIntent *)a0 withCompletion:(void (^)(NSArray *))a1;
- (void)resolveTitleForCreateEvent:(id)a0 withCompletion:(id /* block */)a1;

@end
