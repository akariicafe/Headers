@interface SleepAlarmAttributeResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithSleepAlarmAttributeToConfirm:(id)a0;
+ (id)disambiguationWithSleepAlarmAttributesToDisambiguate:(id)a0;
+ (id)successWithResolvedSleepAlarmAttribute:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
