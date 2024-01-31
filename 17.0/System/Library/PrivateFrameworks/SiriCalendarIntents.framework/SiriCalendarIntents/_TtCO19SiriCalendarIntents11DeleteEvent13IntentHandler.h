@class INDeleteEventIntent, INBooleanResolutionResult, INStringResolutionResult, INDeleteEventIntentResponse;

@interface _TtCO19SiriCalendarIntents11DeleteEvent13IntentHandler : NSObject <INDeleteEventIntentHandling> {
    void /* unknown type, empty encoding */ eventProvider;
    void /* unknown type, empty encoding */ promptedForEventRecurrence;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleDeleteEvent:(INDeleteEventIntent *)a0 completion:(void (^)(INDeleteEventIntentResponse *))a1;
- (void)resolveDeleteAllOccurrencesForDeleteEvent:(INDeleteEventIntent *)a0 withCompletion:(void (^)(INBooleanResolutionResult *))a1;
- (void)resolveTargetEventIdentifierForDeleteEvent:(INDeleteEventIntent *)a0 withCompletion:(void (^)(INStringResolutionResult *))a1;

@end
