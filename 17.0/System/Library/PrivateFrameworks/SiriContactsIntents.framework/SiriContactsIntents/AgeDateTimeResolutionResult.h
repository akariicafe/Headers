@interface AgeDateTimeResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)successWithResolvedAgeDateTime:(id)a0;
+ (id)confirmationRequiredWithAgeDateTimeToConfirm:(id)a0;
+ (id)disambiguationWithAgeDateTimesToDisambiguate:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
