@class INPlacemarkResolutionResult, INCreateEventIntent;

@interface SiriCalendarIntents.CreateEventIntentHandler : SiriCalendarIntents.SlotResolvingIntentHandler <INCreateEventIntentHandling>

- (void)confirmCreateEvent:(id)a0 completion:(id /* block */)a1;
- (void)handleCreateEvent:(id)a0 completion:(id /* block */)a1;
- (void)resolveDateTimeRangeForCreateEvent:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveLocationForCreateEvent:(INCreateEventIntent *)a0 withCompletion:(void (^)(INPlacemarkResolutionResult *))a1;
- (void)resolveParticipantsForCreateEvent:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTitleForCreateEvent:(id)a0 withCompletion:(id /* block */)a1;

@end
