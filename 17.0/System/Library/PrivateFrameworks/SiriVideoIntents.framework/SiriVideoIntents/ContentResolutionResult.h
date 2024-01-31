@interface ContentResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithContentToConfirm:(id)a0;
+ (id)disambiguationWithContentsToDisambiguate:(id)a0;
+ (id)successWithResolvedContent:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
