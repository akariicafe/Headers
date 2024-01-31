@class INUpdateEventIntentResponse, NSArray, INBooleanResolutionResult, INUpdateEventIntent, INPlacemarkResolutionResult, INDateComponentsRangeResolutionResult, INStringResolutionResult;

@interface _TtCO19SiriCalendarIntents11UpdateEvent13IntentHandler : NSObject <INUpdateEventIntentHandling> {
    void /* unknown type, empty encoding */ originalIntentHandler;
    void /* unknown type, empty encoding */ eventProvider;
    void /* unknown type, empty encoding */ parametersToUpdate;
    void /* unknown type, empty encoding */ inConflictConfirmation;
    void /* unknown type, empty encoding */ previousDateTimeRange;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleUpdateEvent:(INUpdateEventIntent *)a0 completion:(void (^)(INUpdateEventIntentResponse *))a1;
- (void)resolveAddParticipantsForUpdateEvent:(INUpdateEventIntent *)a0 withCompletion:(void (^)(NSArray *))a1;
- (void)resolveRemoveLocationForUpdateEvent:(INUpdateEventIntent *)a0 withCompletion:(void (^)(INBooleanResolutionResult *))a1;
- (void)resolveRemoveParticipantsForUpdateEvent:(INUpdateEventIntent *)a0 withCompletion:(void (^)(NSArray *))a1;
- (void)resolveSetDateTimeRangeForUpdateEvent:(INUpdateEventIntent *)a0 withCompletion:(void (^)(INDateComponentsRangeResolutionResult *))a1;
- (void)resolveSetLocationForUpdateEvent:(INUpdateEventIntent *)a0 withCompletion:(void (^)(INPlacemarkResolutionResult *))a1;
- (void)resolveSetTitleForUpdateEvent:(INUpdateEventIntent *)a0 withCompletion:(void (^)(INStringResolutionResult *))a1;
- (void)resolveTargetEventIdentifierForUpdateEvent:(INUpdateEventIntent *)a0 withCompletion:(void (^)(INStringResolutionResult *))a1;
- (void)resolveUpdateAllOccurrencesForUpdateEvent:(INUpdateEventIntent *)a0 withCompletion:(void (^)(INBooleanResolutionResult *))a1;

@end
