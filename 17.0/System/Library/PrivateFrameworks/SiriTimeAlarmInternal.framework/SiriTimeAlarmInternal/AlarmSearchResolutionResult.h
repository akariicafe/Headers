@interface AlarmSearchResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)successWithResolvedAlarmSearch:(id)a0;
+ (id)confirmationRequiredWithAlarmSearchToConfirm:(id)a0;
+ (id)disambiguationWithAlarmSearchsToDisambiguate:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
