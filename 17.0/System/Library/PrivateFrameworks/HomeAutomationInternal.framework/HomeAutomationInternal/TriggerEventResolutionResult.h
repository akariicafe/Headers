@interface TriggerEventResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithTriggerEventToConfirm:(long long)a0;
+ (id)successWithResolvedTriggerEvent:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
