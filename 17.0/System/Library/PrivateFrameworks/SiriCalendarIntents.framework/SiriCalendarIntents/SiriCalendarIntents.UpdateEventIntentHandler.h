@class INBooleanResolutionResult, INUpdateEventIntentResponse, NSArray, INUpdateEventIntent, INPlacemarkResolutionResult, INDateComponentsRangeResolutionResult, INStringResolutionResult;

@interface SiriCalendarIntents.UpdateEventIntentHandler : SiriCalendarIntents.SlotResolvingIntentHandler <INUpdateEventIntentHandling>

- (void)confirmUpdateEvent:(INUpdateEventIntent *)a0 completion:(void (^)(INUpdateEventIntentResponse *))a1;
- (void)handleUpdateEvent:(INUpdateEventIntent *)a0 completion:(void (^)(INUpdateEventIntentResponse *))a1;
- (void)resolveAddParticipantsForUpdateEvent:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveRemoveLocationForUpdateEvent:(INUpdateEventIntent *)a0 withCompletion:(void (^)(INBooleanResolutionResult *))a1;
- (void)resolveRemoveParticipantsForUpdateEvent:(INUpdateEventIntent *)a0 withCompletion:(void (^)(NSArray *))a1;
- (void)resolveSetDateTimeRangeForUpdateEvent:(INUpdateEventIntent *)a0 withCompletion:(void (^)(INDateComponentsRangeResolutionResult *))a1;
- (void)resolveSetLocationForUpdateEvent:(INUpdateEventIntent *)a0 withCompletion:(void (^)(INPlacemarkResolutionResult *))a1;
- (void)resolveSetTitleForUpdateEvent:(INUpdateEventIntent *)a0 withCompletion:(void (^)(INStringResolutionResult *))a1;
- (void)resolveTargetEventIdentifierForUpdateEvent:(INUpdateEventIntent *)a0 withCompletion:(void (^)(INStringResolutionResult *))a1;
- (void)resolveUpdateAllOccurrencesForUpdateEvent:(INUpdateEventIntent *)a0 withCompletion:(void (^)(INBooleanResolutionResult *))a1;

@end
