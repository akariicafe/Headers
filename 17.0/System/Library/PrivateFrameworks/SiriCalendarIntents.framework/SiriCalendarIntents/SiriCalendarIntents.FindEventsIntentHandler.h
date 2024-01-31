@class INEventAttributeResolutionResult, INStringResolutionResult, INPlacemarkResolutionResult, INFindEventsIntentResponse, INFindEventsIntent, INDateComponentsRangeResolutionResult;

@interface SiriCalendarIntents.FindEventsIntentHandler : SiriCalendarIntents.SlotResolvingIntentHandler <INFindEventsIntentHandling> {
    void /* unknown type, empty encoding */ commonCats;
}

- (void).cxx_destruct;
- (void)confirmFindEvents:(INFindEventsIntent *)a0 completion:(void (^)(INFindEventsIntentResponse *))a1;
- (void)handleFindEvents:(INFindEventsIntent *)a0 completion:(void (^)(INFindEventsIntentResponse *))a1;
- (void)resolveDateTimeRangeForFindEvents:(INFindEventsIntent *)a0 withCompletion:(void (^)(INDateComponentsRangeResolutionResult *))a1;
- (void)resolveLocationForFindEvents:(INFindEventsIntent *)a0 withCompletion:(void (^)(INPlacemarkResolutionResult *))a1;
- (void)resolveParticipantsForFindEvents:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveRequestedEventAttributeForFindEvents:(INFindEventsIntent *)a0 withCompletion:(void (^)(INEventAttributeResolutionResult *))a1;
- (void)resolveSearchQueryForFindEvents:(INFindEventsIntent *)a0 withCompletion:(void (^)(INStringResolutionResult *))a1;

@end
