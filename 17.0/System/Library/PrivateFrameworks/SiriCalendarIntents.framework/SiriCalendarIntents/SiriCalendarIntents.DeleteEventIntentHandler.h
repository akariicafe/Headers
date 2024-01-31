@class INDeleteEventIntent, INBooleanResolutionResult, INStringResolutionResult, INDeleteEventIntentResponse;

@interface SiriCalendarIntents.DeleteEventIntentHandler : SiriCalendarIntents.BaseIntentHandler <INDeleteEventIntentHandling>

- (void)confirmDeleteEvent:(INDeleteEventIntent *)a0 completion:(void (^)(INDeleteEventIntentResponse *))a1;
- (void)handleDeleteEvent:(INDeleteEventIntent *)a0 completion:(void (^)(INDeleteEventIntentResponse *))a1;
- (void)resolveDeleteAllOccurrencesForDeleteEvent:(INDeleteEventIntent *)a0 withCompletion:(void (^)(INBooleanResolutionResult *))a1;
- (void)resolveTargetEventIdentifierForDeleteEvent:(INDeleteEventIntent *)a0 withCompletion:(void (^)(INStringResolutionResult *))a1;

@end
