@class INEventAttributeResolutionResult, NSArray, INStringResolutionResult, INPlacemarkResolutionResult, INFindEventsIntentResponse, INFindEventsIntent, INDateComponentsRangeResolutionResult;

@interface _TtCO19SiriCalendarIntents10FindEvents13IntentHandler : NSObject <INFindEventsIntentHandling> {
    void /* unknown type, empty encoding */ originalIntentHandler;
    void /* unknown type, empty encoding */ eventProvider;
    void /* unknown type, empty encoding */ ordinalReference;
    void /* unknown type, empty encoding */ fallbackSearchQuery;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleFindEvents:(INFindEventsIntent *)a0 completion:(void (^)(INFindEventsIntentResponse *))a1;
- (void)resolveDateTimeRangeForFindEvents:(INFindEventsIntent *)a0 withCompletion:(void (^)(INDateComponentsRangeResolutionResult *))a1;
- (void)resolveLocationForFindEvents:(INFindEventsIntent *)a0 withCompletion:(void (^)(INPlacemarkResolutionResult *))a1;
- (void)resolveParticipantsForFindEvents:(INFindEventsIntent *)a0 withCompletion:(void (^)(NSArray *))a1;
- (void)resolveRequestedEventAttributeForFindEvents:(INFindEventsIntent *)a0 withCompletion:(void (^)(INEventAttributeResolutionResult *))a1;
- (void)resolveSearchQueryForFindEvents:(INFindEventsIntent *)a0 withCompletion:(void (^)(INStringResolutionResult *))a1;

@end
