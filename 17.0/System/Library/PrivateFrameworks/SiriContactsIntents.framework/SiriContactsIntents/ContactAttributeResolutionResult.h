@interface ContactAttributeResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithContactAttributeToConfirm:(id)a0;
+ (id)disambiguationWithContactAttributesToDisambiguate:(id)a0;
+ (id)successWithResolvedContactAttribute:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
