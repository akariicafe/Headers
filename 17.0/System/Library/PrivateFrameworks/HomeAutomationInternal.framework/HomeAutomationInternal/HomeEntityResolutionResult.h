@interface HomeEntityResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithHomeEntityToConfirm:(id)a0;
+ (id)disambiguationWithHomeEntitysToDisambiguate:(id)a0;
+ (id)successWithResolvedHomeEntity:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
