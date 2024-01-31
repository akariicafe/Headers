@interface MatchedMedNameResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithMatchedMedNameToConfirm:(id)a0;
+ (id)disambiguationWithMatchedMedNamesToDisambiguate:(id)a0;
+ (id)successWithResolvedMatchedMedName:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
