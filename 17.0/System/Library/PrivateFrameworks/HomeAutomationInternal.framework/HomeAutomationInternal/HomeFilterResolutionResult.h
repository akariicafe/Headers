@interface HomeFilterResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithHomeFilterToConfirm:(id)a0;
+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithHomeFiltersToDisambiguate:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedHomeFilter:(id)a0;
+ (id)successWithResolvedObject:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
