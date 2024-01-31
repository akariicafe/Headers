@interface ContentSearchResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithContentSearchToConfirm:(id)a0;
+ (id)disambiguationWithContentSearchsToDisambiguate:(id)a0;
+ (id)successWithResolvedContentSearch:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
