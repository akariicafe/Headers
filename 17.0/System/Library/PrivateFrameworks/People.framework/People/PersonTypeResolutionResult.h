@interface PersonTypeResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithPersonTypeToConfirm:(id)a0;
+ (id)disambiguationWithPersonTypesToDisambiguate:(id)a0;
+ (id)successWithResolvedPersonType:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
