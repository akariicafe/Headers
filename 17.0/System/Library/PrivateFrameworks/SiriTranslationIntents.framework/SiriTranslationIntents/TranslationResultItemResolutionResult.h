@interface TranslationResultItemResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithTranslationResultItemToConfirm:(id)a0;
+ (id)disambiguationWithTranslationResultItemsToDisambiguate:(id)a0;
+ (id)successWithResolvedTranslationResultItem:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
