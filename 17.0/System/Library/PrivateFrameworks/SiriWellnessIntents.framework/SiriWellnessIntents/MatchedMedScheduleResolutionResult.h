@interface MatchedMedScheduleResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithMatchedMedScheduleToConfirm:(id)a0;
+ (id)disambiguationWithMatchedMedSchedulesToDisambiguate:(id)a0;
+ (id)successWithResolvedMatchedMedSchedule:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
