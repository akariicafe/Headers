@interface ContactResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithContactToConfirm:(id)a0;
+ (id)disambiguationWithContactsToDisambiguate:(id)a0;
+ (id)successWithResolvedContact:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
