@interface TriggerConditionResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithTriggerConditionToConfirm:(id)a0;
+ (id)disambiguationWithTriggerConditionsToDisambiguate:(id)a0;
+ (id)successWithResolvedTriggerCondition:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
