@interface ApplicationResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)successWithResolvedApplication:(id)a0;
+ (id)confirmationRequiredWithApplicationToConfirm:(id)a0;
+ (id)disambiguationWithApplicationsToDisambiguate:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
